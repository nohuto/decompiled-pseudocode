/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001DD0
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002170 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400014E0 (--1CPortClient@@UEAA@XZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x140001640 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_check_icall_nop @ 0x140003700 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v7)(_BYTE *, __int64, int *, __int64, _QWORD, _WORD, CDwmAppHost **); // [rsp+60h] [rbp-48h]
  __int64 v8; // [rsp+70h] [rbp-38h]
  CDwmAppHost *v9; // [rsp+B0h] [rbp+8h] BYREF
  int v10; // [rsp+B8h] [rbp+10h] BYREF
  int v11; // [rsp+BCh] [rbp+14h]

  v9 = this;
  if ( !*(&g_dwmAppHost + 1) )
    return 0LL;
  LODWORD(v9) = 0;
  CPortClient::CPortClient((CPortClient *)v6, a2, a3);
  v10 = -2147483636;
  v11 = 0;
  v8 = (__int64)*(&g_dwmAppHost + 1);
  v3 = v7(v6, 2147483660LL, &v10, 8LL, 0LL, 0, &v9);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x15Eu);
  CPortClient::~CPortClient((CPortClient *)v6);
  return v4;
}
