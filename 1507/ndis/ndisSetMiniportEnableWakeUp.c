/*
 * XREFs of ndisSetMiniportEnableWakeUp @ 0x1C00CBBD8
 * Callers:
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00CB9C4 (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // dl
  unsigned int v7; // edi
  _DWORD *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0x12u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
    v6 = byte_1C0085312;
  }
  v7 = 0;
  *a3 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v8 = *(_DWORD **)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 3920) & 0x100) != 0 )
      *v8 &= ~2u;
    *v8 &= ~4u;
    *a3 = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 52) = 0;
    v7 = -1073676268;
    *(_DWORD *)(a2 + 56) = 4;
  }
  if ( (unsigned __int8)v6 >= 4u )
  {
    v10 = v7;
    WPP_SF_qqd(0x13u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2, v10);
  }
  return v7;
}
