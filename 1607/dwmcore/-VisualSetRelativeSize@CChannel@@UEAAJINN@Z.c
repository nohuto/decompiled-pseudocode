/*
 * XREFs of ?VisualSetRelativeSize@CChannel@@UEAAJINN@Z @ 0x180049A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetRelativeSize(CChannel *this, int a2, double a3, double a4)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v8[0] = 46;
  *(double *)v9 = a3;
  *(double *)&v9[1] = a4;
  v8[1] = a2;
  v6 = CChannel::SendCommand(this, v8, 0x18u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v6;
}
