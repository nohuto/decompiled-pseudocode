/*
 * XREFs of ?AnimationUpdateBeginTime@CChannel@@UEAAJI_K0@Z @ 0x180114730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::AnimationUpdateBeginTime(CChannel *this, int a2, __int64 a3, __int64 a4)
{
  __int128 v5; // rdi
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)&v5 + 1) = a4;
  *(_QWORD *)&v5 = a3;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v9[0] = 150;
  v9[1] = a2;
  v10 = v5;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
