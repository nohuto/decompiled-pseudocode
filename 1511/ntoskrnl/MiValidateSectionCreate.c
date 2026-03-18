/*
 * XREFs of MiValidateSectionCreate @ 0x1404AEAF4
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     PsRevertToUserPagePriorityThread @ 0x140007300 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x140007330 (PsSetSystemPagePriorityThread.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x140157440 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     MiImageCantMove @ 0x1401E4D3C (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1401E4D6C (MiStrongCodeImage.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x1404AF16C (SeValidateImageHeader.c)
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x1404AF3A4 (SeReleaseImageValidationContext.c)
 *     MiPerformFixups @ 0x1404DB740 (MiPerformFixups.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14062B9EC (MiCaptureSecureImageBaseAddress.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiValidateSectionCreate(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4, char a5)
{
  unsigned int v6; // r12d
  struct _KTHREAD *CurrentThread; // r13
  int PerSessionProtos; // r15d
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // r13d
  PVOID v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r12d
  signed __int64 v18; // rcx
  _QWORD *v19; // r13
  bool v20; // zf
  signed __int64 v21; // rax
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  ULONG_PTR v26; // rax
  unsigned int v27; // r12d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  signed __int64 v30; // rcx
  unsigned int v31; // eax
  signed __int64 v32; // [rsp+50h] [rbp-138h] BYREF
  char v33[4]; // [rsp+58h] [rbp-130h] BYREF
  int v34; // [rsp+5Ch] [rbp-12Ch]
  unsigned int v35; // [rsp+60h] [rbp-128h]
  int v36; // [rsp+64h] [rbp-124h]
  int v37; // [rsp+68h] [rbp-120h]
  int v38; // [rsp+6Ch] [rbp-11Ch]
  unsigned int v39; // [rsp+70h] [rbp-118h]
  unsigned int v40; // [rsp+74h] [rbp-114h]
  ULONG_PTR v41; // [rsp+78h] [rbp-110h]
  unsigned int v42; // [rsp+80h] [rbp-108h]
  unsigned int v43; // [rsp+84h] [rbp-104h]
  unsigned int v44; // [rsp+88h] [rbp-100h]
  int v45; // [rsp+8Ch] [rbp-FCh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-F8h]
  _QWORD *v47; // [rsp+98h] [rbp-F0h]
  PVOID v48; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v49; // [rsp+A8h] [rbp-E0h]
  signed __int64 v50; // [rsp+B0h] [rbp-D8h]
  unsigned int v51; // [rsp+B8h] [rbp-D0h]
  __int64 v52; // [rsp+C0h] [rbp-C8h]
  _KPROCESS *Process; // [rsp+C8h] [rbp-C0h]
  __int64 v54; // [rsp+D0h] [rbp-B8h]
  _QWORD *v55; // [rsp+D8h] [rbp-B0h]
  ULONG_PTR v56; // [rsp+E0h] [rbp-A8h]
  _KPROCESS *v57; // [rsp+E8h] [rbp-A0h]
  PVOID P; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+F8h] [rbp-90h]

  v43 = a3;
  v52 = a1;
  v54 = a1;
  v56 = a2;
  v51 = a3;
  v34 = 0;
  v6 = 6;
  v45 = 0;
  v37 = 0;
  CurrentThread = 0LL;
  v49 = 0LL;
  if ( (a4 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 136) )
  {
    dword_1402FE4B8 = 22;
    return 3221225595LL;
  }
  if ( (a4 & 5) != 0 )
    v6 = 7;
  v38 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v57 = Process;
  while ( 1 )
  {
    v44 = v6;
    v40 = v6;
    if ( (v6 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v49 = CurrentThread;
      v37 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
          goto LABEL_77;
        v38 = 1;
      }
      MiPrefetchControlArea(a2, (_DWORD)CLFS_LSN_NULL_EXT, 0, 1, 0, -1);
    }
    PerSessionProtos = MiMapImageInSystemSpace(a2, v6, (__int64)&P);
    if ( PerSessionProtos < 0 )
    {
      if ( v38 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( (v6 & 1) != 0 )
LABEL_77:
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v37);
      return (unsigned int)PerSessionProtos;
    }
    v9 = v59;
    v35 = v59;
    v48 = P;
    v10 = *(_QWORD **)(a2 + 96);
    v47 = v10;
    v55 = v10;
    v11 = v10[1];
    v50 = v11;
    v12 = v11;
    v32 = v11;
    if ( v11 )
    {
      if ( (v11 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v13 = 1;
        v36 = 1;
        v29 = v11 & 3;
      }
      else
      {
        v30 = v11 & 3;
        if ( (v11 & 3) != 0 )
        {
          v13 = (v30 != 1) + 2;
          v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v13 = v30 + 4;
        }
        v36 = v13;
        v29 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v32 = v29;
    }
    else
    {
      v13 = 0;
      v36 = 0;
    }
    v14 = P;
    v33[0] = 1;
    if ( *v10 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v59 << 12, 0x68496D4Du);
      v14 = PoolWithTag;
      BugCheckParameter3 = (ULONG_PTR)PoolWithTag;
      if ( !PoolWithTag )
      {
        PerSessionProtos = -1073741670;
        goto LABEL_14;
      }
      v39 = 0;
      v24 = (__int64)PoolWithTag;
      v41 = (ULONG_PTR)PoolWithTag;
      v25 = 0;
      v9 = v35;
      while ( 1 )
      {
        v42 = v25;
        if ( v25 >= v9 )
          break;
        KeCopyPage(v24, (__int64)v48 + 4096 * v25);
        v9 = v35;
        ++v25;
        v24 = v41 + 4096;
        v41 += 4096LL;
      }
      v50 = **(_QWORD **)(a2 + 96);
      v39 = 0;
      if ( v9 )
      {
        v26 = BugCheckParameter3;
        v41 = BugCheckParameter3;
        v27 = v39;
        do
        {
          MiPerformFixups(v26, a2, 0LL, 0);
          ++v27;
          v26 = v41 + 4096;
          v41 += 4096LL;
          v9 = v35;
        }
        while ( v27 < v35 );
      }
      v14 = (PVOID)BugCheckParameter3;
    }
    PerSessionProtos = SeValidateImageHeader(
                         v52,
                         (_DWORD)v14,
                         v9 << 12,
                         (_DWORD)Process,
                         a4,
                         (__int64)&v32,
                         a5,
                         (__int64)v33,
                         (__int64)&v45);
    if ( PerSessionProtos == 301 )
    {
      MiImageCantMove(a2);
      v34 = 1;
LABEL_84:
      MiStrongCodeImage(a2, 1u);
      goto LABEL_14;
    }
    v15 = v34;
    if ( PerSessionProtos == 302 )
      v15 = 1;
    v34 = v15;
    if ( v15 )
      goto LABEL_84;
LABEL_14:
    if ( v14 != v48 && v14 )
      ExFreePoolWithTag(v14, 0);
    MiUnmapImageInSystemSpace((__int64)&P);
    if ( v38 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v17 = v40;
    if ( (v40 & 1) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 )
      {
        ++dword_1402FE710;
        HvlFlushTbAllPartitions(v16);
        KeFlushTb(3u, 2u);
      }
      PsRevertToUserPagePriorityThread((__int64)v49, v37);
    }
    if ( PerSessionProtos >= 0 )
      break;
    if ( PerSessionProtos != -1073741789 || v35 == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    {
      dword_1402FE4B8 = 4;
      return (unsigned int)PerSessionProtos;
    }
    v6 = v17 | 1;
    CurrentThread = v49;
  }
  if ( !v13 || v13 == 1 && (v32 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v32 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v13 )
        v18 = v32 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v18 = v32 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v18 = v32 & 7 | 8;
    }
    v32 = v18;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v18 |= 4uLL;
      v32 = v18;
    }
    v19 = v47;
    while ( 1 )
    {
      v21 = _InterlockedCompareExchange64(v19 + 1, v18, v11);
      v20 = v11 == v21;
      v11 = v21;
      if ( v20 )
        break;
      if ( (v32 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_71;
      if ( (v21 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v32 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v32);
LABEL_71:
        v32 = v11;
        break;
      }
      v18 = v32 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v32 = v18;
    }
    v11 = v32;
  }
  else
  {
    v31 = v13 - 2;
    v19 = v47;
    if ( v31 <= 1 )
      v32 = ((unsigned __int8)v11 ^ (unsigned __int8)v32) & 3 ^ (unsigned __int64)v32;
  }
  if ( (v32 & 3) == 0 )
  {
LABEL_28:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v33[0]) | v45 & 7));
    if ( v34 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)PerSessionProtos;
  }
  if ( (MiFlags & 0x100000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC000000) != 0
    && *v19
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_1402FE4B8 = 60;
  }
  else
  {
    result = MiValidateImagePages((__int64 *)a2, 0, 1, v43);
    PerSessionProtos = result;
    if ( (int)result >= 0 )
    {
      v28 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
      v32 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v28 |= 4uLL;
        v32 = v28;
      }
      _InterlockedCompareExchange64(v19 + 1, v28, v11);
      goto LABEL_28;
    }
    dword_1402FE4B8 = 59;
  }
  return result;
}
