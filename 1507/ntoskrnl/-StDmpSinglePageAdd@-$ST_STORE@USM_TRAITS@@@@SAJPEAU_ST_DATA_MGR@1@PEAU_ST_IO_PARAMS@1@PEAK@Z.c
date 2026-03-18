/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141A10 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1402560C0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlCompressBuffer @ 0x1400F790C (RtlCompressBuffer.c)
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140141F44 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     BCryptEncrypt @ 0x14024F088 (BCryptEncrypt.c)
 *     ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140254E74 (-StDmLazyRemoveStatePrepare@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edx
  int v6; // ecx
  int Space; // edi
  __int64 v8; // r9
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdi
  UCHAR *v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  ULONG v19; // edx
  int v20; // eax
  unsigned int v21; // r12d
  UCHAR *v22; // r15
  __int64 v23; // r10
  __int64 v24; // rdi
  int v25; // esi
  struct _KTHREAD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rsi
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // esi
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rsi
  int v38; // eax
  ULONG *v39; // rcx
  void *v40; // rcx
  ULONG v41; // eax
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-69h]
  ULONG UncompressedChunkSize; // [rsp+28h] [rbp-61h]
  ULONG v44; // [rsp+48h] [rbp-41h]
  ULONG FinalCompressedSize; // [rsp+50h] [rbp-39h] BYREF
  int v46; // [rsp+54h] [rbp-35h] BYREF
  ULONG *v47; // [rsp+58h] [rbp-31h]
  UCHAR *v48; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v49; // [rsp+68h] [rbp-21h]
  LARGE_INTEGER v50; // [rsp+70h] [rbp-19h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-11h] BYREF
  ULONG pcbResult[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v53; // [rsp+88h] [rbp-1h]
  __int64 v54; // [rsp+90h] [rbp+7h]
  _DWORD v55[4]; // [rsp+98h] [rbp+Fh] BYREF

  v49 = a3;
  v5 = *(_DWORD *)a2 & 7;
  v6 = (unsigned __int8)*(_DWORD *)(a1 + 128);
  if ( (v6 != 0 ? 0 : 7) < v5 )
    v5 = v6 != 0 ? 0 : 7;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v5, *a3, (unsigned int)&v48, (__int64)&v46);
  if ( Space >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v9 + 4485) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 4488));
      KeAbPostRelease(v9 + 4488);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0 )
    {
      Space = ST_STORE<SM_TRAITS>::StDmLazyRemoveStatePrepare(a1, a2 + 16);
      if ( Space < 0 )
        goto LABEL_46;
    }
    v12 = *(unsigned int *)(a1 + 176);
    v13 = *(_QWORD *)(a2 + 8);
    v47 = (ULONG *)v48;
    v14 = &v48[v12];
    v15 = *(_DWORD *)(a1 + 128);
    v48 = v14;
    if ( (v15 & 0x400) != 0 )
    {
      v19 = 4096;
    }
    else
    {
      if ( (v15 & 0x8000) != 0 )
      {
        v16 = 32LL;
        v17 = (_OWORD *)(*(_QWORD *)(a1 + 1048) + 4096LL);
        do
        {
          *v17 = *(_OWORD *)v13;
          v17[1] = *(_OWORD *)(v13 + 16);
          v17[2] = *(_OWORD *)(v13 + 32);
          v17[3] = *(_OWORD *)(v13 + 48);
          v17[4] = *(_OWORD *)(v13 + 64);
          v17[5] = *(_OWORD *)(v13 + 80);
          v17[6] = *(_OWORD *)(v13 + 96);
          v17 += 8;
          v18 = *(_OWORD *)(v13 + 112);
          v13 += 128LL;
          *(v17 - 1) = v18;
          --v16;
        }
        while ( v16 );
        v13 = *(_QWORD *)(a1 + 1048) + 4096LL;
      }
      v19 = 0;
    }
    v20 = v46 & *(_DWORD *)(a1 + 160);
    v21 = *(_DWORD *)(a1 + 168) - v20;
    FinalCompressedSize = v19;
    pcbResult[1] = v20;
    if ( v21 < *(_DWORD *)(a1 + 172) )
      v22 = *(UCHAR **)(a1 + 1048);
    else
      v22 = v14;
    if ( !v19 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 432),
             (PUCHAR)v13,
             0x1000u,
             v22,
             0x1000u,
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 360)) < 0 )
      {
        v19 = 4096;
        FinalCompressedSize = 4096;
      }
      else
      {
        v19 = FinalCompressedSize;
      }
    }
    if ( v22 != v14 )
    {
      v31 = (v19 + *(_DWORD *)(a1 + 176) + 15) >> 4;
      *v49 = v31;
      if ( v31 > v21 )
      {
        Space = -1073741267;
        goto LABEL_46;
      }
    }
    if ( v19 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_46;
      }
      v19 = 4096;
      v22 = (UCHAR *)v13;
      FinalCompressedSize = 4096;
    }
    if ( v22 != v14 )
    {
      memmove(v14, v22, v19);
      v19 = FinalCompressedSize;
    }
    v53 = 0LL;
    v54 = 0LL;
    v8 = 0LL;
    LODWORD(v53) = *(_DWORD *)(a2 + 16);
    HIDWORD(v53) = v46;
    if ( v19 < 0x1000 )
    {
      v8 = v19 & 0xFFF;
      LODWORD(v54) = v19 & 0xFFF;
    }
    v23 = *(_QWORD *)(a1 + 456);
    if ( !*(_DWORD *)(v23 + 24) )
    {
      if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      {
        v41 = RtlComputeCrc32(0, v14, v19);
        *v47 = v41;
      }
      goto LABEL_29;
    }
    v38 = *(_DWORD *)(v23 + 8);
    ++*(_QWORD *)(a1 + 464);
    HIDWORD(v54) = *(_DWORD *)(a1 + 464);
    v55[0] = v19;
    v55[1] = HIDWORD(v54);
    v39 = v47;
    LODWORD(v54) = (v8 ^ (*(_DWORD *)(a1 + 468) << 12)) & 0xFFF000 ^ v8;
    v55[2] = ((unsigned int)v54 >> 12) & 0xFFF;
    *(_QWORD *)(v23 + 64) = v55;
    *(_QWORD *)(v23 + 96) = v39;
    v40 = *(void **)(v23 + 32);
    *(_DWORD *)(v23 + 72) = 12;
    *(_DWORD *)(v23 + 104) = 16;
    if ( BCryptEncrypt(
           v40,
           v14,
           ~(v38 - 1) & (v19 + v38 - 1),
           (void *)(v23 + 56),
           CompressedBufferSize,
           UncompressedChunkSize,
           v14,
           ~(v38 - 1) & (v19 + v38 - 1),
           pcbResult,
           v44) >= 0 )
    {
LABEL_29:
      v24 = *(_QWORD *)(a1 + 152);
      if ( (*(_BYTE *)(v24 + 4485) & 4) != 0 )
      {
        v25 = 20;
        Interval.QuadPart = -150000LL;
        while ( *(_DWORD *)(v24 + 5032) && v25 && *(_BYTE *)(v24 + 4486) >= 3u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          --v25;
        }
        v26 = KeGetCurrentThread();
        --v26->SpecialApcDisable;
        v27 = KeAbPreAcquire(v24 + 4488, 0LL, 0LL, v8);
        v29 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 4488), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v24 + 4488), v27, v24 + 4488, v28);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        ++*(_DWORD *)(v24 + 4500);
        *(_DWORD *)(v24 + 4496) = 1;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert((struct NP_CONTEXT::NP_CTX *)a1);
      if ( Space >= 0 )
        return 0;
      return (unsigned int)Space;
    }
    Space = -1073741174;
LABEL_46:
    v32 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v32 + 4485) & 4) != 0 )
    {
      v33 = 20;
      v50.QuadPart = -150000LL;
      while ( *(_DWORD *)(v32 + 5032) && v33 && *(_BYTE *)(v32 + 4486) >= 3u )
      {
        KeDelayExecutionThread(0, 0, &v50);
        --v33;
      }
      v34 = KeGetCurrentThread();
      --v34->SpecialApcDisable;
      v35 = KeAbPreAcquire(v32 + 4488, 0LL, 0LL, v8);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 4488), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v32 + 4488), v35, v32 + 4488, v36);
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      ++*(_DWORD *)(v32 + 4500);
      *(_DWORD *)(v32 + 4496) = 1;
    }
  }
  return (unsigned int)Space;
}
