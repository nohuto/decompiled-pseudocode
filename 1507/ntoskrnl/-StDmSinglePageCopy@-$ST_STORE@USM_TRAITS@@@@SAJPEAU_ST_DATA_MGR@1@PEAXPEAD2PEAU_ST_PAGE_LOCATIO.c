/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014118C
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014109C (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlDecompressBufferEx @ 0x1400D7E04 (RtlDecompressBufferEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     BCryptDecrypt @ 0x14024EF60 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x140254F3C (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
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
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v13; // rsi
  int v14; // r12d
  char v15; // bl
  UCHAR *v16; // r14
  ULONG cbOutput; // r12d
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _KTHREAD *v21; // rcx
  unsigned int v22; // edi
  __int16 v23; // ax
  ULONG v24; // eax
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  __int64 v27; // r12
  unsigned __int64 *v28; // r12
  __int64 v29; // r9
  __int64 v30; // r14
  int v32; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // r9
  __int64 v37; // rcx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  UCHAR *CompressedBufferSize; // [rsp+20h] [rbp-B8h]
  ULONG FinalUncompressedSize; // [rsp+28h] [rbp-B0h]
  ULONG v42; // [rsp+48h] [rbp-90h]
  ULONG v43; // [rsp+50h] [rbp-88h] BYREF
  __int64 v44; // [rsp+58h] [rbp-80h]
  PVOID WorkSpace; // [rsp+68h] [rbp-70h]
  ULONG pcbResult; // [rsp+70h] [rbp-68h] BYREF
  _DWORD v47[4]; // [rsp+78h] [rbp-60h] BYREF

  v7 = a6;
  WorkSpace = a2;
  v9 = *(_QWORD *)(a1 + 456);
  v10 = (unsigned __int64)a3;
  v11 = *(unsigned int *)(a1 + 176);
  v13 = (unsigned __int64)a3 + v11;
  v14 = *(unsigned __int16 *)(a5 + 4) - 1;
  v44 = a6;
  v15 = 0;
  v16 = (UCHAR *)a4;
  cbOutput = ~(*(_DWORD *)(v9 + 8) - 1) & (*(_DWORD *)(v9 + 8) + v14);
  if ( (a4 & 1) != 0 )
  {
    v16 = *(UCHAR **)(a6 + 48);
    a4 &= ~1uLL;
  }
  if ( (v13 & 3) != 0 )
  {
    v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    v18 = v13 & 3;
    v13 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v18 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v10, cbOutput + (unsigned int)v11);
      v22 = 0;
      goto LABEL_21;
    }
    if ( *(_DWORD *)(v9 + 24) )
    {
      memmove(*(void **)(a1 + 1048), (const void *)v13, cbOutput);
      v13 = *(_QWORD *)(a1 + 1048);
    }
  }
  v19 = *(_QWORD *)(a1 + 456);
  if ( *(_DWORD *)(v19 + 24) )
  {
    v47[0] = *(unsigned __int16 *)(a5 + 4);
    v47[1] = *(_DWORD *)(a5 + 8);
    v47[2] = *(_DWORD *)(a5 + 12);
    *(_QWORD *)(v19 + 64) = v47;
    *(_DWORD *)(v19 + 72) = 12;
    *(_QWORD *)(v19 + 96) = v10;
    *(_DWORD *)(v19 + 104) = 16;
    if ( BCryptDecrypt(
           *(BCRYPT_KEY_HANDLE *)(v19 + 32),
           (PUCHAR)v13,
           cbOutput,
           (void *)(v19 + 56),
           CompressedBufferSize,
           FinalUncompressedSize,
           (PUCHAR)v13,
           cbOutput,
           &pcbResult,
           v42) < 0 )
    {
      v22 = -1073741173;
LABEL_36:
      ST_STORE<SM_TRAITS>::StDmPageError(a1, v13, a4, a5, v22);
      goto LABEL_21;
    }
  }
  else if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
  {
    v32 = *(_DWORD *)v10;
    if ( v32 != RtlComputeCrc32(0, (PUCHAR)v13, *(unsigned __int16 *)(a5 + 4)) )
    {
      v22 = -1073741761;
      goto LABEL_36;
    }
  }
  if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 152);
    if ( v44 == -56 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v34 = (unsigned __int64 *)(v20 + 4488);
      v35 = KeAbPreAcquire(v20 + 4488, 0LL, 0LL, v7);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v34, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v34, v35, (ULONG_PTR)v34, v36);
      v22 = 0;
      if ( v35 )
        *(_BYTE *)(v35 + 26) |= 1u;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 4488), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 4488));
      KeAbPostRelease(v20 + 4488);
      v21 = KeGetCurrentThread();
      v22 = 0;
      v23 = v21->SpecialApcDisable + 1;
      v21->SpecialApcDisable = v23;
      if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery();
    }
    v15 = 2;
  }
  else
  {
    v22 = 0;
  }
  v24 = *(unsigned __int16 *)(a5 + 4);
  if ( v24 >= 0x1000 )
  {
    memmove((void *)a4, (const void *)v13, *(unsigned __int16 *)(a5 + 4));
  }
  else if ( RtlDecompressBufferEx(*(_WORD *)(a1 + 432), v16, 0x1000u, (PUCHAR)v13, v24, &v43, WorkSpace) >= 0
         && v43 == 4096 )
  {
    if ( v16 != (UCHAR *)a4 )
    {
      v37 = 32LL;
      v38 = (_OWORD *)a4;
      do
      {
        *v38 = *(_OWORD *)v16;
        v38[1] = *((_OWORD *)v16 + 1);
        v38[2] = *((_OWORD *)v16 + 2);
        v38[3] = *((_OWORD *)v16 + 3);
        v38[4] = *((_OWORD *)v16 + 4);
        v38[5] = *((_OWORD *)v16 + 5);
        v38[6] = *((_OWORD *)v16 + 6);
        v38 += 8;
        v39 = *((_OWORD *)v16 + 7);
        v16 += 128;
        *(v38 - 1) = v39;
        --v37;
      }
      while ( v37 );
    }
  }
  else
  {
    v22 = -1073741116;
    v15 |= 1u;
  }
LABEL_21:
  if ( (v15 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    v27 = *(_QWORD *)(a1 + 152);
    --v26->SpecialApcDisable;
    v28 = (unsigned __int64 *)(v27 + 4488);
    v30 = KeAbPreAcquire((ULONG_PTR)v28, 0LL, 0LL, v25);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v28, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v28, v30, (ULONG_PTR)v28, v29);
    if ( v30 )
      *(_BYTE *)(v30 + 26) |= 1u;
    *(_DWORD *)(v44 + 56) = 2;
  }
  if ( (v15 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StDmPageError(a1, v13, a4, a5, v22);
  return v22;
}
