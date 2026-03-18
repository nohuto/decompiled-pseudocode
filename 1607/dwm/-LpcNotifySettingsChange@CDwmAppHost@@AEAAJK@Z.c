/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001110 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001290 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002AA0 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400014C0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x1400015A0 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140003F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2, void *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v8)(_BYTE *, __int64, CDwmAppHost **, __int64); // [rsp+48h] [rbp-50h]
  __int64 v9; // [rsp+60h] [rbp-38h]
  CDwmAppHost *v10; // [rsp+A0h] [rbp+8h] BYREF

  v10 = this;
  if ( !*(&g_dwmAppHost + 1) )
    return 0LL;
  CPortClient::CPortClient((CPortClient *)v7, a2, a3);
  v9 = (__int64)*(&g_dwmAppHost + 1);
  LODWORD(v10) = 1073741871;
  HIDWORD(v10) = a2;
  v4 = v8(v7, 1073741871LL, &v10, 8LL);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x133u);
  CPortClient::~CPortClient((CPortClient *)v7);
  return v5;
}
