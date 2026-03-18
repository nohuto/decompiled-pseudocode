/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0018A58
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0017E70 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00E40CC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     EtwTraceDCompGetBatchEvent @ 0x1C0016020 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C001AFD8 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C003EC08 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C0042484 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C004284C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // esi
  struct UCE_RDP_HEADER *v4; // r12
  struct UCE_RDP_HEADER *v5; // r14
  struct UCE_RDP_HEADER *v6; // rdi
  bool v8; // r13
  __int64 v9; // rcx
  char v11; // r14
  char v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  DirectComposition::CBatchSharedMemoryPool *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  DirectComposition::CBatchSharedMemoryPool *v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  int ChannelRDPHeaders; // eax
  __int64 v28; // rcx
  struct UCE_RDP_HEADER *v29; // [rsp+20h] [rbp-50h] BYREF
  struct UCE_RDP_HEADER *v30; // [rsp+28h] [rbp-48h] BYREF
  struct UCE_RDP_HEADER *v31; // [rsp+30h] [rbp-40h]
  struct UCE_RDP_HEADER *v32; // [rsp+38h] [rbp-38h]
  void *v33; // [rsp+40h] [rbp-30h] BYREF
  void *v34; // [rsp+48h] [rbp-28h] BYREF
  __int64 v35; // [rsp+50h] [rbp-20h]
  DirectComposition::CBatchSharedMemoryPool *v36; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-10h] BYREF
  char v40; // [rsp+C8h] [rbp+58h]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v8 = 0;
  if ( !a2 )
  {
    v28 = *((_QWORD *)this + 14);
    if ( v28 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v28 + 8) + 8LL))(
             *(_QWORD *)(v28 + 8),
             0LL,
             1LL) != 3 )
        v8 = 1;
    }
  }
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 14);
    if ( !v9 || v8 )
      break;
    v11 = 0;
    v40 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v12 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 216),
        (unsigned int)(*((_DWORD *)this + 37) - 1),
        &v36,
        &v37);
      v6 = (struct UCE_RDP_HEADER *)(v37 + *((_QWORD *)v36 + 7));
      v29 = v6;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v36, v37, (void **)&v30);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_DWORD *)v6 + 1) = 40;
      *(_DWORD *)v6 = 5;
      *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v6 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 704LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else if ( *((_DWORD *)this + 37) == 2 )
    {
      if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v9 + 20) == 6 )
        {
          v11 = 1;
        }
        else
        {
          v40 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v9 + 8),
                                &v29,
                                &v30);
          v6 = v29;
          UserModeViewAtOffset = ChannelRDPHeaders;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v29 + 1) = 0LL;
            *((_DWORD *)v6 + 1) = 40;
            *(_DWORD *)v6 = 5;
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v6 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 704LL);
          }
        }
        v12 = v40;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v12 = 1;
        v11 = 1;
        if ( *(_DWORD *)(v9 + 20) == 6 )
        {
          UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                   *(DirectComposition::CApplicationChannel **)(v9 + 8),
                                   &v29,
                                   &v30);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v6 = v29;
          *((_QWORD *)v29 + 1) = 0LL;
          *((_DWORD *)v6 + 1) = 40;
          *(_DWORD *)v6 = 6;
          *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
        }
        else
        {
          v13 = *(_QWORD *)(v9 + 112);
          v14 = *(_QWORD *)(v9 + 104);
          v33 = 0LL;
          v35 = v13;
          v15 = *(DirectComposition::CBatchSharedMemoryPool **)(v9 + 96);
          v16 = *((_QWORD *)v15 + 7);
          UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v15, v14 + 40, &v33);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v17 = *((_QWORD *)this + 14);
          v18 = *(_QWORD *)(v17 + 104);
          v6 = (struct UCE_RDP_HEADER *)(v18 + *(_QWORD *)(*(_QWORD *)(v17 + 96) + 56LL));
          v19 = *(DirectComposition::CBatchSharedMemoryPool **)(v17 + 96);
          v29 = v6;
          DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v19, v18, &v34);
          v30 = (struct UCE_RDP_HEADER *)v34;
          v20 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
          *((_QWORD *)v6 + 1) = 0LL;
          *(_DWORD *)v6 = v20;
          *((_DWORD *)v6 + 1) = 40;
          v21 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v21 + 20) == 7 )
          {
            *(_QWORD *)(v21 + 72) = *((_QWORD *)this + 21);
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_QWORD *)v6 + 3) = v33;
            *((_DWORD *)v6 + 8) = v35;
            EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
          }
          else if ( *(_DWORD *)(v21 + 20) == 8 )
          {
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 28LL);
            *((_QWORD *)v6 + 3) = *(_QWORD *)(v16 + v14 + 40);
          }
          v12 = 1;
          v4 = v31;
        }
      }
    }
    else
    {
      v12 = 0;
    }
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( v11 )
    {
      v22 = **((_QWORD **)this + 14);
      if ( !a2 && v22 )
        v8 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 8) + 8LL))(*(_QWORD *)(v22 + 8)) != 3;
      v23 = *((_QWORD *)this + 14);
      *(_BYTE *)(v23 + 32) |= 4u;
      DirectComposition::CApplicationChannel::NotifyBatchProcessed(
        *(DirectComposition::CApplicationChannel **)(v23 + 8),
        (struct DirectComposition::CBatch *)v23);
      v24 = (_QWORD *)*((_QWORD *)this + 16);
      v25 = *((_QWORD *)this + 14);
      if ( v24 )
        *v24 = v25;
      else
        *((_QWORD *)this + 15) = v25;
      v26 = (_QWORD *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 16) = v26;
      *v26 = 0LL;
      *((_QWORD *)this + 14) = v22;
    }
    v5 = v32;
    if ( v12 )
    {
      if ( v4 )
      {
        *((_QWORD *)v4 + 1) = v30;
      }
      else
      {
        v5 = v30;
        v32 = v30;
      }
      v4 = v6;
      v31 = v6;
    }
  }
  *a3 = v5;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
