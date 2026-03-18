/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C002E320
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C000E104 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C002F228 (VidSchGetNewSubmissionFenceId.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C0060328 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0062284 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r13
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 i; // r9
  __int64 DmaPacket; // rdi
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  UINT v23; // r12d
  UINT v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rcx
  CVirtualAddressAllocator *v29; // rcx
  __int64 v30; // rax
  __int64 **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void (__fastcall *v35)(_QWORD); // rax
  ADAPTER_RENDER *v36; // rcx
  unsigned int v37; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-40h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h]
  _DXGKARG_SETROOTPAGETABLE v43; // [rsp+58h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v1 + 96);
  v42 = v5;
  v6 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v6 + 2508) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v4 + 32))
    || *(_BYTE *)(v4 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
  {
    v2 = -1073741823;
    VidSchiDiscardQueuePacket(a1);
  }
  else
  {
    VidSchGetNewSubmissionFenceId(v6, a1, *(unsigned __int16 *)(v5 + 4), &v41);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 150); i = (unsigned int)(i + 1) )
    {
      v8 = (unsigned int)i;
      v32 = *(__int64 ***)(*((_QWORD *)a1 + 74) + 8LL * (unsigned int)i);
      if ( v32 )
      {
        v8 = 2LL * (unsigned int)i;
        v7 = **v32;
        *(_QWORD *)(*((_QWORD *)a1 + 31) + 8 * v8) = *(_QWORD *)(v7 + 360);
        *(_DWORD *)(*((_QWORD *)a1 + 31) + 8 * v8 + 8) = *(_DWORD *)(v7 + 16);
      }
    }
    DmaPacket = VidSchiAllocateDmaPacket(v5, v7, v8, i);
    *(_QWORD *)(DmaPacket + 56) = a1;
    *(_DWORD *)DmaPacket = 1953189956;
    *(_QWORD *)(DmaPacket + 48) = v1;
    *(_QWORD *)(DmaPacket + 64) = *((_QWORD *)a1 + 33);
    v12 = *(_QWORD *)(DmaPacket + 56);
    v13 = *(_QWORD *)(DmaPacket + 64);
    *(_QWORD *)(DmaPacket + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(DmaPacket + 72) = 7;
    *(_DWORD *)(DmaPacket + 92) ^= (*(_DWORD *)(DmaPacket + 92) ^ (*(_DWORD *)(v12 + 72) >> 4)) & 4;
    v14 = *(_DWORD *)(DmaPacket + 92) ^ (*(_DWORD *)(DmaPacket + 92) ^ (*(_DWORD *)(v12 + 72) >> 5)) & 8;
    *(_DWORD *)(DmaPacket + 92) = v14;
    v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 9)) & 0x100;
    *(_DWORD *)(DmaPacket + 92) = v15;
    v16 = v15 & 0xFFFFFFEF | (2 * (*(_DWORD *)(v12 + 72) & 8 | 0x1000));
    *(_DWORD *)(DmaPacket + 92) = v16;
    v17 = *((_DWORD *)a1 + 28) == 0;
    *(_DWORD *)(DmaPacket + 88) = 0;
    *(_DWORD *)(DmaPacket + 92) = v16 ^ ((unsigned __int16)v16 ^ (!v17 << 14)) & 0x4000;
    *(_QWORD *)(DmaPacket + 104) = v41;
    *(_DWORD *)(DmaPacket + 96) = *((_DWORD *)a1 + 24);
    if ( v13 )
    {
      *(_DWORD *)(DmaPacket + 92) |= 2u;
      *(_DWORD *)(DmaPacket + 92) ^= (*(_DWORD *)(DmaPacket + 92) ^ (*((_DWORD *)a1 + 18) >> 9)) & 1;
      *(_QWORD *)(DmaPacket + 112) = *(_QWORD *)(v13 + 160);
    }
    *(_QWORD *)(DmaPacket + 176) = *(_QWORD *)(v12 + 296);
    if ( (*(_DWORD *)(v12 + 256) & 0x10000000) != 0 )
    {
      v18 = *(_QWORD *)(v12 + 272);
      if ( v18 )
      {
        v19 = v18 + 8;
      }
      else
      {
        v33 = *(_QWORD *)(v12 + 264);
        if ( v33 )
          v19 = *(_QWORD *)(v33 + 128);
        else
          v19 = 0LL;
      }
      *(_QWORD *)(DmaPacket + 192) = v19;
      *(_DWORD *)(DmaPacket + 184) = *(_DWORD *)(v12 + 336);
    }
    else
    {
      *(_QWORD *)(DmaPacket + 192) = 0LL;
    }
    *(_DWORD *)(DmaPacket + 152) = 0;
    *(_DWORD *)(DmaPacket + 156) = *(_DWORD *)(v12 + 332);
    *(_DWORD *)(DmaPacket + 144) = 0;
    *(_DWORD *)(DmaPacket + 148) = *(_DWORD *)(v12 + 308);
    v20 = *((_DWORD *)a1 + 18);
    if ( (v20 & 1) != 0 )
    {
      v34 = *((unsigned int *)a1 + 93);
      if ( (_DWORD)v34 != -1 && (v20 & 0x80000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 8 * v34 + 2640) + 14736LL) != -1 )
        {
          v35 = *(void (__fastcall **)(_QWORD))(v6 + 2512);
          if ( v35 )
            v35(*(_QWORD *)(v6 + 2560));
        }
        *(_DWORD *)(DmaPacket + 92) |= 0x800u;
      }
    }
    v21 = *(_QWORD *)(DmaPacket + 48);
    v22 = 0LL;
    v40 = 0LL;
    v23 = 0;
    v37 = 0;
    v24 = 0;
    v39 = 0LL;
    v25 = *(_QWORD *)(v21 + 104);
    v38 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 40) + 8LL) + 72LL);
    if ( v26 )
      v27 = *(_QWORD *)(v26 + 8);
    else
      v27 = 0LL;
    if ( v27 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 16) + 184LL));
      if ( v28 )
      {
        v29 = *(CVirtualAddressAllocator **)(v28 + 432);
        if ( v29 )
        {
          CVirtualAddressAllocator::GetPageDirectoryData(v29, *(unsigned __int16 *)(v42 + 6), &v40, &v38, &v37, &v39);
          v22 = v40;
          v23 = v37;
          v24 = v38;
        }
      }
      v30 = *(_QWORD *)(DmaPacket + 48);
      if ( *(_QWORD *)(v30 + 784) != v22 && v24 )
      {
        *(_QWORD *)(v30 + 784) = v22;
        memset(&v43, 0, sizeof(v43));
        v43.hContext = *(HANDLE *)(*(_QWORD *)(DmaPacket + 48) + 64LL);
        v36 = *(ADAPTER_RENDER **)(v6 + 8);
        v43.Address.SegmentId = v23;
        v43.Address.SegmentOffset = v39;
        v43.NumEntries = v24;
        ADAPTER_RENDER::DdiSetRootPageTable(v36, &v43);
        *(_QWORD *)(v1 + 792) = v43.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v6 + 8) + 408LL),
          *(struct _EPROCESS **)v27,
          &v43,
          (struct _VIDSCH_CONTEXT *)v1);
      }
    }
    LOBYTE(v11) = 1;
    VidSchiSendToExecutionQueueWithWait(DmaPacket, v22, 0LL, v11);
  }
  return v2;
}
