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
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  ULONG *v11; // r12
  PACL v12; // r15
  char v13; // r14
  bool v17; // bp
  unsigned int v18; // edi
  __int64 v19; // r9
  _DWORD *v20; // rax
  int v21; // ebx
  __int64 result; // rax
  unsigned int v23; // ecx
  ULONG v24; // ecx
  int v25; // [rsp+20h] [rbp-98h]
  int v26; // [rsp+48h] [rbp-70h]
  int v27; // [rsp+50h] [rbp-68h]
  char v28; // [rsp+50h] [rbp-68h]
  int v29; // [rsp+58h] [rbp-60h]
  PACL v30; // [rsp+68h] [rbp-50h]
  _DWORD v31[18]; // [rsp+70h] [rbp-48h] BYREF
  int v33; // [rsp+D8h] [rbp+20h] BYREF

  v11 = a9;
  v12 = Acl;
  v13 = 0;
  v33 = 0;
  v31[0] = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v20 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v20 = 5120;
    if ( !a3 )
      goto LABEL_17;
    LOBYTE(v19) = 16;
    v30 = v12;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v29 = a8;
    v28 = 0;
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
      result = RtlpCopyAces(a3, a7, 1LL, 0LL, 1, a5, a6, a5, a6, 1, 0, a8, &v33, v12);
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
        LOBYTE(v27) = 0;
        LOBYTE(v26) = 1;
        LOBYTE(v25) = 0;
        result = RtlpCopyAces(a1, a7, 0LL, 0LL, v25, 0LL, 0LL, 0LL, 0LL, v26, v27, v21, v31, v12);
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
    v30 = v12;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v19 = 0LL;
    v29 = a8;
    v28 = 1;
LABEL_33:
    result = RtlpCopyAces(a3, a7, 2LL, v19, 1, a5, a6, a5, a6, 1, v28, v29, &v33, v30);
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
  v23 = v33 + v31[0];
  if ( v33 + v31[0] || !v17 )
  {
    if ( (unsigned __int64)v23 + 8 > 0xFFFF )
      return 3221225597LL;
    v24 = v23 + 8;
    *v11 = v24;
    if ( v13 )
      return 3221225507LL;
    v12->AclSize = v24;
    v12->AclRevision = v18;
  }
  else
  {
    *v11 = 0;
  }
  return 0LL;
}
