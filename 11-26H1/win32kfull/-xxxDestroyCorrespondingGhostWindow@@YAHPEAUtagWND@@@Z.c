/*
 * XREFs of ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8E04
 * Callers:
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1401B8CB0 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402CAD94 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x1401B8ED8 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140295DBC (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v2; // edi
  HWND v3; // rcx
  HWND v4; // rax
  int v5; // ebp
  __int64 v6; // rax
  struct tagWND *v7; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = RemoveGhostProp(a1);
  if ( !v3 )
  {
    v4 = RemoveFrostProp(a1);
    if ( !v4 )
      return v2;
    v2 = 1;
    v5 = 1;
    goto LABEL_8;
  }
  v4 = 0LL;
  v2 = 1;
  if ( v3 != (HWND)-1LL )
    v4 = v3;
  v5 = 0;
  if ( v4 )
  {
LABEL_8:
    v6 = HMValidateHandleNoSecure((__int64)v4, 1);
    v7 = (struct tagWND *)v6;
    if ( v6 )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v6);
      if ( (*(_WORD *)(*((_QWORD *)v7 + 5) + 42LL) & 0x2FFF) == 0x2AA )
      {
        if ( v5 )
          RemoveFrostProp(v7);
        else
          RemoveGhostProp(v7);
        xxxHideGhostWindow(v7, a1);
      }
      else
      {
        v2 = 0;
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  return v2;
}
