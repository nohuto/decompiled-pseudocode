/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x1406CA0A4
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1404B6B0C (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1401239E0 (RtlStringCbCopyNW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1406C9E50 (AuthzBasepCopyoutClaimAttributeValues.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _DWORD *a2, size_t a3)
{
  unsigned __int64 v6; // r12
  __int64 result; // rax
  _DWORD *v8; // r15
  __int64 v9; // r8
  _DWORD *v10; // rsi
  __int64 v11; // r14
  _DWORD *v12; // r15
  size_t v13; // r13
  wchar_t *v14; // rsi
  unsigned __int64 v15; // rsi
  size_t v17; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    result = 3221225485LL;
    goto LABEL_18;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( (_DWORD *)((char *)a2 + a3) < a2 )
  {
    result = 3221225485LL;
    goto LABEL_19;
  }
  memset(a2, 0, a3);
  v8 = a2 + 4;
  if ( (unsigned __int64)(a2 + 4) > v6 )
  {
    result = 3221225507LL;
    goto LABEL_19;
  }
  v9 = 8LL * *a1;
  if ( is_mul_ok(0x20uLL, *a1) )
  {
    v10 = &v8[v9];
    result = 0LL;
    if ( (unsigned __int64)&v8[v9] > v6 )
    {
LABEL_9:
      result = 2147483653LL;
      goto LABEL_19;
    }
    a2[1] = *a1;
    *a2 = 1;
    *((_QWORD *)a2 + 1) = v8;
    v11 = *((_QWORD *)a1 + 1);
    if ( (unsigned int *)v11 != a1 + 2 )
    {
      v12 = a2 + 8;
      do
      {
        *((_WORD *)v12 - 4) = *(_WORD *)(v11 + 48);
        *v12 = *(_DWORD *)(v11 + 60);
        *((_WORD *)v12 - 3) = 0;
        *(v12 - 1) = *(_DWORD *)(v11 + 52);
        v13 = *(unsigned __int16 *)(v11 + 32) + 2LL;
        v17 = v13;
        v14 = (wchar_t *)(((unsigned __int64)v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (unsigned __int64)v14 + v13 > v6 )
          goto LABEL_9;
        *((_QWORD *)v12 - 2) = v14;
        RtlStringCbCopyNW(v14, v13, *(STRSAFE_PCNZWCH *)(v11 + 40), v13 - 2);
        v15 = (unsigned __int64)v14 + v13;
        result = AuthzBasepCopyoutClaimAttributeValues(v11, (__int64)(v12 - 4), v15, v6 - v15, &v17);
        if ( (int)result < 0 )
          goto LABEL_19;
        v12 += 8;
        v10 = (_DWORD *)(v17 + v15);
        v11 = *(_QWORD *)v11;
      }
      while ( (unsigned int *)v11 != a1 + 2 );
    }
LABEL_18:
    if ( (int)result >= 0 )
      return result;
    goto LABEL_19;
  }
  result = 3221225621LL;
LABEL_19:
  if ( a3 >= 0x10 )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  return result;
}
