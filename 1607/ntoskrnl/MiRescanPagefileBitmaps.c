/*
 * XREFs of MiRescanPagefileBitmaps @ 0x140143114
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 * Callees:
 *     MiRescanPageFileBitmapPortion @ 0x1400B41F8 (MiRescanPageFileBitmapPortion.c)
 *     RtlFindNextClearRunUlong @ 0x1400B4864 (RtlFindNextClearRunUlong.c)
 *     MiInitializePagefileBitmapsCache @ 0x140143274 (MiInitializePagefileBitmapsCache.c)
 */

__int64 __fastcall MiRescanPagefileBitmaps(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  MiInitializePagefileBitmapsCache(a1);
  v3 = *(_QWORD *)(a1 + 176);
  v4 = 0;
  v7 = *(_DWORD *)a1;
  v5 = *(_QWORD *)(a1 + 112);
  v10 = v3;
  v8 = *(_QWORD *)(v5 + 32);
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong(&v7, v4, v2, 0xFFFFFFFF, &v9);
    if ( !(_DWORD)result )
      break;
    v2 = v9;
    v4 = v9 + result;
    if ( (unsigned int)result > *(_DWORD *)(v3 + 52) )
    {
      MiRescanPageFileBitmapPortion(a1, *(_QWORD *)(a1 + 112) + 8LL, v9, result, &v10);
      v3 = v10;
    }
  }
  if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
  {
    result = *(unsigned int *)(v3 + 52);
    *(_DWORD *)(a1 + 140) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 140) = 0;
  }
  return result;
}
