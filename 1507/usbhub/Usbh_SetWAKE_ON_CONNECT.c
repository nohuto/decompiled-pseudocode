/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C004CB40
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

int __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, const wchar_t *a2, _DWORD *a3, __int64 a4)
{
  int v4; // edi
  _DWORD *v7; // rbx
  __int64 v8; // r8
  int result; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]

  v4 = a4;
  v7 = FdoExt(a1, (__int64)a2, (__int64)a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v8,
      0xEu,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v10) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xFu,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v10);
    }
  }
  v7[640] &= ~0x1000000u;
  result = v7[640];
  if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) >= 0 )
  {
    if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) <= 1 )
      goto LABEL_11;
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 2 )
    {
LABEL_10:
      result &= ~0x1000000u;
LABEL_12:
      v7[640] = result;
      return result;
    }
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 && v4 == 4 )
    {
      if ( !*a3 )
        goto LABEL_10;
LABEL_11:
      result |= 0x1000000u;
      goto LABEL_12;
    }
  }
  return result;
}
