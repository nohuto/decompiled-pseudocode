/*
 * XREFs of MiValidateSectionCreate @ 0x14051B38C
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14002D2DC (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14002D354 (PsRevertToUserPagePriorityThread.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x140186BB0 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiImageCantMove @ 0x14023112C (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140231284 (MiStrongCodeImage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiPerformFixups @ 0x1404B1810 (MiPerformFixups.c)
 *     SeReleaseImageValidationContext @ 0x14051ABE4 (SeReleaseImageValidationContext.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 *     SeValidateImageHeader @ 0x14051B2B0 (SeValidateImageHeader.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 *     SeSetImageBaseAddress @ 0x1406D07CC (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiValidateSectionCreate(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  unsigned int v5; // r12d
  struct _KTHREAD *CurrentThread; // r13
  __int64 result; // rax
  __int64 v8; // r8
  int PerSessionProtos; // r15d
  __int64 v10; // r9
  unsigned int v11; // r8d
  _QWORD *v12; // rdx
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // r13d
  unsigned __int64 v16; // rax
  void *v17; // r12
  char *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  ULONG_PTR v25; // rax
  unsigned int v26; // r12d
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // eax
  _QWORD *v31; // r13
  signed __int64 v32; // rcx
  bool i; // zf
  signed __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+50h] [rbp-138h]
  int v38; // [rsp+5Ch] [rbp-12Ch]
  unsigned int v39; // [rsp+60h] [rbp-128h]
  unsigned int v40; // [rsp+68h] [rbp-120h]
  int v41; // [rsp+6Ch] [rbp-11Ch]
  unsigned int v42; // [rsp+74h] [rbp-114h]
  char *v43; // [rsp+78h] [rbp-110h]
  ULONG_PTR v44; // [rsp+78h] [rbp-110h]
  unsigned int v45; // [rsp+84h] [rbp-104h]
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-F8h]
  _QWORD *v47; // [rsp+98h] [rbp-F0h]
  void *v48; // [rsp+A0h] [rbp-E8h]
  __int64 v49; // [rsp+A8h] [rbp-E0h]
  __int64 v50; // [rsp+B0h] [rbp-D8h]
  _KPROCESS *Process; // [rsp+C8h] [rbp-C0h]
  void *v53; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+F8h] [rbp-90h]
  char v55; // [rsp+1A8h] [rbp+20h]

  v55 = a4;
  v45 = a3;
  v38 = 0;
  v5 = 6;
  v40 = 0;
  CurrentThread = 0LL;
  v49 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 14LL) & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
  {
    a4 |= 0x40u;
    v55 = a4;
  }
  if ( (a4 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 136) )
  {
    dword_14034E980 = 22;
    return 3221225595LL;
  }
  if ( (a4 & 5) != 0 )
    v5 = 7;
  v41 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 1 )
  {
    v42 = v5;
    if ( (v5 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v49 = (__int64)CurrentThread;
      v40 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1, a3);
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
          goto LABEL_13;
        v41 = 1;
      }
      MiPrefetchControlArea(a2, (unsigned __int64)CLFS_LSN_NULL_EXT, 0LL, 1LL, 0, 0xFFFFFFFF);
    }
    PerSessionProtos = MiMapImageInSystemSpace(a2, v5, &v53);
    if ( PerSessionProtos < 0 )
      break;
    v11 = v54;
    v39 = v54;
    v48 = v53;
    v12 = *(_QWORD **)(a2 + 96);
    v47 = v12;
    v13 = v12[1];
    v14 = v13;
    v37 = v13;
    if ( v13 )
    {
      if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v15 = 1;
        v16 = v13 & 3;
      }
      else
      {
        if ( (v13 & 3) != 0 )
        {
          v15 = ((v12[1] & 3LL) != 1) + 2;
          v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v15 = 4;
        }
        v16 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v37 = v16;
    }
    else
    {
      v15 = 0;
    }
    v17 = v53;
    if ( *v12 && (BYTE2(MiFlags) & 3) != 3 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v54 << 12, 0x68496D4Du);
      v17 = PoolWithTag;
      BugCheckParameter3 = (ULONG_PTR)PoolWithTag;
      if ( !PoolWithTag )
      {
        PerSessionProtos = -1073741670;
        goto LABEL_47;
      }
      v22 = (__int64)PoolWithTag;
      v43 = PoolWithTag;
      v23 = 0;
      v11 = v39;
      while ( v23 < v11 )
      {
        KeCopyPage(v22, (__int64)v48 + 4096 * v23);
        v11 = v39;
        ++v23;
        v22 = (__int64)(v43 + 4096);
        v43 += 4096;
      }
      v24 = **(_QWORD **)(a2 + 96);
      v50 = v24;
      if ( v11 )
      {
        v25 = BugCheckParameter3;
        v44 = BugCheckParameter3;
        v26 = 0;
        do
        {
          MiPerformFixups(v25, a2, v26++, -*(_QWORD *)(v24 + 40), 0LL, 0);
          v25 = v44 + 4096;
          v44 += 4096LL;
          v11 = v39;
          v24 = v50;
        }
        while ( v26 < v39 );
      }
      v17 = (void *)BugCheckParameter3;
    }
    PerSessionProtos = SeValidateImageHeader(a1, (__int64)v17, v11 << 12, (__int64)Process, v55);
    if ( PerSessionProtos == 301 )
    {
      MiImageCantMove(a2);
      v38 = 1;
LABEL_46:
      MiStrongCodeImage(a2, 1u);
      goto LABEL_47;
    }
    v27 = v38;
    if ( PerSessionProtos == 302 )
      v27 = 1;
    v38 = v27;
    if ( v27 )
      goto LABEL_46;
LABEL_47:
    if ( v17 != v48 && v17 )
      ExFreePoolWithTag(v17, 0);
    MiUnmapImageInSystemSpace(&v53, v19, v20, v21);
    if ( v41 == 1 )
      MiDereferencePerSessionProtos((_QWORD *)a2, 0xFFFFFFFF, a3, v29);
    if ( (v42 & 1) != 0 )
    {
      if ( (BYTE2(MiFlags) & 3u) > 1 )
      {
        ++dword_14034EBC8;
        HvlFlushTbAllPartitions(v28);
        KeFlushTb(3, 2);
      }
      PsRevertToUserPagePriorityThread(v49, v40, a3);
    }
    if ( PerSessionProtos >= 0 )
    {
      if ( !v15 || v15 == 1 && (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      {
        if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        {
          if ( v15 )
            v32 = v37 & 0xFFFFFFFFFFFFFFFCuLL | 2;
          else
            v32 = v37 & 0xFFFFFFFFFFFFFFFCuLL | 1;
        }
        else
        {
          v32 = v37 & 7 | 8;
        }
        v37 = v32;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
        {
          v32 |= 4uLL;
          v37 = v32;
        }
        v31 = v47;
        v34 = _InterlockedCompareExchange64(v47 + 1, v32, v13);
        for ( i = v13 == v34; ; i = v34 == v35 )
        {
          v35 = v34;
          if ( i )
            break;
          if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
            goto LABEL_80;
          if ( (v34 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
          {
            SeReleaseImageValidationContext((void *)(v37 & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_80:
            v37 = v35;
            break;
          }
          v37 = v37 & 0xFFFFFFFFFFFFFFFCuLL | 2;
          v34 = _InterlockedCompareExchange64(v47 + 1, v37, v34);
        }
        v13 = v37;
      }
      else
      {
        v30 = v15 - 2;
        v31 = v47;
        if ( v30 <= 1 )
          v37 ^= ((unsigned __int8)v13 ^ (unsigned __int8)v37) & 3;
      }
      if ( (BYTE2(MiFlags) & 3) == 3 && (v37 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
        v37 = v37 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      if ( (v37 & 3) != 0 )
      {
        if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(a2 + 92) & 0xC000000) != 0 )
        {
          if ( *v31 )
          {
            result = SeSetImageBaseAddress(v37 & 0xFFFFFFFFFFFFFFF8uLL, *(_QWORD *)(*(_QWORD *)a2 + 32LL));
            if ( (int)result < 0 )
            {
              dword_14034E980 = 60;
              return result;
            }
          }
        }
        result = MiValidateImagePages((__int64 *)a2, 0, 1, v45);
        PerSessionProtos = result;
        if ( (int)result < 0 )
        {
          dword_14034E980 = 59;
          return result;
        }
        v36 = v37 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
          v36 = v37 & 0xFFFFFFFFFFFFFFF8uLL | 4;
        _InterlockedCompareExchange64(v31 + 1, v36, v13);
      }
      *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | 0x10;
      if ( v38 )
        MiStrongCodeImage(a2, 2u);
      return (unsigned int)PerSessionProtos;
    }
    if ( PerSessionProtos != -1073741789 || v39 == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    {
      dword_14034E980 = 4;
      return (unsigned int)PerSessionProtos;
    }
    v5 = v42 | 1;
    CurrentThread = (struct _KTHREAD *)v49;
  }
  if ( v41 == 1 )
    MiDereferencePerSessionProtos((_QWORD *)a2, 0xFFFFFFFF, v8, v10);
  if ( (v5 & 1) != 0 )
LABEL_13:
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v40, v8);
  return (unsigned int)PerSessionProtos;
}
