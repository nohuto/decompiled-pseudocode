/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C000C0C4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C000F8F0 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0059B60 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
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
  __int64 v12; // rcx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rsi
  UINT v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rcx
  UINT64 v31; // r15
  UINT v32; // ebx
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  int v36; // esi
  __int64 v37; // rax
  ADAPTER_RENDER *v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  void (__fastcall *v41)(_QWORD); // rax
  __int64 v42; // rax
  struct _VIDSCH_CONTEXT *v43; // [rsp+28h] [rbp-110h]
  _DWORD v44[40]; // [rsp+40h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v45; // [rsp+E0h] [rbp-58h] BYREF

  v43 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 11);
  v2 = *((_QWORD *)v43 + 13);
  v3 = *((_QWORD *)v43 + 12);
  v4 = *(_QWORD *)(v2 + 32);
  if ( (*(_BYTE *)(v4 + 2828) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v2 + 32))
    || *(_BYTE *)(v2 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 160), 0, 0) )
  {
    VidSchiDiscardQueuePacket(this);
    return 3221225473LL;
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v3 + 4) + 408);
    v6 = *((_QWORD *)this + 11);
    v7 = ++*(_QWORD *)(v5 + 48);
    *(_QWORD *)(v6 + 432) = v7;
    *((_QWORD *)this + 14) = v7;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    v8 = *(_QWORD *)(v3 + 24);
    v9 = 1;
    while ( 1 )
    {
      *(_QWORD *)(v8 + 1600) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(v8 + 1560));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1864), (__int64 **)(v3 + 2800), 0LL);
      if ( v10 )
        break;
      memset(v44, 0, sizeof(v44));
      v40 = *(unsigned __int16 *)(v3 + 4);
      v44[8] |= 0x11u;
      v44[12] = v40;
      v44[4] = 0;
      v44[5] = 1;
      VidSchWaitForCompletionEvent(v8, (__int64)v44, 20LL);
    }
    v11 = (__int64)(v10 - 2);
    memset(v10 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v11 + 56) = this;
    *(_QWORD *)(v11 + 48) = v43;
    *(_DWORD *)v11 = 1953189956;
    *(_QWORD *)(v11 + 64) = *((_QWORD *)this + 34);
    v12 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 7;
    v13 = *(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *(_DWORD *)(v11 + 92) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *(_DWORD *)(v11 + 92) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *(_DWORD *)(v11 + 92) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *(_DWORD *)(v11 + 92) = v16;
    if ( !*((_DWORD *)this + 30) )
      v9 = 0;
    *(_QWORD *)(v11 + 104) = v7;
    *(_DWORD *)(v11 + 88) = 0;
    v17 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v9 << 14)) & 0x4000;
    v18 = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(v11 + 92) = v17;
    *(_DWORD *)(v11 + 96) = *((_DWORD *)this + 26);
    if ( v18 )
    {
      v36 = v17 | 2;
      *(_DWORD *)(v11 + 92) = v36;
      *(_DWORD *)(v11 + 92) = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v18 + 160);
    }
    *(_QWORD *)(v11 + 176) = *(_QWORD *)(v12 + 304);
    if ( (*(_DWORD *)(v12 + 264) & 0x8000000) != 0 )
    {
      v19 = *(_QWORD *)(v12 + 280);
      if ( v19 )
      {
        v20 = v19 + 8;
      }
      else
      {
        v37 = *(_QWORD *)(v12 + 272);
        if ( v37 )
          v20 = *(_QWORD *)(v37 + 128);
        else
          v20 = 0LL;
      }
      *(_QWORD *)(v11 + 192) = v20;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(v12 + 344);
    }
    else
    {
      *(_QWORD *)(v11 + 192) = 0LL;
    }
    *(_DWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 156) = *(_DWORD *)(v12 + 340);
    *(_DWORD *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(v12 + 316);
    v21 = *((_DWORD *)this + 18);
    if ( (v21 & 1) != 0 )
    {
      v39 = *((unsigned int *)this + 95);
      if ( (_DWORD)v39 != -1 && (v21 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * v39 + 2968) + 18872LL) != -1 )
        {
          v41 = *(void (__fastcall **)(_QWORD))(v4 + 2832);
          if ( v41 )
            v41(*(_QWORD *)(v4 + 2896));
        }
        *(_DWORD *)(v11 + 92) |= 0x800u;
      }
    }
    v22 = 0LL;
    v23 = 0;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 104LL) + 40LL) + 8LL) + 64LL);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 )
      {
        v26 = *(unsigned __int16 *)(v3 + 6);
        v27 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 16) + 200LL));
        if ( v27 && (v28 = *(_QWORD *)(v27 + 464)) != 0 )
        {
          v29 = *(unsigned __int16 *)(v3 + 6);
          v30 = *(_QWORD *)(v28 + 96) + 32LL * (unsigned int)v26;
          if ( v30 && *(_QWORD *)v30 && (v26 = *(_QWORD *)(*(_QWORD *)v30 + 8LL)) != 0 && *(_QWORD *)(v26 + 136) )
          {
            v22 = *(_QWORD *)(v30 + 8);
            v23 = *(_DWORD *)(v30 + 16);
            v31 = *(_QWORD *)(v26 + 144);
            v32 = *(_DWORD *)(v30 + 24);
          }
          else
          {
            v42 = WdLogNewEntry5_WdAssertion(v30, v26);
            *(_QWORD *)(v42 + 24) = v28;
            *(_QWORD *)(v42 + 32) = v29;
            WdLogEvent5_WdAssertion(v42);
            v32 = 0;
            v31 = 0LL;
          }
        }
        else
        {
          v31 = 0LL;
          v32 = 0;
        }
        v33 = *(_QWORD *)(v11 + 48);
        if ( *(_QWORD *)(v33 + 816) != v22 )
        {
          if ( v23 )
          {
            *(_QWORD *)(v33 + 816) = v22;
            memset(&v45, 0, sizeof(v45));
            v45.hContext = *(HANDLE *)(*(_QWORD *)(v11 + 48) + 64LL);
            v38 = *(ADAPTER_RENDER **)(v4 + 8);
            v45.Address.SegmentId = v32;
            v45.Address.SegmentOffset = v31;
            v45.NumEntries = v23;
            ADAPTER_RENDER::DdiSetRootPageTable(v38, &v45);
            *((_QWORD *)v43 + 103) = v45.Address.SegmentOffset;
            VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
              *(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 408LL),
              *(struct _EPROCESS **)v25,
              &v45,
              v43);
          }
        }
      }
    }
    v34 = *(struct _KEVENT **)(*(_QWORD *)(v11 + 48) + 96LL);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 8;
    v34[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v34 + 10);
    VidSchiSendToExecutionQueue(v11, 1);
    return 0LL;
  }
}
