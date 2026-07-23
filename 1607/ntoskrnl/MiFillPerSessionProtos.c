/*
 * XREFs of MiFillPerSessionProtos @ 0x140661F18
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x1401D1E6C (KeCopyPrivilegedPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MiInitializeProtoPfn @ 0x1401F4FAC (MiInitializeProtoPfn.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
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
  int v10; // ebp
  unsigned __int16 v14; // cx
  __int64 v15; // r13
  __int16 v16; // dx
  _WORD *v17; // rax
  unsigned int v18; // r15d
  __int64 DriverPage; // rdi
  int v20; // r9d
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int16 v23; // [rsp+30h] [rbp-68h]
  unsigned __int64 PteFromCopyList; // [rsp+38h] [rbp-60h]
  _WORD *v25; // [rsp+40h] [rbp-58h]
  _WORD *v26; // [rsp+48h] [rbp-50h] BYREF
  __int16 v27; // [rsp+50h] [rbp-48h]
  unsigned __int16 v28; // [rsp+52h] [rbp-46h]
  int v29; // [rsp+58h] [rbp-40h] BYREF
  int v30; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int16 v32; // [rsp+D8h] [rbp+40h]

  v10 = a4;
  if ( a8 )
  {
    v30 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (unsigned __int64)&v29);
    if ( !v30 )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v26);
  }
  if ( v10 )
  {
    v14 = v28;
    v15 = a2 - (_QWORD)a3;
    v16 = v27;
    v17 = v26;
    v32 = v28;
    v23 = v27;
    v25 = v26;
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
      MiInitializeProtoPfn(DriverPage, (unsigned __int64 *)((char *)a3 + v15), a5, v20);
      if ( a8 )
      {
        v21 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0);
        if ( v21 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
        MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
      }
      else
      {
        MiCopyPage(DriverPage, *a3, &v29, 8);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v29, DriverPage, -1LL);
        MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7);
        *(_QWORD *)PteFromCopyList = 0LL;
        if ( MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(v22, 0LL);
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
      v17 = v25;
      v14 = v32;
      v16 = v23;
    }
  }
  MiReleasePteCopyList((__int64)&v29);
  return 0LL;
}
