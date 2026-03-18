/*
 * XREFs of ?PartitionTelemetryTouchInteractionEnd@CChannel@@UEAAJ_K@Z @ 0x18001E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionEnd(CChannel *this, __int64 a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+24h] [rbp-14h]
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = 10;
  v6 = a2;
  LODWORD(a2) = CChannel::SendCommand(this, &v5, 0xCu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return (unsigned int)a2;
}
