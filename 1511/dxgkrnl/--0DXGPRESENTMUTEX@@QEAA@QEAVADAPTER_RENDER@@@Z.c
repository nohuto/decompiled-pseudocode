/*
 * XREFs of ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000C200
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     <none>
 */

DXGPRESENTMUTEX *__fastcall DXGPRESENTMUTEX::DXGPRESENTMUTEX(DXGPRESENTMUTEX *this, struct ADAPTER_RENDER *const a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 5126LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 440LL) == CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 5131LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
