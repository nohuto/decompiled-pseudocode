/*
 * XREFs of xxxUpdateShadowZorder @ 0x1402536E8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  result = FindShadow(a1, a2);
  if ( !result )
    return result;
  v4 = (struct tagWND *)*((_QWORD *)result + 1);
  v5 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 24) & 8) == 0 )
    {
      v6 = 1;
LABEL_7:
      SetOrClrWF(v6, v4, 0x808u, 1);
    }
  }
  else if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( *(_DWORD *)(*((_QWORD *)v4 + 5) + 236LL) != v7 )
    SetWindowGroupBand(v4, v7, 0);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v4);
  xxxSetWindowPos(v4, (__int64)a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
