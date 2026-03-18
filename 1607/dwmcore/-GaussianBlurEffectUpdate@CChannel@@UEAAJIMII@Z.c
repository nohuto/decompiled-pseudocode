/*
 * XREFs of ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z @ 0x18001DD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GaussianBlurEffectUpdate(CChannel *this, int a2, float a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10[0] = 318;
  v10[4] = a5;
  *(float *)&v10[2] = a3;
  v10[1] = a2;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
