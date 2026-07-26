/*
 * XREFs of ndisUpdateWmiPMParamsForPatterns @ 0x1C0046E70
 * Callers:
 *     ndisMIndicateWoLPatternReject @ 0x1C0045DBC (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0046380 (ndisOidPostPMRemoveWOLPattern.c)
 * Callees:
 *     ndisEnablePMParamForPattern @ 0x1C0045948 (ndisEnablePMParamForPattern.c)
 */

__int64 __fastcall ndisUpdateWmiPMParamsForPatterns(__int64 a1)
{
  __int64 v1; // r10
  _QWORD *i; // rax
  _QWORD *j; // r9
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+21h] [rbp-27h]
  __int64 v7; // [rsp+29h] [rbp-1Fh]
  __int16 v8; // [rsp+31h] [rbp-17h]
  char v9; // [rsp+33h] [rbp-15h]

  v5 = 0;
  v6 = 0LL;
  v1 = a1;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  for ( i = *(_QWORD **)(a1 + 968); i; i = (_QWORD *)*i )
  {
    for ( j = i + 1; j; j = (_QWORD *)*j )
    {
      if ( (_UNKNOWN *)j[2] == &ndisIntReqWmi )
        ndisEnablePMParamForPattern((__int64)(i + 6), (__int64)&v5);
    }
  }
  result = *(unsigned int *)((char *)&v6 + 3);
  *(_DWORD *)(v1 + 1144) = *(_DWORD *)((char *)&v6 + 3);
  return result;
}
