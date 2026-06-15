/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800325E4
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003904C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18003273C (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
CPickerHostContext *__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  __int64 *v2; // rdx
  CHostedAppInteractivity *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // edx

  while ( this[2] )
  {
    v2 = *this;
    if ( !*this )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (CHostedAppInteractivity *)v2[2];
    v4 = *v2;
    *this = (__int64 *)*v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      this[1] = 0LL;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(this, v2);
    if ( v3 )
      CHostedAppInteractivity::`scalar deleting destructor'(v3, v5);
  }
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(this);
  operator delete(this);
  return (CPickerHostContext *)this;
}
