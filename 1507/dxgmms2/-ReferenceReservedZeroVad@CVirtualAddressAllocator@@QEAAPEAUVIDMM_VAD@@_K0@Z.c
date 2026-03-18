/*
 * XREFs of ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C0062DD4
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E67C (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::ReferenceReservedZeroVad(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE *a2,
        unsigned __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  struct _RTL_BALANCED_NODE *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  if ( !v3 )
    return 0LL;
  do
  {
    v5 = CompareVadAddressInsideAvl(&v11, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v3 = v3->Children[1];
    }
    else
    {
      v3 = v3->Children[0];
    }
  }
  while ( v3 );
  if ( !v3 )
    return 0LL;
  v7 = (int)v3[3].Children[0];
  v8 = (unsigned __int64)v3[1].Children[1];
  if ( (v7 & 0x1000) != 0 )
    v8 -= 4096LL;
  if ( v8 < a3 )
    return 0LL;
  if ( (v7 & 0xF) != 2 )
  {
    v9 = WdLogNewEntry5_WdWarning(v8, 4096LL, v6);
    WdLogEvent5_WdWarning(v9);
    return 0LL;
  }
  return v3;
}
