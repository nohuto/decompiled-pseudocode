/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011CC0C
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011CB60 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140001F14 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     RtlDecompressBufferEx @ 0x140005984 (RtlDecompressBufferEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     BCryptDecrypt @ 0x140219460 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14021ED1C (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  unsigned int v8; // edi
  char v10; // bl
  unsigned __int64 v11; // rdx
  __int64 pbOutput; // rbp
  _OWORD *v13; // rsi
  __int64 v14; // r8
  ULONG cbOutput; // r12d
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  UCHAR *v25; // [rsp+20h] [rbp-B8h]
  ULONG v26; // [rsp+28h] [rbp-B0h]
  ULONG v27; // [rsp+48h] [rbp-90h]
  int v28; // [rsp+58h] [rbp-80h] BYREF
  ULONG pcbResult[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v30; // [rsp+68h] [rbp-70h]
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  int v32; // [rsp+78h] [rbp-60h]

  v7 = *(unsigned int *)(a1 + 824);
  v8 = 0;
  v30 = a2;
  v10 = 0;
  v11 = a3;
  pbOutput = v7 + a3;
  v13 = (_OWORD *)a4;
  v14 = *(_QWORD *)(a1 + 1000);
  cbOutput = ~(*(_DWORD *)(v14 + 8) - 1) & (*(_DWORD *)(v14 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  if ( (a4 & 1) != 0 )
  {
    v13 = *(_OWORD **)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (pbOutput & 3) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    v16 = pbOutput & 3;
    *(_QWORD *)pcbResult = v11;
    pbOutput &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v11, (unsigned int)v7 + cbOutput);
LABEL_25:
      v18 = a6;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v14 + 24) )
    {
      memmove(*(void **)(a1 + 1752), (const void *)pbOutput, cbOutput);
      v11 = *(_QWORD *)pcbResult;
      pbOutput = *(_QWORD *)(a1 + 1752);
    }
  }
  v17 = *(_QWORD *)(a1 + 1000);
  if ( *(_DWORD *)(v17 + 24) )
  {
    v31 = 0LL;
    LODWORD(v31) = *(unsigned __int16 *)(a5 + 4);
    HIDWORD(v31) = *(_DWORD *)(a5 + 8);
    v32 = *(_DWORD *)(a5 + 12);
    *(_QWORD *)(v17 + 64) = &v31;
    *(_QWORD *)(v17 + 96) = v11;
    *(_DWORD *)(v17 + 72) = 12;
    *(_DWORD *)(v17 + 104) = 16;
    if ( BCryptDecrypt(
           *(BCRYPT_KEY_HANDLE *)(v17 + 32),
           (PUCHAR)pbOutput,
           cbOutput,
           (void *)(v17 + 56),
           v25,
           v26,
           (PUCHAR)pbOutput,
           cbOutput,
           pcbResult,
           v27) < 0 )
    {
      v8 = -1073741173;
      ST_STORE<SM_TRAITS>::StDmPageError(a1, pbOutput, a4, a5, -1073741173);
      goto LABEL_25;
    }
  }
  v18 = a6;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 800);
    if ( a6 == -56 )
    {
      StLockAcquireShared((struct VLOCK *)(v19 + 5864));
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 5864), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v19 + 5864));
      KeAbPostRelease(v19 + 5864);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v10 = 2;
  }
  v20 = *(unsigned __int16 *)(a5 + 4);
  if ( v20 >= 0x1000 )
  {
    memmove((void *)a4, (const void *)pbOutput, *(unsigned __int16 *)(a5 + 4));
  }
  else if ( (int)RtlDecompressBufferEx(*(_WORD *)(a1 + 976), (__int64)v13, 0x1000u, pbOutput, v20, (__int64)&v28, v30) >= 0
         && v28 == 4096 )
  {
    if ( v13 != (_OWORD *)a4 )
    {
      v22 = 32LL;
      v23 = (_OWORD *)a4;
      do
      {
        *v23 = *v13;
        v23[1] = v13[1];
        v23[2] = v13[2];
        v23[3] = v13[3];
        v23[4] = v13[4];
        v23[5] = v13[5];
        v23[6] = v13[6];
        v23 += 8;
        v24 = v13[7];
        v13 += 8;
        *(v23 - 1) = v24;
        --v22;
      }
      while ( v22 );
    }
  }
  else
  {
    v8 = -1073741116;
    v10 |= 1u;
  }
LABEL_18:
  if ( (v10 & 2) != 0 )
    *(_DWORD *)(v18 + 56) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 800) + 5864LL));
  if ( (v10 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StDmPageError(a1, pbOutput, a4, a5, v8);
  return v8;
}
