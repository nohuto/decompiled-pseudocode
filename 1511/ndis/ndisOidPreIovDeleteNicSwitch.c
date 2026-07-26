/*
 * XREFs of ndisOidPreIovDeleteNicSwitch @ 0x1C00D3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C00139E8 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0023E20 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqqDD @ 0x1C0040BEC (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0040CB0 (WPP_SF_qqqq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovDeleteNicSwitch(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *SwitchBySwitchId; // rax
  __int64 v10; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qqqq(0x10u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v1, a1[3], a1[1], v3);
  if ( !*a1 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(a1[4]) != &ndisIntReqGeneric )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v4 = 0;
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(v1 + 3616);
  if ( !v7 || *(_BYTE *)(v7 + 1) < 2u || *(_WORD *)(v7 + 2) < 0x74u || !*(_DWORD *)(v7 + 36) || *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_7;
  *((_DWORD *)a1 + 10) = 0;
  if ( !*(_DWORD *)(v3 + 48) )
  {
    *(_DWORD *)(v3 + 56) = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( !*((_DWORD *)a1 + 10) )
  {
    v8 = *(_QWORD *)(v3 + 40);
    if ( *(_BYTE *)(v8 + 1) && !*(_DWORD *)(v8 + 8) )
    {
      SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v5, 0);
      if ( !SwitchBySwitchId )
      {
        *((_DWORD *)a1 + 10) = 0;
        goto LABEL_8;
      }
      if ( *((_DWORD *)SwitchBySwitchId + 12) <= 1u && !*((_DWORD *)SwitchBySwitchId + 18) )
        goto LABEL_4;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    LODWORD(v10) = v4;
    WPP_SF_qqqDD(0x11u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, *a1, a1[3], a1[1], v10, *((_DWORD *)a1 + 10));
  }
  return v4;
}
