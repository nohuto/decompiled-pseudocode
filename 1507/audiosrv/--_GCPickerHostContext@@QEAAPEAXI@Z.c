/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180008DD4
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18000592C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180008B24 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180001430 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180001474 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
CPickerHostContext *__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  __int64 *v2; // rdx
  void **v3; // rdi
  __int64 v4; // rax

  while ( this[2] )
  {
    v2 = *this;
    if ( !*this )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (void **)v2[2];
    v4 = *v2;
    *this = (__int64 *)*v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      this[1] = 0LL;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)this, v2);
    if ( v3 )
      CHostedAppInteractivity::`scalar deleting destructor'(v3);
  }
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this);
  operator delete(this);
  return (CPickerHostContext *)this;
}
