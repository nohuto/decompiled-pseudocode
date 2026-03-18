/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C31C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x140206E64 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCompressBuffer @ 0x1400C21A4 (RtlCompressBuffer.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     BCryptEncrypt @ 0x1402001A0 (BCryptEncrypt.c)
 *     ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140205BE4 (-StDmLazyRemoveStatePrepare@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edx
  int v6; // ecx
  int Space; // edi
  __int64 v8; // rdi
  __int64 v9; // rdi
  UCHAR *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  ULONG v15; // edx
  unsigned int v16; // r12d
  UCHAR *v17; // r15
  ULONG v18; // r9d
  __int64 v19; // r10
  __int64 v20; // rdi
  int v21; // esi
  int v22; // eax
  unsigned int v24; // ecx
  __int64 v25; // rbx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  ULONG *v29; // rcx
  void *v30; // rcx
  ULONG v31; // eax
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-69h]
  ULONG UncompressedChunkSize; // [rsp+28h] [rbp-61h]
  ULONG v34; // [rsp+48h] [rbp-41h]
  ULONG FinalCompressedSize; // [rsp+50h] [rbp-39h] BYREF
  int v36; // [rsp+54h] [rbp-35h] BYREF
  ULONG *v37; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v38; // [rsp+60h] [rbp-29h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  ULONG pcbResult; // [rsp+70h] [rbp-19h] BYREF
  LARGE_INTEGER v41; // [rsp+78h] [rbp-11h] BYREF
  __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  _DWORD v44[4]; // [rsp+90h] [rbp+7h] BYREF

  v38 = a3;
  v5 = *(_DWORD *)a2 & 7;
  v6 = (unsigned __int8)*(_DWORD *)(a1 + 128);
  if ( (v6 != 0 ? 0 : 7) < v5 )
    v5 = v6 != 0 ? 0 : 7;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v5, *a3, (unsigned int)&v37, (__int64)&v36);
  if ( Space >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v8 + 4485) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 4488));
      KeAbPostRelease(v8 + 4488);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0 )
    {
      Space = ST_STORE<SM_TRAITS>::StDmLazyRemoveStatePrepare(a1, a2 + 16);
      if ( Space < 0 )
        goto LABEL_39;
    }
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (UCHAR *)v37 + *(unsigned int *)(a1 + 176);
    v11 = *(_DWORD *)(a1 + 128);
    if ( (v11 & 0x400) != 0 )
    {
      v15 = 4096;
    }
    else
    {
      if ( (v11 & 0x8000) != 0 )
      {
        v12 = 32LL;
        v13 = (_OWORD *)(*(_QWORD *)(a1 + 1048) + 4096LL);
        do
        {
          *v13 = *(_OWORD *)v9;
          v13[1] = *(_OWORD *)(v9 + 16);
          v13[2] = *(_OWORD *)(v9 + 32);
          v13[3] = *(_OWORD *)(v9 + 48);
          v13[4] = *(_OWORD *)(v9 + 64);
          v13[5] = *(_OWORD *)(v9 + 80);
          v13[6] = *(_OWORD *)(v9 + 96);
          v13 += 8;
          v14 = *(_OWORD *)(v9 + 112);
          v9 += 128LL;
          *(v13 - 1) = v14;
          --v12;
        }
        while ( v12 );
        v9 = *(_QWORD *)(a1 + 1048) + 4096LL;
      }
      v15 = 0;
    }
    v16 = *(_DWORD *)(a1 + 168) - (v36 & *(_DWORD *)(a1 + 160));
    FinalCompressedSize = v15;
    if ( v16 < *(_DWORD *)(a1 + 172) )
      v17 = *(UCHAR **)(a1 + 1048);
    else
      v17 = v10;
    if ( !v15 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 432),
             (PUCHAR)v9,
             0x1000u,
             v17,
             0x1000u,
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 360)) < 0 )
      {
        v15 = 4096;
        FinalCompressedSize = 4096;
      }
      else
      {
        v15 = FinalCompressedSize;
      }
    }
    if ( v17 != v10 )
    {
      v24 = (v15 + *(_DWORD *)(a1 + 176) + 15) >> 4;
      *v38 = v24;
      if ( v24 > v16 )
      {
        Space = -1073741267;
        goto LABEL_39;
      }
    }
    if ( v15 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_39;
      }
      v15 = 4096;
      v17 = (UCHAR *)v9;
      FinalCompressedSize = 4096;
    }
    if ( v17 != v10 )
    {
      memmove(v10, v17, v15);
      v15 = FinalCompressedSize;
    }
    v42 = 0LL;
    v43 = 0LL;
    v18 = 0;
    LODWORD(v42) = *(_DWORD *)(a2 + 16);
    HIDWORD(v42) = v36;
    if ( v15 < 0x1000 )
    {
      v18 = v15;
      LODWORD(v43) = v15 & 0xFFF;
    }
    v19 = *(_QWORD *)(a1 + 456);
    if ( !*(_DWORD *)(v19 + 24) )
    {
      if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      {
        v31 = RtlComputeCrc32(0, v10, v15);
        *v37 = v31;
      }
      goto LABEL_29;
    }
    v28 = *(_DWORD *)(v19 + 8);
    ++*(_QWORD *)(a1 + 464);
    HIDWORD(v43) = *(_DWORD *)(a1 + 464);
    v44[0] = v15;
    v44[1] = HIDWORD(v43);
    v29 = v37;
    LODWORD(v43) = (v18 ^ (*(_DWORD *)(a1 + 468) << 12)) & 0xFFF000 ^ v18;
    v44[2] = ((unsigned int)v43 >> 12) & 0xFFF;
    *(_QWORD *)(v19 + 64) = v44;
    *(_QWORD *)(v19 + 96) = v29;
    v30 = *(void **)(v19 + 32);
    *(_DWORD *)(v19 + 72) = 12;
    *(_DWORD *)(v19 + 104) = 16;
    if ( BCryptEncrypt(
           v30,
           v10,
           ~(v28 - 1) & (v15 + v28 - 1),
           (void *)(v19 + 56),
           CompressedBufferSize,
           UncompressedChunkSize,
           v10,
           ~(v28 - 1) & (v15 + v28 - 1),
           &pcbResult,
           v34) >= 0 )
    {
LABEL_29:
      v20 = *(_QWORD *)(a1 + 152);
      if ( (*(_BYTE *)(v20 + 4485) & 4) != 0 )
      {
        v21 = 20;
        Interval.QuadPart = -150000LL;
        while ( *(_DWORD *)(v20 + 5032) && v21 && *(_BYTE *)(v20 + 4486) >= 3u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          --v21;
        }
        v22 = StLockAcquireExclusive(v20 + 4488);
        ++*(_DWORD *)(v20 + 4500);
        *(_DWORD *)(v20 + 4496) = v22;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert((struct NP_CONTEXT::NP_CTX *)a1);
      if ( Space >= 0 )
        return 0;
      return (unsigned int)Space;
    }
    Space = -1073741174;
LABEL_39:
    v25 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v25 + 4485) & 4) != 0 )
    {
      v26 = 20;
      v41.QuadPart = -150000LL;
      while ( *(_DWORD *)(v25 + 5032) && v26 && *(_BYTE *)(v25 + 4486) >= 3u )
      {
        KeDelayExecutionThread(0, 0, &v41);
        --v26;
      }
      v27 = StLockAcquireExclusive(v25 + 4488);
      ++*(_DWORD *)(v25 + 4500);
      *(_DWORD *)(v25 + 4496) = v27;
    }
  }
  return (unsigned int)Space;
}
