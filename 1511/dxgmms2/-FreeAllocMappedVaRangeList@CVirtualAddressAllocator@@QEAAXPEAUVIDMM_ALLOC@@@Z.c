/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003FFBC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0043E5C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY **v4; // rdi
  struct _LIST_ENTRY **i; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *Flink; // rax
  VIDMM_GLOBAL *v11; // r15
  bool v12; // bl
  VIDMM_GLOBAL *v13; // rcx
  bool v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // r9d
  char v18[8]; // [rsp+20h] [rbp-88h] BYREF
  char *v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+30h] [rbp-78h]
  _QWORD v21[10]; // [rsp+40h] [rbp-68h] BYREF

  v4 = (struct _LIST_ENTRY **)((char *)a2 + 128);
  for ( i = (struct _LIST_ENTRY **)*((_QWORD *)a2 + 16); i != v4; i = (struct _LIST_ENTRY **)*i )
  {
    v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 8);
    v12 = KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v11 + 8LL);
    memset(v21, 0, sizeof(v21));
    v15 = *((_DWORD *)i + 10);
    v21[7] = 0LL;
    LODWORD(v21[0]) = 114;
    HIDWORD(v21[0]) = (v15 >> 4) & 0x3F;
    v21[6] = i - 3;
    v21[5] = this;
    if ( v12 )
      VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v13, (struct _VIDMM_SYSTEM_COMMAND *)v21);
    else
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v11, (struct _VIDMM_SYSTEM_COMMAND *)v21, v14);
    *((_DWORD *)i + 10) &= 0xFFFFF3FF;
  }
  v19 = (char *)this + 40;
  if ( this != (CVirtualAddressAllocator *)-40LL && *((struct _KTHREAD **)this + 6) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 40, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)this + 14);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v7, &EventBlockThread, v8, v17);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  }
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  v20 = 2;
  while ( *v4 != (struct _LIST_ENTRY *)v4 )
  {
    v9 = *v4;
    Flink = (*v4)->Flink;
    if ( (struct _LIST_ENTRY **)(*v4)->Blink != v4 || Flink->Blink != v9 )
      __fastfail(3u);
    *v4 = Flink;
    Flink->Blink = (struct _LIST_ENTRY *)v4;
    v9->Flink = 0LL;
    v9->Blink = 0LL;
    CVirtualAddressAllocator::RemoveVaRangeFromVad(this, v9 - 1, 1u, 1u);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
