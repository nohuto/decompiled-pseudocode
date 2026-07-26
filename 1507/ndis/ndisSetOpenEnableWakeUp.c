/*
 * XREFs of ndisSetOpenEnableWakeUp @ 0x1C00CBE60
 * Callers:
 *     ndisSetEnableWakeUp @ 0x1C00CB9C4 (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C001BE60 (ndisGetCombinedPMConfig.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqDd @ 0x1C0044130 (WPP_SF_qqDd_ea_1C0044130.c)
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C00442B8 (ndisConvertWakeUpEnableToPMConfig.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ACAAC (ndisMiniportPMParametersUpdated.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(__int64 a1, __int64 a2, _BYTE *a3)
{
  _DWORD *v3; // rbx
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD **)(a1 + 16);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x10u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
  v7 = *(_DWORD *)(a2 + 48) < 4u;
  *a3 = 1;
  if ( v7 )
  {
    *(_DWORD *)(a2 + 56) = 4;
    *(_DWORD *)(a2 + 52) = 0;
    v8 = -1073741823;
  }
  else
  {
    v9 = **(_DWORD **)(a2 + 40);
    if ( (v9 & 1) != 0 && (unsigned int)(v3[275] - 2) > 2
      || (v9 & 2) != 0 && (unsigned int)(v3[276] - 2) > 2
      || (v9 & 4) != 0 && (unsigned int)(v3[277] - 2) > 2 )
    {
      v8 = -1073741811;
    }
    else
    {
      ndisConvertWakeUpEnableToPMConfig(*(_DWORD *)(a1 + 304), (_DWORD *)(a1 + 308), 2);
      ndisGetCombinedPMConfig((__int64)v3, (__int64)(v3 + 280));
      ndisMiniportPMParametersUpdated((__int64)v3);
      v8 = 0;
      *(_DWORD *)(a2 + 52) = 4;
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    v12 = (unsigned __int8)*a3;
    v11 = v8;
    WPP_SF_qqDd((unsigned __int8)*a3, a2, a1, a2, v11, v12);
  }
  return v8;
}
