/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x14010F674
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x1400B4864 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(__int64 a1, unsigned int *a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  unsigned int v7; // edi
  unsigned int v10; // ebp
  unsigned int NextClearRunUlong; // eax
  unsigned int v12; // edx
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  unsigned int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a2;
  v16 = *(_DWORD *)a1;
  v7 = a3;
  v10 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL);
  while ( 1 )
  {
    NextClearRunUlong = RtlFindNextClearRunUlong(&v16, v5, a3, 0xFFFFFFFF, &v20);
    if ( !NextClearRunUlong )
      break;
    v5 = v20 + NextClearRunUlong;
    if ( NextClearRunUlong >= v4 && (NextClearRunUlong >= v7 || a4 >= 0) )
    {
      v12 = v20 & 0x1F;
      v13 = v20 - v12;
      a3 = (unsigned __int64)(v20 - v12) >> 5;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL) + 4 * a3;
      v18 = v12 + NextClearRunUlong;
      while ( 1 )
      {
        v14 = RtlFindNextClearRunUlong(&v18, v12, a3, v7, &v20);
        if ( !v14 )
          break;
        v12 = v20 + v14;
        if ( v14 > v4 )
        {
          v10 = v13 + v20;
          v4 = v14;
          if ( v14 == v7 )
            goto LABEL_9;
        }
      }
      if ( v4 == v7 )
        break;
    }
  }
LABEL_9:
  if ( a4 < 0 && v4 < v7 )
  {
    v4 = 0;
    v10 = 0;
  }
  *a2 = v10;
  return v4;
}
