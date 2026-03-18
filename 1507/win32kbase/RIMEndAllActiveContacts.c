/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C00C3D88
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C001A170 (rimSetPointerDeviceDisplayConfig.c)
 *     RIMSetTestModeStatus @ 0x1C00C06E0 (RIMSetTestModeStatus.c)
 *     RIMPrepareLastStateDelivery @ 0x1C00C4414 (RIMPrepareLastStateDelivery.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00722DC (WPP_RECORDER_SF_d.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C0081498 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C856C (RIMFindAndAbandonHoldingFrame.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int i; // esi
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Cu,
    (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
  v5 = *(_DWORD **)(a2 + 696);
  if ( v5 && *v5 )
  {
    RIMFindAndAbandonHoldingFrame(a1, *(_QWORD *)(a2 + 16));
    **(_DWORD **)(a2 + 696) = 0;
    RIMResetPointerDeviceFrameContactIdMgr(v6, a2);
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 704); ++i )
  {
    v8 = 2400LL * i;
    v9 = *(_QWORD *)(a2 + 680);
    if ( *(_DWORD *)(v9 + v8 + 2336) )
    {
      v10 = *(_DWORD *)(v9 + v8 + 2392);
      if ( (v10 & 0x20) == 0 && *(_DWORD *)(v9 + v8 + 2340) )
      {
        *(_DWORD *)(v9 + v8 + 2392) = v10 | 0x40;
        *(_DWORD *)(*(_QWORD *)(a2 + 680) + v8 + 2392) &= ~0x400u;
        *(_BYTE *)(a1 + 649) = 1;
      }
      LODWORD(v12) = i;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v4,
        5u,
        0x2Du,
        (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
        v12);
      *(_DWORD *)(*(_QWORD *)(a2 + 680) + v8 + 2392) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a2 + 680) + v8 + 2392) &= ~0x100u;
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x2Eu,
           (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
}
