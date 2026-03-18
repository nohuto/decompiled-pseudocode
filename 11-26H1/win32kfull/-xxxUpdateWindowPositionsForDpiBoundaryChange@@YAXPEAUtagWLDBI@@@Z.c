/*
 * XREFs of ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140296A44
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  const struct tagWND *v2; // rax
  struct tagWND *v3; // rdi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, 0LL);
  while ( a1 )
  {
    v2 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), 1);
    v3 = v2;
    if ( v2 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v2)) )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)v3, (__int64)BugCheckParameter3);
      xxxSetWindowPos(v3, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
    }
    a1 = *(struct tagWLDBI **)a1;
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
