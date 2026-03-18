/*
 * XREFs of ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@H@Z @ 0x180049F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionSwitchRemotingMode(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v8[0] = 16;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand((CChannel *)a1, v8, 0xCu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
