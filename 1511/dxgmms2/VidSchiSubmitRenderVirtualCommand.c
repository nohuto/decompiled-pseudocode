/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0007448 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C00115C0 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00527DC (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int16 v9; // si
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rsi
  UINT v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rcx
  UINT64 v32; // r15
  UINT v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rcx
  ADAPTER_RENDER *v40; // rcx
  int v41; // eax
  void (__fastcall *v42)(_QWORD); // rax
  __int64 v43; // rax
  struct _VIDSCH_CONTEXT *v44; // [rsp+28h] [rbp-110h]
  _DWORD v45[40]; // [rsp+40h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v46; // [rsp+E0h] [rbp-58h] BYREF

  v44 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 10);
  v2 = *((_QWORD *)v44 + 13);
  v3 = *((_QWORD *)v44 + 12);
  v4 = *(_QWORD *)(v2 + 32);
  if ( (*(_BYTE *)(v4 + 2468) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v2 + 32))
    && !*(_BYTE *)(v2 + 172)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 168), 0, 0) )
  {
    v5 = *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v3 + 4) + 376);
    v6 = *((_QWORD *)this + 10);
    v7 = ++*(_QWORD *)(v5 + 48);
    *(_QWORD *)(v6 + 432) = v7;
    *((_QWORD *)this + 13) = v7;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    v8 = *(_QWORD *)(v3 + 24);
    v9 = 1;
    while ( 1 )
    {
      *(_QWORD *)(v8 + 1568) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(v8 + 1528));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1832), (__int64 **)(v3 + 2960), 0LL);
      if ( v10 )
        break;
      memset(v45, 0, sizeof(v45));
      v41 = *(unsigned __int16 *)(v3 + 4);
      v45[8] |= 0x11u;
      v45[12] = v41;
      v45[4] = 0;
      v45[5] = 1;
      VidSchWaitForCompletionEvent(v8, v45, 20LL);
    }
    v11 = (__int64)(v10 - 2);
    memset(v10 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v11 + 56) = this;
    *(_QWORD *)(v11 + 48) = v44;
    *(_DWORD *)v11 = 1953189956;
    *(_QWORD *)(v11 + 64) = *((_QWORD *)this + 33);
    v13 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 7;
    v14 = *(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v13 + 72) >> 3)) & 4;
    *(_DWORD *)(v11 + 92) = v14;
    v15 = ((unsigned __int8)v14 ^ (unsigned __int8)(*(_DWORD *)(v13 + 72) >> 4)) & 8 ^ v14;
    *(_DWORD *)(v11 + 92) = v15;
    v16 = ((unsigned __int16)v15 ^ (unsigned __int16)(*(_DWORD *)(v13 + 72) >> 8)) & 0x100 ^ v15;
    *(_DWORD *)(v11 + 92) = v16;
    v17 = ((unsigned __int8)v16 ^ (unsigned __int8)(4 * *(_DWORD *)(v13 + 72))) & 0x10 ^ v16 | 0x2000;
    *(_DWORD *)(v11 + 92) = v17;
    if ( !*((_DWORD *)this + 28) )
      v9 = 0;
    *(_QWORD *)(v11 + 104) = v7;
    *(_DWORD *)(v11 + 88) = 0;
    v18 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v9 << 14)) & 0x4000;
    v19 = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(v11 + 92) = v18;
    *(_DWORD *)(v11 + 96) = *((_DWORD *)this + 24);
    if ( v19 )
    {
      v37 = v18 | 2;
      *(_DWORD *)(v11 + 92) = v37;
      *(_DWORD *)(v11 + 92) = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v19 + 160);
    }
    *(_QWORD *)(v11 + 176) = *(_QWORD *)(v13 + 296);
    if ( (*(_DWORD *)(v13 + 256) & 0x8000000) != 0 )
    {
      v20 = *(_QWORD *)(v13 + 272);
      if ( v20 )
      {
        v21 = v20 + 8;
      }
      else
      {
        v38 = *(_QWORD *)(v13 + 264);
        if ( v38 )
          v21 = *(_QWORD *)(v38 + 128);
        else
          v21 = 0LL;
      }
      *(_QWORD *)(v11 + 192) = v21;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(v13 + 336);
    }
    else
    {
      *(_QWORD *)(v11 + 192) = 0LL;
    }
    *(_DWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 156) = *(_DWORD *)(v13 + 332);
    *(_DWORD *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(v13 + 308);
    v22 = *((_DWORD *)this + 18);
    if ( (v22 & 1) != 0 )
    {
      v39 = *((unsigned int *)this + 93);
      if ( (_DWORD)v39 != -1 && (v22 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * v39 + 2592) + 14768LL) != -1 )
        {
          v42 = *(void (__fastcall **)(_QWORD))(v4 + 2472);
          if ( v42 )
            v42(*(_QWORD *)(v4 + 2520));
        }
        *(_DWORD *)(v11 + 92) |= 0x800u;
      }
    }
    v23 = 0LL;
    v24 = 0;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 104LL) + 40LL) + 8LL) + 72LL);
    if ( !v25 )
      goto LABEL_26;
    v26 = *(_QWORD *)(v25 + 8);
    if ( !v26 )
      goto LABEL_26;
    v27 = *(unsigned __int16 *)(v3 + 6);
    v28 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 16) + 184LL));
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 432);
      if ( v29 )
      {
        v30 = *(unsigned __int16 *)(v3 + 6);
        v31 = *(_QWORD *)(v29 + 96) + 32LL * (unsigned int)v27;
        if ( v31 )
        {
          if ( *(_QWORD *)v31 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)v31 + 8LL);
            if ( v27 )
            {
              if ( *(_QWORD *)(v27 + 128) )
              {
                v23 = *(_QWORD *)(v31 + 8);
                v24 = *(_DWORD *)(v31 + 16);
                v32 = *(_QWORD *)(v27 + 136);
                v33 = *(_DWORD *)(v31 + 24);
                goto LABEL_25;
              }
            }
          }
        }
        v43 = WdLogNewEntry5_WdAssertion(v31, v27, 0LL, v12);
        *(_QWORD *)(v43 + 24) = v29;
        *(_QWORD *)(v43 + 32) = v30;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    v33 = 0;
    v32 = 0LL;
LABEL_25:
    v34 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v34 + 784) != v23 )
    {
      if ( v24 )
      {
        *(_QWORD *)(v34 + 784) = v23;
        memset(&v46, 0, sizeof(v46));
        v46.hContext = *(HANDLE *)(*(_QWORD *)(v11 + 48) + 64LL);
        v40 = *(ADAPTER_RENDER **)(v4 + 8);
        v46.Address.SegmentId = v33;
        v46.Address.SegmentOffset = v32;
        v46.NumEntries = v24;
        ADAPTER_RENDER::DdiSetRootPageTable(v40, &v46);
        *((_QWORD *)v44 + 99) = v46.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 432LL),
          *(struct _EPROCESS **)v26,
          &v46,
          v44);
      }
    }
LABEL_26:
    v35 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 96LL);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 8;
    *(_QWORD *)(v35 + 240) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v35 + 200));
    VidSchiSendToExecutionQueue(v11, 1);
    return 0LL;
  }
  VidSchiDiscardQueuePacket(this);
  return 3221225473LL;
}
