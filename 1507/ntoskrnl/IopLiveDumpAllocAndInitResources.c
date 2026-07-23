/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x140677378
 * Callers:
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     RtlClearAllBitsEx @ 0x1400FE45C (RtlClearAllBitsEx.c)
 *     RtlSetAllBitsEx @ 0x14015A544 (RtlSetAllBitsEx.c)
 *     IopGetPhysicalMemoryBlock @ 0x14016EB88 (IopGetPhysicalMemoryBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1401EF3C4 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401F87E0 (IopLiveDumpTraceBufferAllocation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpResetCorralContext @ 0x1403FB1D4 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140677924 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140677B20 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x140677FBC (IopLiveDumpReleaseResources.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  char *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  int MappingResources; // ebx
  char *PhysicalMemoryBlock; // rax
  int v8; // eax
  __int64 v9; // rdx
  SIZE_T v10; // rbx
  PVOID PoolWithTag; // rax
  PVOID v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  SIZE_T v15; // rsi
  PVOID v16; // rax
  void *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  PVOID v22; // rax
  PVOID v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  PVOID v26; // rax
  PVOID v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 i; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  SIZE_T v39; // rsi
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rcx
  unsigned __int64 v45; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 *v49; // [rsp+68h] [rbp-40h]
  __int64 v50; // [rsp+70h] [rbp-38h]

  v2 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(_QWORD *)(a1 + 584);
  v5 = *(_QWORD *)(a1 + 576);
  if ( v5 && *(_DWORD *)(v5 + 4) || v4 && *(_DWORD *)(v4 + 4) )
    goto LABEL_5;
  *(_QWORD *)(a1 + 240) = a1;
  IopLiveDumpResetCorralContext(a1 + 240);
  PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
  v2 = PhysicalMemoryBlock;
  if ( !PhysicalMemoryBlock )
    goto LABEL_7;
  v8 = *(_DWORD *)PhysicalMemoryBlock;
  if ( !v8 )
  {
    MappingResources = -1073741595;
    goto LABEL_54;
  }
  v9 = *(_QWORD *)&v2[16 * (v8 - 1) + 16] + *(_QWORD *)&v2[16 * (v8 - 1) + 24];
  *(_QWORD *)(a1 + 88) = v9;
  v10 = (((unsigned __int64)(v9 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x706D644Cu);
  *(_QWORD *)(a1 + 416) = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  v13 = *(_QWORD *)(a1 + 576);
  v14 = *(_QWORD *)(a1 + 584);
  if ( v13 && *(_DWORD *)(v13 + 4) || v14 && *(_DWORD *)(v14 + 4) )
    goto LABEL_5;
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 408) = v12;
  RtlSetAllBitsEx((_QWORD *)(a1 + 400));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 416), v10);
  v15 = (v10 + 12415) & 0xFFFFFFFFFFFFF000uLL;
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x706D644Cu);
  *(_QWORD *)(a1 + 384) = v16;
  v17 = v16;
  if ( !v16 )
    goto LABEL_7;
  v18 = *(_QWORD *)(a1 + 576);
  v19 = *(_QWORD *)(a1 + 584);
  if ( v18 && *(_DWORD *)(v18 + 4) || v19 && *(_DWORD *)(v19 + 4) )
    goto LABEL_5;
  *(_QWORD *)(a1 + 392) = v15;
  memset(v17, 0, v15);
  v20 = *(_QWORD *)(a1 + 384);
  *(_QWORD *)(v20 + 8224) = v15;
  v21 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(v20 + 8240) = v21;
  *(_QWORD *)(a1 + 368) = v21;
  *(_QWORD *)(a1 + 376) = v20 + 8248;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 368));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 384), *(_QWORD *)(a1 + 392));
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x706D644Cu);
  *(_QWORD *)(a1 + 440) = v22;
  v23 = v22;
  if ( !v22 )
    goto LABEL_7;
  v24 = *(_QWORD *)(a1 + 576);
  v25 = *(_QWORD *)(a1 + 584);
  if ( v24 && *(_DWORD *)(v24 + 4) || v25 && *(_DWORD *)(v25 + 4) )
    goto LABEL_5;
  *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 432) = v23;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 424));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 440), v10);
  v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x706D644Cu);
  *(_QWORD *)(a1 + 464) = v26;
  v27 = v26;
  if ( !v26 )
  {
LABEL_7:
    MappingResources = -1073741670;
    goto LABEL_54;
  }
  v28 = *(_QWORD *)(a1 + 576);
  v29 = *(_QWORD *)(a1 + 584);
  if ( v28 && *(_DWORD *)(v28 + 4) || v29 && *(_DWORD *)(v29 + 4) )
    goto LABEL_5;
  *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 456) = v27;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 448));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 464), v10);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(i + 16), *(unsigned int *)(i + 24));
  MappingResources = IopLiveDumpAllocateMappingResources(a1);
  if ( MappingResources < 0 )
    goto LABEL_54;
  if ( (v31 = *(_QWORD *)(a1 + 576), v32 = *(_QWORD *)(a1 + 584), v31) && *(_DWORD *)(v31 + 4)
    || v32 && *(_DWORD *)(v32 + 4) )
  {
LABEL_5:
    MappingResources = -1073741248;
    goto LABEL_54;
  }
  MappingResources = IopLiveDumpEstimateMemoryPages(a1);
  if ( MappingResources < 0 )
    goto LABEL_54;
  MappingResources = IopLiveDumpAllocateDumpBuffers(a1);
  if ( MappingResources < 0 )
    goto LABEL_54;
  v33 = *(_QWORD *)(a1 + 488);
  if ( v33 )
  {
    v34 = v33 >> 6;
    v35 = *(_QWORD *)(a1 + 528) - v34;
    MappingResources = HvlPrepareLivedumpDescriptor(
                         (PHYSICAL_ADDRESS **)(*(_QWORD *)(a1 + 536) + 8 * v35),
                         v34,
                         a1 + 184,
                         &v45,
                         &v47,
                         (PHYSICAL_ADDRESS **)(a1 + 184));
    if ( MappingResources >= 0 )
    {
      v36 = v45;
      v37 = v35 + (v47 >> 6);
      *(_QWORD *)(a1 + 200) = v47 & 0x3F;
      *(_QWORD *)(a1 + 192) = v37;
      *(_DWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 208) = v35 + (v36 >> 6);
      *(_QWORD *)(a1 + 216) = v36 & 0x3F;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 488) = 0LL;
    }
  }
  v38 = *(_QWORD *)(a1 + 120);
  if ( !v38 )
    goto LABEL_52;
  v39 = v38 << 12;
  v40 = ExAllocatePoolWithTag(NonPagedPoolNx, v39, 0x706D644Cu);
  *(_QWORD *)(a1 + 128) = v40;
  if ( v40 )
  {
    v41 = *(_QWORD *)(a1 + 576);
    v42 = *(_QWORD *)(a1 + 584);
    if ( (!v41 || !*(_DWORD *)(v41 + 4)) && (!v42 || !*(_DWORD *)(v42 + 4)) )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v40, v39);
      v43 = *(void **)(a1 + 128);
      *(_QWORD *)(a1 + 160) = v43;
      *(_DWORD *)(a1 + 136) = v39;
      *(_DWORD *)(a1 + 168) = 0;
      memset(v43, 0, v39);
      goto LABEL_52;
    }
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 136) = 0;
LABEL_52:
  if ( MappingResources >= 0 )
    IopLiveDumpTraceBufferAllocation();
LABEL_54:
  if ( stru_140320EC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140320EC0, 0x400000000000uLL) )
  {
    v50 = 8LL;
    v46 = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    v49 = &v46;
    TlgWrite(&stru_140320EC0, &unk_1402A3F45, (LPCGUID)(a1 + 608), (LPCGUID)(a1 + 592), 3u, &pData);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( MappingResources < 0 )
    IopLiveDumpReleaseResources(a1);
  return (unsigned int)MappingResources;
}
