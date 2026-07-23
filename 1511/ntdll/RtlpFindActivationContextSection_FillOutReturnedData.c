/*
 * XREFs of RtlpFindActivationContextSection_FillOutReturnedData @ 0x18007EF34
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x1800127A0 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     RtlpGetActivationContextData @ 0x18000DCF4 (RtlpGetActivationContextData.c)
 *     RtlAddRefActivationContext @ 0x18000DE20 (RtlAddRefActivationContext.c)
 *     RtlpLocateActivationContextSection @ 0x180016240 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindActivationContextSection_FillOutReturnedData(
        char a1,
        __int64 a2,
        _ACTIVATION_CONTEXT *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 v12; // rcx
  __int64 result; // rax
  char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  _DWORD *v18; // r8
  unsigned __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF
  char *v21; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return 3221225485LL;
  v12 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( !a2 )
    return 0LL;
  if ( a6 )
  {
    *(_QWORD *)(a2 + 24) = a5 + a6;
    *(_DWORD *)(a2 + 32) = a7;
  }
  *(_DWORD *)(a2 + 48) = a8;
  *(_QWORD *)(a2 + 40) = v12;
  if ( (a1 & 1) != 0 )
  {
    RtlAddRefActivationContext(a3);
    *(_QWORD *)(a2 + 56) = a3;
  }
  if ( (a1 & 2) != 0 )
    *(_DWORD *)(a2 + 68) = *(_BYTE *)(a4 + 24) & 1 | *(_BYTE *)(a4 + 24) & 2;
  if ( (a1 & 4) == 0 )
    return 0LL;
  result = RtlpGetActivationContextData(0, (__int64)a3, a4, (const char **)&v21);
  if ( (int)result >= 0 )
  {
    v14 = v21;
    if ( !v21 )
      return 3221225701LL;
    *(_QWORD *)(a2 + 72) = &v21[*(unsigned int *)&v21[24 * *(unsigned int *)(a2 + 64)
                                                    + 16
                                                    + *(unsigned int *)&v21[*((unsigned int *)v21 + 6) + 12]]];
    result = RtlpLocateActivationContextSection(v14, 0LL, 1u, v20, &v21);
    if ( (int)result >= 0 )
    {
      v15 = v20[0];
      v16 = (unsigned int)v21;
      *(_QWORD *)(a2 + 80) = v20[0];
      *(_DWORD *)(a2 + 88) = v16;
      if ( !v15 || !(_DWORD)v16 )
        return 0LL;
      v17 = (_DWORD *)(v16 + v15);
      v18 = v17 + 1;
      if ( v17 + 1 <= (_DWORD *)((char *)v17 + v16)
        && v17 + 2 <= (_DWORD *)((char *)v17 + v16)
        && *v17 == 1682469715
        && *v18 <= (unsigned int)v16
        && (unsigned int)v16 >= 0x2C
        && *v18 >= 0x2Cu )
      {
        v19 = (unsigned __int64)v17 + (unsigned int)*v18;
        if ( (unsigned __int64)v18 <= v19
          && (unsigned __int64)(v17 + 2) <= v19
          && (unsigned __int64)(v17 + 10) <= v19
          && (unsigned __int64)(v17 + 11) <= v19 )
        {
          *(_QWORD *)(a2 + 96) = (char *)v17 + (unsigned int)v17[9];
          *(_DWORD *)(a2 + 104) = v17[10];
          return 0LL;
        }
      }
      return 3221225701LL;
    }
  }
  return result;
}
