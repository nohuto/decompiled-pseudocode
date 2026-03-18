/*
 * XREFs of xxxGetControlBrush @ 0x140124EB4
 * Callers:
 *     NtUserGetControlBrush @ 0x1401246D0 (NtUserGetControlBrush.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxGetControlColor @ 0x140125958 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v6; // cl
  __int64 v7; // rdi
  __int64 ControlColor; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
  if ( v6 == (char)0x80 || v6 == -64 )
    v7 = a1[15];
  else
    v7 = a1[13];
  if ( !v7 )
    v7 = (__int64)a1;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v7);
  ControlColor = xxxGetControlColor(v7, a1, a2, a3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return ControlColor;
}
