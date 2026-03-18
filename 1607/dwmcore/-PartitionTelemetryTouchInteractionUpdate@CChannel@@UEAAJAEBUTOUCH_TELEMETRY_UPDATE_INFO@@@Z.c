/*
 * XREFs of ?PartitionTelemetryTouchInteractionUpdate@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801158A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionUpdate(
        CChannel *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[4]; // [rsp+24h] [rbp-44h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v7 = 9;
  memset_0(v8, 0, 0x30uLL);
  v4 = *((_OWORD *)a2 + 1);
  v8[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v8[1] = v4;
  v8[2] = v5;
  LODWORD(a2) = CChannel::SendCommand(this, &v7, 0x34u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)a2;
}
