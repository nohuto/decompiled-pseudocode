/*
 * XREFs of ?PartitionUseShellDisplaySetNotification@CChannel@@UEAAJXZ @ 0x180049EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionUseShellDisplaySetNotification(CChannel *this)
{
  CChannel *v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v3 = 18;
  LODWORD(v1) = CChannel::SendCommand(v1, &v3, 4u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return (unsigned int)v1;
}
