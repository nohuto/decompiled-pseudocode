/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x1800478E8
 * Callers:
 *     RtlpComputeMergedAcl @ 0x1800477C8 (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x18004DAD4 (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int *a9,
        __int64 a10,
        _DWORD *a11)
{
  unsigned int *v11; // r12
  __int64 v12; // r15
  char v13; // r14
  bool v17; // bp
  unsigned int v18; // edi
  int v19; // r9d
  _DWORD *v20; // rax
  int v21; // ebx
  __int64 result; // rax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  _DWORD v25[18]; // [rsp+70h] [rbp-48h] BYREF
  int v27; // [rsp+D8h] [rbp+20h] BYREF

  v11 = a9;
  v12 = a10;
  v13 = 0;
  v27 = 0;
  v25[0] = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(a10, *a9, 2LL);
  v20 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v20 = 5120;
    if ( !a3 )
      goto LABEL_17;
    LOBYTE(v19) = 16;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    result = RtlpCopyAces((_DWORD)a3, a7, 2, v19, 1, a5, a6, a5, a6, 1, 0, a8, (__int64)&v27, v12);
    goto LABEL_33;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v21 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      result = RtlpCopyAces((_DWORD)a3, a7, 1, 0, 1, a5, a6, a5, a6, 1, 0, a8, (__int64)&v27, v12);
      if ( (_DWORD)result == -1073741789 )
      {
        v13 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
      if ( !*((_WORD *)a3 + 2) )
        v17 = 0;
      goto LABEL_11;
    }
    if ( a8 != 1 )
    {
LABEL_11:
      if ( a1 )
      {
        if ( v18 <= (unsigned __int8)*a1 )
          LOBYTE(v18) = *a1;
        result = RtlpCopyAces((_DWORD)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, 0, v21, (__int64)v25, v12);
        if ( (_DWORD)result == -1073741789 )
        {
          v13 = 1;
          result = 0LL;
        }
        if ( (int)result < 0 )
          return result;
      }
      goto LABEL_17;
    }
    return 3221225591LL;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    result = RtlpCopyAces((_DWORD)a3, a7, 2, 0, 1, a5, a6, a5, a6, 1, 1, a8, (__int64)&v27, v12);
LABEL_33:
    if ( (_DWORD)result == -1073741789 )
    {
      v13 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    v17 = 0;
    goto LABEL_17;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_17:
  v23 = v27 + v25[0];
  if ( v27 + v25[0] || !v17 )
  {
    if ( (unsigned __int64)v23 + 8 > 0xFFFF )
      return 3221225597LL;
    v24 = v23 + 8;
    *v11 = v24;
    if ( v13 )
      return 3221225507LL;
    *(_WORD *)(v12 + 2) = v24;
    *(_BYTE *)v12 = v18;
  }
  else
  {
    *v11 = 0;
  }
  return 0LL;
}
