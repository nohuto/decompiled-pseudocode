/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C00942A4
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

PSLIST_ENTRY __fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _SLIST_ENTRY *a6,
        __int64 a7,
        struct _SLIST_ENTRY *a8,
        struct _SLIST_ENTRY *a9,
        unsigned __int64 a10,
        char a11)
{
  __int64 v13; // rsi
  char v14; // r12
  unsigned __int64 v15; // rdi
  __int64 VidMmGlobalAllocFromOwner; // rax
  PSLIST_ENTRY v17; // rax
  __int64 v18; // rcx
  PSLIST_ENTRY v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 **v28; // rcx
  __int64 v29; // rcx
  struct _SLIST_ENTRY *v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax

  v13 = a3;
  v14 = a4;
  v15 = a10;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(a4, a5);
  if ( VidMmGlobalAllocFromOwner )
    v15 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 16);
  v17 = VIDMM_MAPPED_VA_RANGE::operator new();
  v19 = v17;
  if ( v17 )
  {
    if ( v15 >= a10 )
      v20 = 0LL;
    else
      v20 = (v15 - (unsigned __int64)a6) >> 12;
    LODWORD(v17[4].Next) = 0;
    *((_QWORD *)&v17[4].Next + 1) = a6;
    v17->Next = (struct _SLIST_ENTRY *)a2;
    *((_QWORD *)&v17[3].Next + 1) = a5;
    v17[5].Next = a8;
    v17[7].Next = a6;
    *((_QWORD *)&v17[5].Next + 1) = a7;
    v17[6].Next = a9;
    *((_QWORD *)&v17[6].Next + 1) = (char *)a9 + a10;
    v21 = (__int64)v17[4].Next & 0xFFFFFC00;
    *((_QWORD *)&v19[7].Next + 1) = v20;
    LODWORD(v19[8].Next) = 1;
    LODWORD(v19[4].Next) = v14 & 0xF | v21 | (16 * (v13 & 0x3F));
    memset(&v19->Next + 1, 0, 0x30uLL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C0035680);
    v22 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v22 + 24) = 2336LL;
    WdLogEvent5_WdLowResource(v22);
    return 0LL;
  }
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) && a11 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(LODWORD(v19[4].Next) << 28) >> 28, *((_QWORD *)&v19[3].Next + 1));
    v25 = (__int64 *)(&v19->Next + 1);
    v26 = (__int64)a2 + 32 * v13 + 112;
    v27 = VidMmAllocFromOwner;
    v28 = *(__int64 ***)(v26 + 8);
    if ( *v28 != (__int64 *)v26 )
      __fastfail(3u);
    *v25 = v26;
    v19[1].Next = (struct _SLIST_ENTRY *)v28;
    *v28 = v25;
    *(_QWORD *)(v26 + 8) = v25;
    if ( VidMmAllocFromOwner )
    {
      v29 = VidMmAllocFromOwner + 144;
      v30 = *(struct _SLIST_ENTRY **)(VidMmAllocFromOwner + 152);
      v31 = (__int64 *)(&v19[1].Next + 1);
      if ( v30->Next != (struct _SLIST_ENTRY *)(v27 + 144) )
        __fastfail(3u);
      *v31 = v29;
      v19[2].Next = v30;
      v30->Next = (struct _SLIST_ENTRY *)v31;
      *(_QWORD *)(v27 + 152) = v31;
    }
    LODWORD(v19[4].Next) |= 0x2000u;
  }
  else if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                   a1,
                   a2,
                   v13,
                   0LL,
                   (struct VIDMM_MAPPED_VA_RANGE *)v19) < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v32);
    WdLogEvent5_WdWarning(v33);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v19);
    return 0LL;
  }
  return v19;
}
