/*
 * XREFs of BaseFormatObjectAttributes @ 0x180102DBC
 * Callers:
 *     _ResCreateFileMapping @ 0x180103CD0 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x180103DFC (_ResCreateMutex.c)
 * Callees:
 *     BaseGetNamedObjectDirectory @ 0x180102E54 (BaseGetNamedObjectDirectory.c)
 */

__int64 __fastcall BaseFormatObjectAttributes(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // edi
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 16) != 0 ? 2 : 0;
  }
  else
  {
    if ( !a3 )
    {
      *a4 = 0LL;
      return 0LL;
    }
    v7 = 0;
    v8 = 0LL;
  }
  if ( a3 )
  {
    result = BaseGetNamedObjectDirectory(&v11);
    if ( (int)result < 0 )
      return result;
    v10 = v11;
    v7 |= 0x80u;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 48;
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = v8;
  *a4 = a1;
  return 0LL;
}
