/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0047FC4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C004CB78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0054764 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2)
{
  struct _LIST_ENTRY **v2; // rdi
  struct _LIST_ENTRY **i; // rsi
  VIDMM_GLOBAL *v6; // r12
  bool v7; // bl
  VIDMM_GLOBAL *v8; // rcx
  bool v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 **v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // r9
  __int64 **v21; // r8
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 **v24; // r8
  char v25[8]; // [rsp+30h] [rbp-98h] BYREF
  char *v26; // [rsp+38h] [rbp-90h]
  int v27; // [rsp+40h] [rbp-88h]
  _QWORD v28[12]; // [rsp+50h] [rbp-78h] BYREF

  v2 = (struct _LIST_ENTRY **)((char *)a2 + 128);
  for ( i = (struct _LIST_ENTRY **)*((_QWORD *)a2 + 16); i != v2; i = (struct _LIST_ENTRY **)*i )
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 8);
    v7 = KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL);
    memset(v28, 0, 0x58uLL);
    v10 = *((_DWORD *)i + 10);
    v28[7] = 0LL;
    LODWORD(v28[0]) = 114;
    HIDWORD(v28[0]) = (v10 >> 4) & 0x3F;
    v28[6] = i - 3;
    v28[5] = this;
    if ( v7 )
      VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v8, (struct _VIDMM_SYSTEM_COMMAND *)v28);
    else
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v28, v9);
    *((_DWORD *)i + 10) &= 0xFFFFF3FF;
  }
  v26 = (char *)this + 40;
  if ( this != (CVirtualAddressAllocator *)-40LL && *((struct _KTHREAD **)this + 6) == KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v11);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 40, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)this + 14);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v12, &EventBlockThread, v13, v14);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  }
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  v27 = 2;
  while ( *v2 != (struct _LIST_ENTRY *)v2 )
  {
    v15 = *v2;
    Flink = (*v2)->Flink;
    if ( (struct _LIST_ENTRY **)(*v2)->Blink != v2 || Flink->Blink != v15 )
      __fastfail(3u);
    *v2 = Flink;
    Flink->Blink = (struct _LIST_ENTRY *)v2;
    v15->Flink = 0LL;
    v15->Blink = 0LL;
    CVirtualAddressAllocator::RemoveVaRangeFromVad(this, v15 - 1, 1u, 1u, 0);
  }
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v17 = (__int64 **)((char *)a2 + 144);
    while ( *v17 != (__int64 *)v17 )
    {
      v18 = *v17;
      v19 = **v17;
      if ( (__int64 **)(*v17)[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
        __fastfail(3u);
      *v17 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v17;
      *v18 = 0LL;
      v18[1] = 0LL;
      v20 = (__int64 *)*v18;
      v21 = (__int64 **)v18[1];
      if ( *(__int64 **)(*v18 + 8) != v18 || *v21 != v18 )
        __fastfail(3u);
      *v21 = v20;
      v22 = v18 - 2;
      v20[1] = (__int64)v21;
      *v18 = 0LL;
      v18[1] = 0LL;
      v23 = *(v18 - 2);
      v24 = (__int64 **)*(v18 - 1);
      if ( *(__int64 **)(v23 + 8) != v18 - 2 || *v24 != v22 )
        __fastfail(3u);
      *v24 = (__int64 *)v23;
      *(_QWORD *)(v23 + 8) = v24;
      *v22 = 0LL;
      *(v18 - 1) = 0LL;
      *((_DWORD *)v18 + 10) &= ~0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
}
