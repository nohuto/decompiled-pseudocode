/*
 * XREFs of MiFillPerSessionProtos @ 0x14062C154
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x1401C32B8 (KeCopyPrivilegedPage.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeProtoPfn @ 0x1401E3058 (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v10; // esi
  unsigned __int16 v14; // cx
  __int64 v15; // r13
  __int16 v16; // dx
  _WORD *v17; // rax
  unsigned int v18; // r15d
  __int64 DriverPage; // rdi
  int v20; // r9d
  NTSTATUS v21; // eax
  __int16 v22; // [rsp+30h] [rbp-68h]
  __int64 PteFromCopyList; // [rsp+38h] [rbp-60h]
  _WORD *v24; // [rsp+40h] [rbp-58h]
  _WORD *v25; // [rsp+48h] [rbp-50h] BYREF
  __int16 v26; // [rsp+50h] [rbp-48h]
  unsigned __int16 v27; // [rsp+52h] [rbp-46h]
  unsigned int v28; // [rsp+58h] [rbp-40h] BYREF
  int v29; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int16 v31; // [rsp+D8h] [rbp+40h]

  v10 = a4;
  if ( a8 )
  {
    v29 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (unsigned __int64)&v28);
    if ( !v29 )
      return 3221225626LL;
    MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v25);
  }
  if ( v10 )
  {
    v14 = v27;
    v15 = a2 - (_QWORD)a3;
    v16 = v26;
    v17 = v25;
    v31 = v27;
    v22 = v26;
    v24 = v25;
    while ( 1 )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage();
      }
      else
      {
        v18 = v14 | (unsigned __int16)(v16 & ++*v17);
        while ( 1 )
        {
          DriverPage = MiGetPage((__int64)MiSystemPartition, v18, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage((__int64)MiSystemPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (__int64 *)((char *)a3 + v15), a5, v20);
      if ( a8 )
      {
        v21 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0);
        if ( v21 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
        MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
      }
      else
      {
        MiCopyPage(DriverPage, *a3, &v28, 8u);
        PteFromCopyList = (__int64)MiGetPteFromCopyList(&v28, DriverPage, -1LL);
        MiRelocateImagePfn(a1, PteFromCopyList << 25 >> 16, a6, DriverPage, a7);
        *(_QWORD *)PteFromCopyList = 0LL;
        if ( MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(PteFromCopyList, 0LL);
        MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
      }
      ++a3;
      ++a6;
      --v10;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)a9 += 4096LL;
      }
      if ( !v10 )
        break;
      v17 = v24;
      v14 = v31;
      v16 = v22;
    }
  }
  MiReleasePteCopyList((__int64)&v28);
  return 0LL;
}
