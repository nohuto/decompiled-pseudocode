/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x18008BB2C
 * Callers:
 *     RtlpComputeMergedAcl @ 0x18008BA0C (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x18006192C (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        GENERIC_MAPPING *a7,
        int a8,
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  ULONG *v11; // r12
  PACL v12; // r15
  char v13; // r14
  bool v17; // bp
  unsigned int v18; // edi
  _DWORD *v19; // rax
  int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // ecx
  ULONG v23; // ecx
  unsigned int v24[18]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+20h] BYREF

  v11 = a9;
  v12 = Acl;
  v13 = 0;
  v26 = 0;
  v24[0] = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v19 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v19 = 5120;
    if ( !a3 )
      goto LABEL_17;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    result = RtlpCopyAces((__int64)a3, a7, 2, 16, 1, a5, a6, a5, a6, 1, 0, a8, &v26, v12);
    goto LABEL_33;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v20 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      result = RtlpCopyAces((__int64)a3, a7, 1, 0, 1, a5, a6, a5, a6, 1, 0, a8, &v26, v12);
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
        result = RtlpCopyAces((__int64)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, 0, v20, v24, v12);
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
    result = RtlpCopyAces((__int64)a3, a7, 2, 0, 1, a5, a6, a5, a6, 1, 1, a8, &v26, v12);
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
  v22 = v26 + v24[0];
  if ( v26 + v24[0] || !v17 )
  {
    if ( (unsigned __int64)v22 + 8 > 0xFFFF )
      return 3221225597LL;
    v23 = v22 + 8;
    *v11 = v23;
    if ( v13 )
      return 3221225507LL;
    v12->AclSize = v23;
    v12->AclRevision = v18;
  }
  else
  {
    *v11 = 0;
  }
  return 0LL;
}
