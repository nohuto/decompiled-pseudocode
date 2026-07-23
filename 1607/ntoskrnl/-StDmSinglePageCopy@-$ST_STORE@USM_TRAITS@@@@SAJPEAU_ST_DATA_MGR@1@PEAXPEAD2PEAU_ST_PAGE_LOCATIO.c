/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011D17C
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011D0D0 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140002088 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     RtlDecompressBufferEx @ 0x140005AF8 (RtlDecompressBufferEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     BCryptDecrypt @ 0x14021928C (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14021EB48 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  unsigned int v8; // edi
  char v10; // bl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  UCHAR *v13; // rsi
  __int64 v14; // r8
  ULONG cbOutput; // r12d
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  ULONG v20; // eax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-B8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-B0h]
  ULONG v27; // [rsp+48h] [rbp-90h]
  ULONG v28; // [rsp+58h] [rbp-80h] BYREF
  ULONG pcbResult[2]; // [rsp+60h] [rbp-78h] BYREF
  PVOID WorkSpace; // [rsp+68h] [rbp-70h]
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  int v32; // [rsp+78h] [rbp-60h]

  v7 = *(unsigned int *)(a1 + 824);
  v8 = 0;
  WorkSpace = a2;
  v10 = 0;
  v11 = a3;
  v12 = v7 + a3;
  v13 = (UCHAR *)a4;
  v14 = *(_QWORD *)(a1 + 1000);
  cbOutput = ~(*(_DWORD *)(v14 + 8) - 1) & (*(_DWORD *)(v14 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  if ( (a4 & 1) != 0 )
  {
    v13 = *(UCHAR **)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (v12 & 3) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    v16 = v12 & 3;
    *(_QWORD *)pcbResult = v11;
    v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v11, (unsigned int)v7 + cbOutput);
LABEL_25:
      v18 = a6;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v14 + 24) )
    {
      memmove(*(void **)(a1 + 1752), (const void *)v12, cbOutput);
      v11 = *(_QWORD *)pcbResult;
      v12 = *(_QWORD *)(a1 + 1752);
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
           (PUCHAR)v12,
           cbOutput,
           (void *)(v17 + 56),
           CompressedBufferSize,
           FinalUncompressedSize,
           (PUCHAR)v12,
           cbOutput,
           pcbResult,
           v27) < 0 )
    {
      v8 = -1073741173;
      ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, a4, a5, -1073741173);
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
    memmove((void *)a4, (const void *)v12, *(unsigned __int16 *)(a5 + 4));
  }
  else if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 976), v13, 0x1000u, (PUCHAR)v12, v20, &v28, WorkSpace) >= 0
         && v28 == 4096 )
  {
    if ( v13 != (UCHAR *)a4 )
    {
      v22 = 32LL;
      v23 = (_OWORD *)a4;
      do
      {
        *v23 = *(_OWORD *)v13;
        v23[1] = *((_OWORD *)v13 + 1);
        v23[2] = *((_OWORD *)v13 + 2);
        v23[3] = *((_OWORD *)v13 + 3);
        v23[4] = *((_OWORD *)v13 + 4);
        v23[5] = *((_OWORD *)v13 + 5);
        v23[6] = *((_OWORD *)v13 + 6);
        v23 += 8;
        v24 = *((_OWORD *)v13 + 7);
        v13 += 128;
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
    ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, a4, a5, v8);
  return v8;
}
