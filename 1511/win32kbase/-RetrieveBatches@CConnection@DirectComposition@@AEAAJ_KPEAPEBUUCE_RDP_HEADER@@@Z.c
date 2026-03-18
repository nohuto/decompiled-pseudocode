/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00131C0
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0012CD0 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D69EC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     EtwTraceDCompGetBatchEvent @ 0x1C0013C90 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C001A278 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C001D294 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00738EC (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  struct UCE_RDP_HEADER *v4; // rcx
  int v5; // eax
  int v6; // esi
  struct UCE_RDP_HEADER *v7; // r13
  struct UCE_RDP_HEADER *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  char v11; // r12
  char v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r15
  _QWORD *v21; // r14
  struct UCE_RDP_HEADER *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int ChannelRDPHeaders; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  struct UCE_RDP_HEADER *v39; // [rsp+50h] [rbp-59h] BYREF
  int v40; // [rsp+58h] [rbp-51h]
  struct UCE_RDP_HEADER *v41; // [rsp+60h] [rbp-49h] BYREF
  struct UCE_RDP_HEADER *v42; // [rsp+68h] [rbp-41h]
  __int64 v43; // [rsp+70h] [rbp-39h] BYREF
  __int64 v44; // [rsp+78h] [rbp-31h] BYREF
  __int64 v45; // [rsp+80h] [rbp-29h] BYREF
  struct UCE_RDP_HEADER *v46; // [rsp+88h] [rbp-21h]
  __int64 v47; // [rsp+90h] [rbp-19h]
  __int64 v48; // [rsp+98h] [rbp-11h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-9h]
  __int64 v50; // [rsp+A8h] [rbp-1h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v51; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned __int64 v53; // [rsp+C0h] [rbp+17h] BYREF
  const struct UCE_RDP_HEADER **v55; // [rsp+120h] [rbp+77h]
  char v56; // [rsp+128h] [rbp+7Fh]

  v55 = a3;
  v41 = 0LL;
  v4 = 0LL;
  v42 = 0LL;
  v5 = a2;
  v39 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 )
  {
    v34 = *((_QWORD *)this + 14);
    if ( v34 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v34 + 8) + 8LL))(*(_QWORD *)(v34 + 8));
      v4 = 0LL;
      if ( v5 != 3 )
      {
        LOBYTE(v5) = 1;
        goto LABEL_3;
      }
    }
    else
    {
      v4 = 0LL;
    }
  }
  LOBYTE(v5) = 0;
LABEL_3:
  v40 = v5;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 14);
    if ( !v9 || (_BYTE)v5 )
      break;
    v11 = 0;
    v56 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v12 = 1;
      v56 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 216),
        v9,
        &v51,
        &v53);
      v8 = (struct UCE_RDP_HEADER *)(v53 + *((_QWORD *)v51 + 7));
      v41 = v8;
      result = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v51, v53, (void **)&v39);
      v6 = result;
      if ( (int)result < 0 )
        return result;
      *((_DWORD *)v8 + 1) = 40;
      *(_DWORD *)v8 = 5;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
      goto LABEL_21;
    }
    if ( *((_DWORD *)this + 37) != 2 )
      goto LABEL_38;
    if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
    {
      if ( *(_DWORD *)(v9 + 20) == 6 )
      {
        v11 = 1;
        v12 = 0;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v56 = 1;
        ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                              *(DirectComposition::CApplicationChannel **)(v9 + 8),
                              &v41,
                              &v39);
        v8 = v41;
        v6 = ChannelRDPHeaders;
        if ( ChannelRDPHeaders >= 0 )
        {
          *((_DWORD *)v41 + 1) = 40;
          *(_DWORD *)v8 = 5;
          *((_QWORD *)v8 + 1) = 0LL;
          v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
          *((_DWORD *)v8 + 4) = *(_DWORD *)(v9 + 28);
        }
        v12 = 1;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      goto LABEL_21;
    }
    v12 = 1;
    v56 = 1;
    v11 = 1;
    if ( *(_DWORD *)(v9 + 20) == 6 )
    {
      result = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                 *(DirectComposition::CApplicationChannel **)(v9 + 8),
                 &v41,
                 &v39);
      v6 = result;
      if ( (int)result < 0 )
        return result;
      v8 = v41;
      *((_DWORD *)v41 + 1) = 40;
      *(_DWORD *)v8 = 6;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      goto LABEL_21;
    }
    v6 = 0;
    v13 = *(_QWORD **)(v9 + 96);
    v14 = *(_QWORD *)(v9 + 104);
    v49 = *(_QWORD *)(v9 + 112);
    v15 = v14 + 40;
    v16 = *(_QWORD *)(v9 + 96);
    v39 = 0LL;
    v17 = v13[6] == 0LL;
    v47 = *(_QWORD *)(v16 + 56) + *(_QWORD *)(v9 + 104) + 40LL;
    if ( !v17 )
      goto LABEL_14;
    v30 = v13[3];
    v45 = 0LL;
    v31 = v13[2];
    v50 = 0LL;
    v43 = 0LL;
    v6 = MmMapViewOfSection(v30, *(_QWORD *)(v31 + 16), &v43, 0LL, 4096LL, &v45, &v50, 2, 0x400000, 2);
    if ( v6 >= 0 )
    {
      v13[6] = v43;
LABEL_14:
      a3 = (const struct UCE_RDP_HEADER **)(v15 + v13[6]);
      v39 = (struct UCE_RDP_HEADER *)a3;
      goto LABEL_15;
    }
    a3 = 0LL;
