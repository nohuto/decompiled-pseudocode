/*
 * XREFs of RIMPrepareLastStateDelivery @ 0x1C00C4414
 * Callers:
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00722DC (WPP_RECORDER_SF_d.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMPrepareLastStateDelivery(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+28h] [rbp-10h]

  v3 = a3;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Fu,
    (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
  v7 = *(_QWORD *)(a2 + 680);
  v8 = 2400 * v3;
  v9 = *(_DWORD *)(v7 + 2400 * v3 + 2392);
  if ( (v9 & 0x80u) == 0 )
  {
    RIMEndAllActiveContacts(a1, a2);
  }
  else
  {
    if ( *(_DWORD *)(v7 + v8 + 2340) )
    {
      *(_DWORD *)(v7 + v8 + 2392) = v9 | 0x40;
      *(_BYTE *)(a1 + 649) = 1;
    }
    v11 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      5u,
      0x30u,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
      v11);
    *(_DWORD *)(*(_QWORD *)(a2 + 680) + v8 + 2392) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)(a2 + 680) + v8 + 2392) &= ~0x100u;
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x31u,
           (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
}
