/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x14004AF3C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 * Callees:
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     HMValidateCatHandleNoSecure @ 0x14004BD14 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, struct tagMONITOR *a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  struct tagWLDBI *v10; // rsi
  _QWORD *i; // r14
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx

  result = BuildHwndList((struct tagWND *)a1, 1u);
  v9 = result;
  if ( result )
  {
    v10 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = (_QWORD *)(v9 + 32); *i != 1LL; ++i )
    {
      v12 = HMValidateCatHandleNoSecure(*i);
      UpdateWindowMonitor((struct tagWND *)v12, a2);
      if ( a4 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v12, v13)
          || (v14 = *(_QWORD *)(v12 + 40), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
        {
          *(_DWORD *)(v12 + 380) |= 0x40000u;
        }
      }
    }
    if ( v10 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v10);
      FreeListFree(v10);
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9);
    return 1LL;
  }
  return result;
}