LABEL_15:
    if ( v6 < 0 )
      return (unsigned int)v6;
    v18 = *((_QWORD *)this + 14);
    v19 = *(_QWORD **)(v18 + 96);
    v20 = *(_QWORD *)(v18 + 104);
    v21 = v19;
    v8 = (struct UCE_RDP_HEADER *)(v20 + v19[7]);
    v17 = v19[6] == 0LL;
    v41 = v8;
    if ( v17 )
    {
      v35 = v19[3];
      v52 = 0LL;
      v48 = 0LL;
      v44 = 0LL;
      v36 = MmMapViewOfSection(v35, *(_QWORD *)(v19[2] + 16LL), &v44, 0LL, 4096LL, &v52, &v48, 2, 0x400000, 2);
      a3 = (const struct UCE_RDP_HEADER **)v39;
      if ( v36 < 0 )
      {
        v22 = v46;
        goto LABEL_18;
      }
      v21[6] = v44;
    }
    v22 = (struct UCE_RDP_HEADER *)(v20 + v21[6]);
    v46 = v22;
LABEL_18:
    v39 = v22;
    *(_DWORD *)v8 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
    *((_DWORD *)v8 + 1) = 40;
    *((_QWORD *)v8 + 1) = 0LL;
    v9 = *((_QWORD *)this + 14);
    if ( *(_DWORD *)(v9 + 20) == 7 )
    {
      *(_QWORD *)(v9 + 72) = *((_QWORD *)this + 21);
      *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      v32 = v49;
      *((_QWORD *)v8 + 3) = a3;
      *((_DWORD *)v8 + 8) = v32;
      EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
LABEL_38:
      v12 = v56;
      goto LABEL_21;
    }
    v12 = 1;
    if ( *(_DWORD *)(v9 + 20) == 8 )
    {
      v23 = (_QWORD *)v47;
      *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 28LL);
      *((_QWORD *)v8 + 3) = *v23;
    }
LABEL_21:
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v11 )
    {
      v24 = **((_QWORD **)this + 14);
      if ( !a2 && v24 )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, const struct UCE_RDP_HEADER **))(**(_QWORD **)(v24 + 8)
                                                                                                  + 8LL))(
                *(_QWORD *)(v24 + 8),
                v9,
                a3);
        v38 = (unsigned __int8)v40;
        if ( v37 != 3 )
          v38 = 1;
        v40 = v38;
      }
      v25 = *((_QWORD *)this + 14);
      *(_BYTE *)(v25 + 32) |= 4u;
      v26 = *(_QWORD *)(v25 + 8);
      if ( *(_DWORD *)(v25 + 20) != 6 && *(_QWORD *)(v26 + 360) )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(v26 + 368));
        v17 = (*(_DWORD *)(v26 + 168))-- == 1;
        if ( v17 )
          KeSetEvent(**(PRKEVENT **)(v26 + 360), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v26 + 368));
        KeLeaveCriticalRegion();
      }
      v27 = (_QWORD *)*((_QWORD *)this + 16);
      v28 = *((_QWORD *)this + 14);
      if ( v27 )
        *v27 = v28;
      else
        *((_QWORD *)this + 15) = v28;
      v29 = (_QWORD *)*((_QWORD *)this + 14);
      v12 = v56;
      *((_QWORD *)this + 16) = v29;
      *v29 = 0LL;
      *((_QWORD *)this + 14) = v24;
    }
    v4 = v42;
    LOBYTE(v5) = v40;
    if ( v12 )
    {
      if ( v7 )
      {
        *((_QWORD *)v7 + 1) = v39;
      }
      else
      {
        v4 = v39;
        v42 = v39;
      }
      LOBYTE(v5) = v40;
      v7 = v8;
    }
  }
  *v55 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)v6;
}
