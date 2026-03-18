/*
 * XREFs of ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0
 * Callers:
 *     xxxRouteTouchpadInertiaToMT @ 0x1C022A464 (xxxRouteTouchpadInertiaToMT.c)
 *     zzzPostInertiaMessage @ 0x1C022A498 (zzzPostInertiaMessage.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WakeDIT @ 0x1C00E1684 (WakeDIT.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     CalcManipulationInputInfoSize @ 0x1C01F2F90 (CalcManipulationInputInfoSize.c)
 *     xxxClientCallManipulationThread @ 0x1C020C898 (xxxClientCallManipulationThread.c)
 */

__int64 __fastcall xxxRouteSyntheticTouchpadToMT(
        unsigned int a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        unsigned __int64 a4)
{
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[14]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[28]; // [rsp+A0h] [rbp-60h] BYREF

  gInertiaMTInfo &= ~1u;
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  memset(v18, 0, 0xD8uLL);
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v17[11] = v18;
    LODWORD(v17[5]) = 1;
    HIDWORD(v18[26]) = a4;
    LODWORD(v18[0]) = v18[0] & 0xFFFFF3FF | 0x400;
    HIDWORD(v18[0]) |= 0x180u;
    LODWORD(v18[7]) = 5;
    HIDWORD(v18[8]) = 0x800000;
    v18[13] = a2;
    v18[11] = a2;
    v18[14] = a3;
    v18[12] = a3;
    LODWORD(v18[16]) = a1;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v16);
    v11 = CalcManipulationInputInfoSize(1);
    v7 = (unsigned int)xxxClientCallManipulationThread(v12, (__int64)v17, v11);
    if ( !v16[0] )
      UserSessionSwitchLeaveCrit(v14, v13);
  }
  else
  {
    gInertiaMTInfo |= 1u;
    dword_1C033264C = a1;
    stru_1C0332650 = a2;
    stru_1C0332658 = a3;
    qword_1C0332660 = a4;
    WakeDIT(0x100u);
  }
  return v7;
}
