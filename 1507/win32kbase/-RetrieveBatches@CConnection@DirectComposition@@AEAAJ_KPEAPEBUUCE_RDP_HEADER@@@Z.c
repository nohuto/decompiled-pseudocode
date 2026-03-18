/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0022DB0
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0022940 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D4CC4 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C0011778 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C00234E0 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C0030094 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C00314CC (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int v3; // eax
  int v5; // esi
  struct UCE_RDP_HEADER *v6; // r13
  struct UCE_RDP_HEADER *v7; // rdi
  __int64 v8; // rdx
  char v9; // r12
  char v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // r14
  struct UCE_RDP_HEADER *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  int ChannelRDPHeaders; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  struct UCE_RDP_HEADER *v38; // [rsp+50h] [rbp-59h] BYREF
  int v39; // [rsp+58h] [rbp-51h]
  struct UCE_RDP_HEADER *v40; // [rsp+60h] [rbp-49h] BYREF
  __int64 v41; // [rsp+68h] [rbp-41h] BYREF
  __int64 v42; // [rsp+70h] [rbp-39h] BYREF
  struct UCE_RDP_HEADER *v43; // [rsp+78h] [rbp-31h]
  __int64 v44; // [rsp+80h] [rbp-29h] BYREF
  struct UCE_RDP_HEADER *v45; // [rsp+88h] [rbp-21h]
  __int64 v46; // [rsp+90h] [rbp-19h]
  __int64 v47; // [rsp+98h] [rbp-11h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-9h]
  __int64 v49; // [rsp+A8h] [rbp-1h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v50; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned __int64 v52; // [rsp+C0h] [rbp+17h] BYREF
  const struct UCE_RDP_HEADER **v54; // [rsp+120h] [rbp+77h]
  char v55; // [rsp+128h] [rbp+7Fh]

  v54 = a3;
  v3 = a2;
  v43 = 0LL;
  v40 = 0LL;
  v5 = 0;
  v38 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  LOBYTE(v3) = !a2
            && (v33 = *((_QWORD *)this + 14)) != 0
            && (v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 8) + 8LL))(*(_QWORD *)(v33 + 8)), v3 != 3);
  v39 = v3;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( !v8 || (_BYTE)v3 )
      break;
    v9 = 0;
    v55 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v10 = 1;
      v55 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 216),
        v8,
        &v50,
        &v52);
      v7 = (struct UCE_RDP_HEADER *)(v52 + *((_QWORD *)v50 + 7));
      v40 = v7;
      result = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v50, v52, (void **)&v38);
      v5 = result;
      if ( (int)result < 0 )
        return result;
      *((_DWORD *)v7 + 1) = 40;
      *(_DWORD *)v7 = 5;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
      goto LABEL_18;
    }
    if ( *((_DWORD *)this + 37) != 2 )
      goto LABEL_38;
    if ( (*(_BYTE *)(v8 + 32) & 1) != 0 )
    {
      if ( *(_DWORD *)(v8 + 20) == 6 )
      {
        v9 = 1;
        v10 = 0;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v55 = 1;
        ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                              *(DirectComposition::CApplicationChannel **)(v8 + 8),
                              &v40,
                              &v38);
        v7 = v40;
        v5 = ChannelRDPHeaders;
        if ( ChannelRDPHeaders >= 0 )
        {
          *((_DWORD *)v40 + 1) = 40;
          *(_DWORD *)v7 = 5;
          *((_QWORD *)v7 + 1) = 0LL;
          v8 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
          *((_DWORD *)v7 + 4) = *(_DWORD *)(v8 + 28);
        }
        v10 = 1;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      goto LABEL_18;
    }
    v10 = 1;
    v55 = 1;
    v9 = 1;
    if ( *(_DWORD *)(v8 + 20) == 6 )
    {
      result = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                 *(DirectComposition::CApplicationChannel **)(v8 + 8),
                 &v40,
                 &v38);
      v5 = result;
      if ( (int)result < 0 )
        return result;
      v7 = v40;
      *((_DWORD *)v40 + 1) = 40;
      *(_DWORD *)v7 = 6;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      goto LABEL_18;
    }
    v5 = 0;
    v11 = *(_QWORD **)(v8 + 96);
    v12 = *(_QWORD *)(v8 + 104);
    v48 = *(_QWORD *)(v8 + 112);
    v13 = v12 + 40;
    v14 = *(_QWORD *)(v8 + 96);
    v38 = 0LL;
    v15 = v11[6] == 0LL;
    v46 = *(_QWORD *)(v14 + 56) + *(_QWORD *)(v8 + 104) + 40LL;
    if ( !v15 )
      goto LABEL_11;
    v29 = v11[3];
    v44 = 0LL;
    v30 = v11[2];
    v49 = 0LL;
    v41 = 0LL;
    v5 = MmMapViewOfSection(v29, *(_QWORD *)(v30 + 16), &v41, 0LL, 4096LL, &v44, &v49, 2, 0x400000, 2);
    if ( v5 >= 0 )
    {
      v11[6] = v41;
LABEL_11:
      a3 = (const struct UCE_RDP_HEADER **)(v13 + v11[6]);
      v38 = (struct UCE_RDP_HEADER *)a3;
      goto LABEL_12;
    }
    a3 = 0LL;
