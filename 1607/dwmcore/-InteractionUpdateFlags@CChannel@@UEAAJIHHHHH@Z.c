/*
 * XREFs of ?InteractionUpdateFlags@CChannel@@UEAAJIHHHHH@Z @ 0x180048380
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateFlags(CChannel *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v11; // ebx
  _DWORD v13[8]; // [rsp+20h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+20h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v13[0] = 201;
  v13[4] = a5;
  v13[5] = a6;
  v13[6] = a7;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v11 = CChannel::SendCommand(this, v13, 0x1Cu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v11;
}
