/*
 * XREFs of MiValidateSectionCreate @ 0x140509DEC
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     PsSetSystemPagePriorityThread @ 0x1400FAE60 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400FBC40 (PsRevertToUserPagePriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140162380 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     MiImageCantMove @ 0x1401F6D34 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1401F6FC0 (MiStrongCodeImage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MiPerformFixups @ 0x140509BC0 (MiPerformFixups.c)
 *     SeValidateImageHeader @ 0x14050A5A4 (SeValidateImageHeader.c)
 *     MiRelocateAmount @ 0x14050A68C (MiRelocateAmount.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x14050A940 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140661760 (MiCaptureSecureImageBaseAddress.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiValidateSectionCreate(ULONG_PTR a1, __int64 *a2, unsigned int a3, ULONG_PTR a4, int a5, char a6)
{
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // r13
  __int64 result; // rax
  ULONG_PTR v10; // r15
  unsigned int v11; // r10d
  _QWORD *v12; // rdx
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // r13d
  unsigned __int64 v16; // rax
  void *v17; // r12
  __int64 v18; // rax
  char *PoolWithTag; // rax
  __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // r12d
  __int64 v23; // rax
  ULONG_PTR v24; // rcx
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r12d
  unsigned int v32; // eax
  _QWORD *v33; // r13
  signed __int64 v34; // rcx
  bool i; // zf
  signed __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  char v39[8]; // [rsp+50h] [rbp-168h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-160h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-158h]
  int v42; // [rsp+64h] [rbp-154h]
  int v43; // [rsp+68h] [rbp-150h]
  int v44; // [rsp+6Ch] [rbp-14Ch]
  int v45; // [rsp+70h] [rbp-148h]
  unsigned int v46; // [rsp+74h] [rbp-144h]
  unsigned int v47; // [rsp+78h] [rbp-140h]
  unsigned int v48; // [rsp+7Ch] [rbp-13Ch]
  unsigned int v49; // [rsp+80h] [rbp-138h]
  int v50; // [rsp+84h] [rbp-134h] BYREF
  __int64 v51; // [rsp+88h] [rbp-130h]
  ULONG_PTR v52; // [rsp+90h] [rbp-128h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-120h]
  _QWORD *v54; // [rsp+A0h] [rbp-118h]
  int v55; // [rsp+A8h] [rbp-110h]
  unsigned int v56; // [rsp+B0h] [rbp-108h]
  char *v57; // [rsp+B8h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-F8h]
  void *v59; // [rsp+C8h] [rbp-F0h]
  struct _KTHREAD *v60; // [rsp+D0h] [rbp-E8h]
  ULONG_PTR v61; // [rsp+D8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+E0h] [rbp-D8h]
  _KPROCESS *v63; // [rsp+E8h] [rbp-D0h]
  _QWORD *v64; // [rsp+F0h] [rbp-C8h]
  signed __int64 v65; // [rsp+F8h] [rbp-C0h]
  ULONG_PTR v66; // [rsp+100h] [rbp-B8h]
  __int64 *v67; // [rsp+108h] [rbp-B0h]
  ULONG_PTR v68; // [rsp+110h] [rbp-A8h]
  void *v69; // [rsp+120h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+128h] [rbp-90h]

  v61 = a4;
  v49 = a3;
  BugCheckParameter2 = a1;
  v66 = a1;
  v67 = a2;
  v56 = a3;
  v68 = a4;
  v42 = 0;
  v7 = 6;
  v50 = 0;
  v44 = 0;
  CurrentThread = 0LL;
  v60 = 0LL;
  if ( (a2[7] & 0x800) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
    a5 |= 0x40u;
  if ( (a5 & 0x40000000) != 0 && !a2[18] )
  {
    dword_1403267C0 = 22;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
    v7 = 7;
  v45 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v63 = Process;
  while ( 1 )
  {
    v48 = v7;
    v46 = v7;
    if ( (v7 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v60 = CurrentThread;
      v44 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      if ( (a2[7] & 0x4000000) != 0 )
      {
        LODWORD(v10) = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( (v10 & 0x80000000) != 0LL )
          goto LABEL_13;
        v45 = 1;
      }
      MiPrefetchControlArea((_DWORD)a2, (_DWORD)CLFS_LSN_NULL_EXT, 0, 1, 0, -1);
    }
    LODWORD(v10) = MiMapImageInSystemSpace((__int64)a2, v7, (__int64)&v69);
    if ( (v10 & 0x80000000) != 0LL )
      break;
    v11 = v70;
    v41 = v70;
    v59 = v69;
    v12 = (_QWORD *)a2[12];
    v54 = v12;
    v64 = v12;
    v13 = v12[1];
    v65 = v13;
    v14 = v13;
    v40 = v13;
    if ( v13 )
    {
      if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v15 = 1;
        v43 = 1;
        v16 = v13 & 3;
      }
      else
      {
        if ( (v13 & 3) != 0 )
        {
          v15 = ((v13 & 3) != 1) + 2;
          v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v15 = 4;
        }
        v43 = v15;
        v16 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v40 = v16;
    }
    else
    {
      v15 = 0;
      v43 = 0;
    }
    v17 = v69;
    v39[0] = 1;
    v18 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    if ( *v12 )
    {
      v18 = MiRelocateAmount(a2, 1LL);
      v51 = v18;
      v52 = v18;
    }
    if ( v18 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11 << 12, 0x68496D4Du);
      v17 = PoolWithTag;
      BugCheckParameter3 = (ULONG_PTR)PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v10) = -1073741670;
        goto LABEL_50;
      }
      v55 = 0;
      v20 = (__int64)PoolWithTag;
      v57 = PoolWithTag;
      v21 = 0;
      v11 = v41;
      while ( 1 )
      {
        v47 = v21;
        if ( v21 >= v11 )
          break;
        KeCopyPage(v20, (__int64)v59 + 4096 * v21);
        v11 = v41;
        ++v21;
        v20 = (__int64)(v57 + 4096);
        v57 += 4096;
      }
      v22 = 0;
      if ( v11 )
      {
        v23 = -v51;
        v51 = -v51;
        v24 = BugCheckParameter3;
        v52 = BugCheckParameter3;
        do
        {
          MiPerformFixups(v24, (ULONG_PTR)a2, v22++, v23, 0LL, 0);
          v24 = v52 + 4096;
          v52 += 4096LL;
          v11 = v41;
          v23 = v51;
        }
        while ( v22 < v41 );
      }
      v17 = (void *)BugCheckParameter3;
    }
    v25 = SeValidateImageHeader(
            BugCheckParameter2,
            (_DWORD)v17,
            v11 << 12,
            (_DWORD)Process,
            v61,
            a5,
            (__int64)&v40,
            a6,
            (__int64)v39,
            (__int64)&v50);
    v10 = v25;
    if ( v25 == 301 )
    {
      MiImageCantMove((__int64)a2);
      v42 = 1;
LABEL_47:
      if ( (a2[7] & 0x40000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v10, 0LL);
      MiStrongCodeImage((__int64)a2, 1u);
      goto LABEL_50;
    }
    v26 = v42;
    if ( v25 == 302 )
      v26 = 1;
    v42 = v26;
    if ( v26 )
      goto LABEL_47;
LABEL_50:
    if ( v17 != v59 && v17 )
      ExFreePoolWithTag(v17, 0);
    MiUnmapImageInSystemSpace((__int64)&v69);
    if ( v45 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v31 = v46;
    if ( (v46 & 1) != 0 )
    {
      if ( (MiFlags & 0x10000) != 0 )
        MiFlushEntireTbDueToAttributeChange(v28, v27, v29, v30);
      PsRevertToUserPagePriorityThread((__int64)v60, v44);
    }
    if ( (v10 & 0x80000000) == 0LL )
    {
      if ( !v15 || v15 == 1 && (v40 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      {
        if ( (v40 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        {
          if ( v15 )
            v34 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 2;
          else
            v34 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 1;
        }
        else
        {
          v34 = v40 & 7 | 8;
        }
        v40 = v34;
        if ( *(char *)(*(_QWORD *)(*a2 + 56) + 46LL) < 0 )
        {
          v34 |= 4uLL;
          v40 = v34;
        }
        v33 = v54;
        v36 = _InterlockedCompareExchange64(v54 + 1, v34, v13);
        for ( i = v13 == v36; ; i = v36 == v37 )
        {
          v37 = v36;
          if ( i )
            break;
          if ( (v40 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
            goto LABEL_83;
          if ( (v36 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
          {
            v40 &= 0xFFFFFFFFFFFFFFF8uLL;
            SeReleaseImageValidationContext(v40);
LABEL_83:
            v40 = v37;
            break;
          }
          v40 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 2;
          v36 = _InterlockedCompareExchange64(v33 + 1, v40, v36);
        }
        v13 = v40;
      }
      else
      {
        v32 = v15 - 2;
        v33 = v54;
        if ( v32 <= 1 )
          v40 ^= ((unsigned __int8)v13 ^ (unsigned __int8)v40) & 3;
      }
      if ( (v40 & 3) != 0 )
      {
        if ( (MiFlags & 0x80000) != 0 && (*((_DWORD *)a2 + 23) & 0xC000000) != 0 )
        {
          if ( *v33 )
          {
            result = MiCaptureSecureImageBaseAddress(a2);
            if ( (int)result < 0 )
            {
              dword_1403267C0 = 60;
              return result;
            }
          }
        }
        result = MiWalkEntireImage(a2, 0LL, 1, v49);
        LODWORD(v10) = result;
        if ( (int)result < 0 )
        {
          dword_1403267C0 = 59;
          return result;
        }
        v38 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
        v40 &= 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(char *)(*(_QWORD *)(*a2 + 56) + 46LL) < 0 )
        {
          v38 |= 4uLL;
          v40 = v38;
        }
        _InterlockedCompareExchange64(v33 + 1, v38, v13);
      }
      *(_BYTE *)(*a2 + 15) = *(_BYTE *)(*a2 + 15) & 1 | (2 * ((8 * v39[0]) | v50 & 7));
      if ( v42 )
        MiStrongCodeImage((__int64)a2, 2u);
      return (unsigned int)v10;
    }
    if ( (_DWORD)v10 != -1073741789 || v41 == *(_DWORD *)(*a2 + 8) )
    {
      dword_1403267C0 = 4;
      return (unsigned int)v10;
    }
    v7 = v31 | 1;
    CurrentThread = v60;
  }
  if ( v45 == 1 )
    MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
  if ( (v7 & 1) != 0 )
LABEL_13:
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v44);
  return (unsigned int)v10;
}
