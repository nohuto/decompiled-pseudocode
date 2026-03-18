/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001F60
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002310 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400014C0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x1400015A0 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140003F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int16 v6; // [rsp+38h] [rbp-80h]
  _BYTE v7[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 (__fastcall *v8)(_BYTE *, __int64, int *, __int64, _QWORD, _DWORD, _QWORD, __int16, CDwmAppHost **); // [rsp+70h] [rbp-48h]
  __int64 v9; // [rsp+80h] [rbp-38h]
  CDwmAppHost *v10; // [rsp+C0h] [rbp+8h] BYREF
  int v11; // [rsp+C8h] [rbp+10h] BYREF
  int v12; // [rsp+CCh] [rbp+14h]

  v10 = this;
  v3 = 0;
  if ( *(&g_dwmAppHost + 1) )
  {
    LODWORD(v10) = 0;
    CPortClient::CPortClient((CPortClient *)v7, a2, a3);
    v11 = -2147483638;
    v12 = 0;
    v9 = (__int64)*(&g_dwmAppHost + 1);
    v6 = 0;
    v4 = v8(v7, 2147483658LL, &v11, 8LL, 0LL, 0, 0LL, v6, &v10);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Du);
    CPortClient::~CPortClient((CPortClient *)v7);
  }
  return v3;
}
