/*
 * XREFs of RIMUpdateDeviceFrameState @ 0x1C00C53B4
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D2500 (RIMGetPTPFrameContactCount.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C000A808 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C554C (RIMUpdatePrimaryDevice.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 */

__int64 __fastcall RIMUpdateDeviceFrameState(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int i; // esi
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x20u,
    (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
  for ( i = 0; i < *(_DWORD *)(a2 + 720); ++i )
  {
    v7 = (_DWORD *)(*(_QWORD *)(a2 + 696) + 2400LL * i);
    if ( v7[584] )
    {
      if ( *(_DWORD *)(a2 + 24) == 8 )
      {
        v8 = v7[598];
        if ( (v8 & 0x800) != 0 && (v8 & 0x20) == 0 )
        {
          if ( v7[585] )
          {
            v7[598] = v8 | 0x40;
            *(_BYTE *)(a1 + 681) = 1;
          }
          LODWORD(v11) = i;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v4,
            5u,
            0x21u,
            (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
            v11);
          v7[598] = v7[598] & 0xFFFFFEDF | 0x20;
        }
      }
      if ( (v7[598] & 0x20) == 0 )
        v7[585] = v7[586];
    }
    if ( (v7[598] & 0x400) != 0 )
      RIMRemoveContactFromActiveList(a1, a2, i, 0LL);
  }
  v9 = *(_QWORD *)(a2 + 712);
  if ( v9 && *(_DWORD *)(v9 + 56) && (*(_DWORD *)(a2 + 252) & 4) != 0 && (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 4 )
    RIMUpdatePrimaryDevice(a1, 0LL, 0LL, 0LL);
  if ( *(_QWORD *)(a2 + 712) )
    RIMResetPointerDeviceFrameContactIdMgr(v5, a2);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x22u,
           (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
}
