/*
 * XREFs of ?FlipChainRequestSharedHandle@CChannel@@UEAAJIU_LUID@@PEAUHMONITOR__@@U?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@@Z @ 0x180114CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::FlipChainRequestSharedHandle(CChannel *this, int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h]

  v14 = a3;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10[0] = 171;
  v11[0] = v14;
  v12 = a5;
  v10[1] = a2;
  v11[1] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x1Cu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v8;
}
