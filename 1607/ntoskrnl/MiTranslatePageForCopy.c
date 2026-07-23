/*
 * XREFs of MiTranslatePageForCopy @ 0x1401E4A80
 * Callers:
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        char **a2,
        __int64 *a3,
        __int64 *a4,
        KIRQL *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  __int64 v8; // r14
  __int64 v10; // r8
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  char *AnyMultiplexedVm; // r15
  LONG *v15; // rbx
  KIRQL v16; // r12
  __int64 *v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR *SharedWorkingSetList; // rcx
  __int64 v20; // r8
  bool v21; // zf
  LONG *SharedVm; // rbx
  __int64 v23; // rax
  KIRQL v24; // al
  int v25; // r9d
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  LONG *v28; // rdi
  int v29; // edi
  ULONG_PTR v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  char v35; // al
  __int64 v36; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  unsigned __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  unsigned __int8 v47; // dl
  char v48; // al
  int PagingFileOffset; // eax
  unsigned __int8 v50; // [rsp+40h] [rbp-89h] BYREF
  KIRQL OldIrql[3]; // [rsp+41h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+44h] [rbp-85h]
  int v53; // [rsp+48h] [rbp-81h] BYREF
  __int64 v54; // [rsp+50h] [rbp-79h]
  __int64 v55; // [rsp+58h] [rbp-71h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-69h]
  __int64 *v57; // [rsp+68h] [rbp-61h]
  int v58; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 *v59; // [rsp+78h] [rbp-51h]
  char **v60; // [rsp+80h] [rbp-49h]
  KIRQL *v61; // [rsp+88h] [rbp-41h]
  __int64 *v62; // [rsp+90h] [rbp-39h]
  __int64 v63; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v64[4]; // [rsp+A0h] [rbp-29h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v8 = -1LL;
  v57 = a4;
  v62 = a3;
  v60 = a2;
  *a5 = 17;
  *a3 = -1LL;
  *a4 = 0LL;
  *a6 = 0LL;
  v61 = a5;
  v59 = a6;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 3221225711LL;
  v10 = 4LL;
  v11 = v64;
  LODWORD(BugCheckParameter2) = 4;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    *v11 = v12;
    v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v11;
    --v10;
  }
  while ( v10 );
  v13 = 0;
  v54 = -1LL;
  v52 = 0;
  if ( a1 < qword_140327FD0 || a1 > qword_140326D38 )
  {
    v16 = 17;
    v17 = (__int64 *)&unk_140326DF8;
    OldIrql[0] = 17;
    while ( 1 )
    {
      AnyMultiplexedVm = (char *)*v17;
      SharedWorkingSetList = MiGetSharedWorkingSetList(*v17);
      if ( a1 >= (v20 & SharedWorkingSetList[10]) && a1 < (v20 & (SharedWorkingSetList[9] + 4095)) )
        break;
      ++v13;
      v17 = (__int64 *)(v18 + 8);
      v21 = v13 == 3;
      if ( v13 >= 3 )
        goto LABEL_15;
    }
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v16 = ExAcquireSpinLockExclusive(SharedVm);
    OldIrql[0] = v16;
    v21 = v13 == 3;
    SharedVm[1] = 0;
LABEL_15:
    if ( v21 )
    {
      v23 = MiAcquireProperVm(a1, OldIrql);
      v16 = OldIrql[0];
      AnyMultiplexedVm = (char *)v23;
    }
    if ( !AnyMultiplexedVm )
      return 3221225632LL;
    v13 = 0;
  }
  else
  {
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    v15 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v16 = ExAcquireSpinLockExclusive(v15);
    v15[1] = 0;
  }
  v24 = ExAcquireSpinLockShared(&dword_140326D78);
  v25 = BugCheckParameter2;
  OldIrql[0] = v24;
  while ( 1 )
  {
    BugCheckParameter2 = v64[v25 - 1];
    v26 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v55 = v26;
    if ( (v26 & 1) == 0 )
      break;
    if ( v25 )
    {
      if ( (v26 & 0x80u) != 0LL )
      {
        v54 = MiVaToPfn(a1);
        v25 = 0;
      }
      if ( v25 )
        continue;
    }
    goto LABEL_30;
  }
  if ( v25 )
    v13 = -1073741819;
  v52 = v13;
LABEL_30:
  ExReleaseSpinLockShared(&dword_140326D78, OldIrql[0]);
  if ( v54 == -1 )
  {
    if ( AnyMultiplexedVm != (char *)1 )
      goto LABEL_35;
    return 3221225632LL;
  }
  if ( AnyMultiplexedVm != (char *)1 )
  {
    v29 = -1073741819;
    goto LABEL_36;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v28 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v16 = ExAcquireSpinLockExclusive(v28);
  v28[1] = 0;
LABEL_35:
  v29 = v52;
LABEL_36:
  if ( v29 < 0 )
  {
    LOBYTE(v27) = v16;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v27);
    return (unsigned int)v29;
  }
  v50 = 17;
  if ( (v26 & 1) == 0 )
  {
    v30 = BugCheckParameter2;
    while ( (v26 & 0x400) == 0 )
    {
      v31 = (v26 >> 5) & 0x1F;
      if ( v31 == 24 || !v31 )
        goto LABEL_62;
      if ( (v26 & 0x800) == 0 )
      {
        if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v55) )
        {
LABEL_55:
          LOBYTE(v27) = v16;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v27);
          AnyMultiplexedVm = 0LL;
          v6 = 273;
          goto LABEL_82;
        }
LABEL_64:
        v6 = -1073741608;
LABEL_81:
        LOBYTE(v27) = v16;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v27);
LABEL_82:
        v16 = 17;
        goto LABEL_83;
      }
      v32 = MiLockTransitionLeafPage(v30, &v50);
      v33 = v32;
      if ( v32 )
      {
        v35 = *(_BYTE *)(v32 + 34);
        if ( (v35 & 0x20) == 0 )
        {
          v8 = (v33 + 0x58000000000LL) / 48;
          goto LABEL_83;
        }
        if ( (v35 & 8) != 0 )
          goto LABEL_64;
        v36 = 0LL;
LABEL_77:
        v53 = 1;
        MiWaitForCollidedFaultComplete(v33, v36, a1, (__int64)AnyMultiplexedVm, v16, v50, &v53);
        goto LABEL_64;
      }
      v55 = MI_READ_PTE_LOCK_FREE(v30);
      v26 = v55;
      if ( (v55 & 1) != 0 )
        goto LABEL_46;
    }
    if ( (v26 & 2) != 0 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v26);
      LOBYTE(v38) = v16;
      v39 = PrototypePteDirect;
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v38);
      if ( !v39 )
        v26 &= ~0x400uLL;
      AnyMultiplexedVm = 0LL;
      v6 = 273;
      *v59 = v26 & 0xFFFFFFFFFFFFFFFDuLL;
      goto LABEL_83;
    }
    v54 = MiGetPrototypePteDirect(v26);
    v40 = v54;
    if ( (unsigned int)MiIsPrototypePteVadLookup(v26) )
    {
      v54 = MiCheckVirtualAddress(a1, &v58, &v63);
      v40 = v54;
      if ( !v54 )
      {
LABEL_62:
        v6 = -1073741819;
        goto LABEL_81;
      }
    }
    v41 = MiLockProtoPoolPage(v40, &v50);
    if ( !v41 )
      goto LABEL_64;
    v42 = MiLockLeafPage(v40, 0);
    v43 = MI_READ_PTE_LOCK_FREE(v54);
    v55 = v43;
    if ( (v43 & 1) != 0 )
    {
LABEL_66:
      v8 = (v42 + 0x58000000000LL) / 48;
      *v57 = v41;
      goto LABEL_83;
    }
    if ( !v43 )
    {
      MiUnlockProtoPoolPage(v41, v50);
      goto LABEL_62;
    }
    if ( (v43 & 0x400) != 0 )
    {
      v46 = v41;
    }
    else
    {
      if ( (v43 & 0x800) == 0 )
      {
        PagingFileOffset = MiGetPagingFileOffset((__int64)&v55);
        v47 = v50;
        v46 = v41;
        if ( !PagingFileOffset )
        {
          MiUnlockProtoPoolPage(v41, v50);
          goto LABEL_55;
        }
        goto LABEL_72;
      }
      v48 = *(_BYTE *)(v42 + 34);
      if ( (v48 & 0x20) == 0 )
        goto LABEL_66;
      v46 = v41;
      if ( (v48 & 8) == 0 )
      {
        MiObtainProtoReference(v41, 1LL, v44, v45);
        v36 = v41;
        v33 = v42;
        goto LABEL_77;
      }
    }
    v47 = v50;
LABEL_72:
    MiUnlockProtoPoolPage(v46, v47);
    goto LABEL_64;
  }
LABEL_46:
  v34 = v54;
  if ( v54 == -1 )
    v34 = MI_GET_PAGE_FRAME_FROM_PTE(&v55);
  v8 = v34;
  if ( !MiIsPfnInline(v34) )
  {
    v6 = -1073741503;
    goto LABEL_81;
  }
  MiLockPageAtDpcInline(48 * v8 - 0x58000000000LL);
LABEL_83:
  *v60 = AnyMultiplexedVm;
  *v61 = v16;
  *v62 = v8;
  return v6;
}
