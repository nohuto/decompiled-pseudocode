/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F414
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F324 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     RtlDecompressBufferEx @ 0x1400F9EE4 (RtlDecompressBufferEx.c)
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     BCryptDecrypt @ 0x1402000A4 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x140205CAC (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned __int64 v9; // r12
  char v11; // bl
  unsigned __int64 v12; // rsi
  UCHAR *v13; // r14
  __int64 v14; // r8
  ULONG cbOutput; // edx
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  ULONG v20; // eax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  int v25; // eax
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-A8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-A0h]
  ULONG v28; // [rsp+48h] [rbp-80h]
  ULONG pcbResult; // [rsp+58h] [rbp-70h] BYREF
  ULONG v30; // [rsp+5Ch] [rbp-6Ch] BYREF
  PVOID WorkSpace; // [rsp+60h] [rbp-68h]
  _DWORD v32[4]; // [rsp+68h] [rbp-60h] BYREF

  v7 = *(unsigned int *)(a1 + 176);
  v8 = 0;
  v9 = (unsigned __int64)a3;
  WorkSpace = a2;
  v11 = 0;
  v12 = (unsigned __int64)a3 + v7;
  v13 = (UCHAR *)a4;
  v14 = *(_QWORD *)(a1 + 456);
  cbOutput = ~(*(_DWORD *)(v14 + 8) - 1) & (*(_DWORD *)(v14 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  pcbResult = cbOutput;
  if ( (a4 & 1) != 0 )
  {
    v13 = *(UCHAR **)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (v12 & 3) != 0 )
  {
    v9 &= 0xFFFFFFFFFFFFFFFCuLL;
    v16 = v12 & 3;
    v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v9, (unsigned int)v7 + cbOutput);
LABEL_28:
      v18 = a6;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v14 + 24) )
    {
      memmove(*(void **)(a1 + 1048), (const void *)v12, cbOutput);
      cbOutput = pcbResult;
      v12 = *(_QWORD *)(a1 + 1048);
    }
  }
  v17 = *(_QWORD *)(a1 + 456);
  if ( *(_DWORD *)(v17 + 24) )
  {
    v32[0] = *(unsigned __int16 *)(a5 + 4);
    v32[1] = *(_DWORD *)(a5 + 8);
    v32[2] = *(_DWORD *)(a5 + 12);
    *(_QWORD *)(v17 + 64) = v32;
    *(_DWORD *)(v17 + 72) = 12;
    *(_QWORD *)(v17 + 96) = v9;
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
           &pcbResult,
           v28) < 0 )
    {
      v25 = -1073741173;
LABEL_34:
      v8 = v25;
      ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, a4, a5, v25);
      goto LABEL_28;
    }
  }
  else if ( (unsigned __int8)*(_DWORD *)(a1 + 128)
         && *(_DWORD *)v9 != RtlComputeCrc32(0, (PUCHAR)v12, *(unsigned __int16 *)(a5 + 4)) )
  {
    v25 = -1073741761;
    goto LABEL_34;
  }
  v18 = a6;
  if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 152);
    if ( a6 == -56 )
    {
      StLockAcquireShared((struct VLOCK *)(v19 + 4488));
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 4488), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v19 + 4488));
      KeAbPostRelease(v19 + 4488);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v11 = 2;
  }
  v20 = *(unsigned __int16 *)(a5 + 4);
  if ( v20 >= 0x1000 )
  {
    memmove((void *)a4, (const void *)v12, *(unsigned __int16 *)(a5 + 4));
  }
  else if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 432), v13, 0x1000u, (PUCHAR)v12, v20, &v30, WorkSpace) >= 0
         && v30 == 4096 )
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
    v11 |= 1u;
  }
LABEL_19:
  if ( (v11 & 2) != 0 )
    *(_DWORD *)(v18 + 56) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 152) + 4488LL));
  if ( (v11 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, a4, a5, v8);
  return v8;
}