LABEL_12:
    if ( v5 < 0 )
      return (unsigned int)v5;
    v16 = *((_QWORD *)this + 14);
    v17 = *(_QWORD **)(v16 + 96);
    v18 = *(_QWORD *)(v16 + 104);
    v19 = v17;
    v7 = (struct UCE_RDP_HEADER *)(v18 + v17[7]);
    v15 = v17[6] == 0LL;
    v40 = v7;
    if ( v15 )
    {
      v34 = v17[3];
      v51 = 0LL;
      v47 = 0LL;
      v42 = 0LL;
      v35 = MmMapViewOfSection(v34, *(_QWORD *)(v17[2] + 16LL), &v42, 0LL, 4096LL, &v51, &v47, 2, 0x400000, 2);
      a3 = (const struct UCE_RDP_HEADER **)v38;
      if ( v35 < 0 )
      {
        v20 = v45;
        goto LABEL_15;
      }
      v19[6] = v42;
    }
    v20 = (struct UCE_RDP_HEADER *)(v18 + v19[6]);
    v45 = v20;
LABEL_15:
    v38 = v20;
    *(_DWORD *)v7 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
    *((_DWORD *)v7 + 1) = 40;
    *((_QWORD *)v7 + 1) = 0LL;
    v8 = *((_QWORD *)this + 14);
    if ( *(_DWORD *)(v8 + 20) == 7 )
    {
      *(_QWORD *)(v8 + 72) = *((_QWORD *)this + 21);
      *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      v31 = v48;
      *((_QWORD *)v7 + 3) = a3;
      *((_DWORD *)v7 + 8) = v31;
      EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
LABEL_38:
      v10 = v55;
      goto LABEL_18;
    }
    v10 = 1;
    if ( *(_DWORD *)(v8 + 20) == 8 )
    {
      v21 = (_QWORD *)v46;
      *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 28LL);
      *((_QWORD *)v7 + 3) = *v21;
    }
LABEL_18:
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( v9 )
    {
      v22 = **((_QWORD **)this + 14);
      if ( !a2 && v22 )
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct UCE_RDP_HEADER **))(**(_QWORD **)(v22 + 8) + 8LL))(
                *(_QWORD *)(v22 + 8),
                v8,
                a3);
        v37 = (unsigned __int8)v39;
        if ( v36 != 3 )
          v37 = 1;
        v39 = v37;
      }
      v23 = *((_QWORD *)this + 14);
      *(_BYTE *)(v23 + 32) |= 4u;
      v24 = *(_QWORD *)(v23 + 8);
      if ( *(_DWORD *)(v23 + 20) != 6 && *(_QWORD *)(v24 + 360) )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(v24 + 368));
        v15 = (*(_DWORD *)(v24 + 168))-- == 1;
        if ( v15 )
          KeSetEvent(**(PRKEVENT **)(v24 + 360), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v24 + 368));
        KeLeaveCriticalRegion();
      }
      v25 = (_QWORD *)*((_QWORD *)this + 16);
      v26 = *((_QWORD *)this + 14);
      if ( v25 )
        *v25 = v26;
      else
        *((_QWORD *)this + 15) = v26;
      v27 = (_QWORD *)*((_QWORD *)this + 14);
      v10 = v55;
      *((_QWORD *)this + 16) = v27;
      *v27 = 0LL;
      *((_QWORD *)this + 14) = v22;
    }
    LOBYTE(v3) = v39;
    if ( v10 )
    {
      if ( v6 )
        *((_QWORD *)v6 + 1) = v38;
      else
        v43 = v38;
      LOBYTE(v3) = v39;
      v6 = v7;
    }
  }
  *v54 = v43;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)v5;
}
