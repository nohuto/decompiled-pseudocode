/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x1406470C8
 * Callers:
 *     RtlpComputeMergedAcl @ 0x140646FA8 (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x140471900 (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        void *a5,
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
  __int64 result; // rax
  int v21; // ebx
  unsigned int v22; // ecx
  ULONG v23; // ecx
  __int64 v24; // [rsp+50h] [rbp-68h]
  unsigned int v25[18]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+D8h] [rbp+20h] BYREF

  v11 = a9;
  v12 = Acl;
  v13 = 0;
  v27 = 0;
  v25[0] = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v19 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v19 = 5120;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        LOBYTE(v18) = *a3;
      LOBYTE(v24) = 0;
      result = RtlpCopyAces((__int64)a3, a7, 2, 16, 1, a5, a6, (__int64)a5, a6, 1, v24, a8, &v27, v12);
LABEL_6:
      if ( (_DWORD)result == -1073741789 )
      {
        v13 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
      v17 = 0;
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v21 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      LOBYTE(v24) = 0;
      result = RtlpCopyAces((__int64)a3, a7, 1, 0, 1, a5, a6, (__int64)a5, a6, 1, v24, a8, &v27, v12);
      if ( (_DWORD)result == -1073741789 )
      {
        v13 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
      if ( !*((_WORD *)a3 + 2) )
        v17 = 0;
    }
    else if ( a8 == 1 )
    {
      return 3221225591LL;
    }
    if ( a1 )
    {
      if ( v18 <= (unsigned __int8)*a1 )
        LOBYTE(v18) = *a1;
      LOBYTE(v24) = 0;
      result = RtlpCopyAces((__int64)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, v24, v21, v25, v12);
      if ( (_DWORD)result == -1073741789 )
      {
        v13 = 1;
        result = 0LL;
      }
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_32;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    LOBYTE(v24) = 1;
    result = RtlpCopyAces((__int64)a3, a7, 2, 0, 1, a5, a6, (__int64)a5, a6, 1, v24, a8, &v27, v12);
    goto LABEL_6;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_32:
  v22 = v27 + v25[0];
  if ( v27 + v25[0] || !v17 )
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
