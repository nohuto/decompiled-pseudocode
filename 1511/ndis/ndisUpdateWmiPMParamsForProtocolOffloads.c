/*
 * XREFs of ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C0046EDC
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0001230 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0045CD0 (ndisMIndicatePMOffloadReject.c)
 * Callees:
 *     ndisEnablePMParamForProtocolOffload @ 0x1C0045984 (ndisEnablePMParamForProtocolOffload.c)
 */

__int64 __fastcall ndisUpdateWmiPMParamsForProtocolOffloads(__int64 a1)
{
  __int64 v1; // r10
  _QWORD *i; // rax
  _QWORD *j; // r9
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+21h] [rbp-27h]
  __int16 v7; // [rsp+31h] [rbp-17h]
  char v8; // [rsp+33h] [rbp-15h]

  v5 = 0;
  v6 = 0uLL;
  v1 = a1;
  v7 = 0;
  v8 = 0;
  for ( i = *(_QWORD **)(a1 + 976); i; i = (_QWORD *)*i )
  {
    for ( j = i + 1; j; j = (_QWORD *)*j )
    {
      if ( (_UNKNOWN *)j[2] == &ndisIntReqWmi )
        ndisEnablePMParamForProtocolOffload((__int64)(i + 6), (__int64)&v5);
    }
  }
  result = *(unsigned int *)((char *)&v6 + 7);
  *(_DWORD *)(v1 + 1148) = *(_DWORD *)((char *)&v6 + 7);
  return result;
}
