/*
 * XREFs of ?TileLegacyMilBrushSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180115DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::TileLegacyMilBrushSetSourceModifications(CChannel *this, int a2, int a3, int a4, int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[8]; // [rsp+20h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+20h] BYREF
  int v12; // [rsp+70h] [rbp+30h]

  v12 = a3;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10[0] = 41;
  v10[2] = v12;
  v10[4] = a5;
  v10[1] = a2;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
