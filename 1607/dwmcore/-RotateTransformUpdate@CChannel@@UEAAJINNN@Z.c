/*
 * XREFs of ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z @ 0x1801159C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RotateTransformUpdate(CChannel *this, int a2, double a3, double a4, double a5)
{
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  double v10; // [rsp+28h] [rbp-38h]
  _QWORD v11[2]; // [rsp+30h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+70h] [rbp+10h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v9[0] = 341;
  v10 = a3;
  *(double *)v11 = a4;
  *(double *)&v11[1] = a5;
  v9[1] = a2;
  v7 = CChannel::SendCommand(this, v9, 0x20u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
