/*
 * XREFs of MiTranslatePageForCopy @ 0x1401D4068
 * Callers:
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 * Callees:
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        volatile LONG **a2,
        unsigned __int64 *a3,
        __int64 *a4,
        KIRQL *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  volatile LONG *v16; // r14
  KIRQL v17; // r15
  __int64 v18; // rbx
  LONG *v19; // rcx
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  bool v22; // zf
  KIRQL v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r13
  __int64 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int8 v40; // dl
  char v41; // al
  int v42; // eax
  unsigned __int8 v43; // [rsp+40h] [rbp-89h] BYREF
  KIRQL OldIrql[7]; // [rsp+41h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-81h] BYREF
  __int64 v46; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-71h]
  __int64 v48; // [rsp+60h] [rbp-69h]
  __int64 *v49; // [rsp+68h] [rbp-61h]
  volatile LONG **v50; // [rsp+70h] [rbp-59h]
  KIRQL *v51; // [rsp+78h] [rbp-51h]
  unsigned __int64 *v52; // [rsp+80h] [rbp-49h]
  int v53; // [rsp+88h] [rbp-41h] BYREF
  unsigned __int64 *v54; // [rsp+90h] [rbp-39h]
  unsigned __int64 v55; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v56[4]; // [rsp+A0h] [rbp-29h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v47 = a1;
  v8 = -1LL;
  v52 = a3;
  v9 = a1;
  v49 = a4;
  v51 = a5;
  v54 = a6;
  *a5 = 17;
  *a3 = -1LL;
  *a4 = 0LL;
  *a6 = 0LL;
  v50 = a2;
  if ( a1 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    return 3221225711LL;
  v11 = v56;
  v12 = 4LL;
  v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v14) = 4;
  do
  {
    *v11++ = v13;
    v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v12;
  }
  while ( v12 );
  v48 = -1LL;
  v15 = 0;
  if ( v9 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
  {
    v17 = 17;
    v19 = &dword_1402FF880;
    OldIrql[0] = 17;
    v20 = 0;
    while ( 1 )
    {
      v21 = *((_QWORD *)v19 + 23);
      v16 = v19;
      if ( v9 >= v21 && v9 < ((*(_QWORD *)(v21 + 104) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
        break;
      ++v20;
      v19 += 64;
      v22 = v20 == 3;
      if ( v20 >= 3 )
        goto LABEL_20;
    }
    v23 = ExAcquireSpinLockExclusive(v19);
    v9 = v47;
    v17 = v23;
    OldIrql[0] = v23;
    v22 = v20 == 3;
LABEL_20:
    if ( v22 )
    {
      v24 = MiAcquireProperVm(v9, OldIrql);
      v17 = OldIrql[0];
      v16 = (volatile LONG *)v24;
    }
    if ( !v16 )
      return 3221225632LL;
  }
  else
  {
    v16 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    v17 = ExAcquireSpinLockExclusive(v16);
  }
  OldIrql[0] = ExAcquireSpinLockShared(&dword_1402FE9C8);
  while ( 1 )
  {
    v14 = (unsigned int)(v14 - 1);
    BugCheckParameter2 = v56[v14];
    v18 = MI_READ_PTE_LOCK_FREE((__int64 *)BugCheckParameter2);
    v46 = v18;
    if ( (v18 & 1) == 0 )
      break;
    if ( (_DWORD)v14 == 1 )
    {
      if ( (v18 & 0x80u) != 0LL )
      {
        LODWORD(v14) = 0;
        v48 = (v56[0] >> 3) & 0x1FFLL;
        goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( !(_DWORD)v14 )
        goto LABEL_26;
    }
  }
  if ( (_DWORD)v14 )
    v15 = -1073741819;
LABEL_26:
  ExReleaseSpinLockShared(&dword_1402FE9C8, OldIrql[0]);
  v27 = v48;
  if ( v48 == -1 )
  {
    if ( v16 != (volatile LONG *)1 )
    {
      v27 = 0LL;
      goto LABEL_32;
    }
    return 3221225632LL;
  }
  if ( v16 == (volatile LONG *)1 )
  {
    v16 = &dword_1402FFA80;
    v17 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  }
  else
  {
    v15 = -1073741819;
  }
LABEL_32:
  if ( v15 < 0 )
  {
    LOBYTE(v25) = v17;
    MiUnlockWorkingSetExclusive((__int64)v16, v25, v26);
    return (unsigned int)v15;
  }
  v43 = 17;
  if ( (v18 & 1) == 0 )
  {
    v28 = (__int64 *)BugCheckParameter2;
    while ( (v18 & 0x400) == 0 )
    {
      v29 = ((unsigned __int64)v18 >> 5) & 0x1F;
      if ( v29 == 24 || !v29 )
        goto LABEL_56;
      if ( (v18 & 0x800) == 0 )
      {
        if ( !(unsigned int)MI_GET_PAGING_FILE_OFFSET((__int64)&v46) )
        {
LABEL_49:
          LOBYTE(v25) = v17;
          MiUnlockWorkingSetExclusive((__int64)v16, v25, v26);
          v16 = 0LL;
          v6 = 273;
          goto LABEL_76;
        }
LABEL_58:
        v6 = -1073741608;
LABEL_75:
        LOBYTE(v25) = v17;
        MiUnlockWorkingSetExclusive((__int64)v16, v25, v26);
LABEL_76:
        v17 = 17;
        goto LABEL_77;
      }
      v30 = MiLockTransitionLeafPage((ULONG_PTR)v28, &v43);
      v31 = v30;
      if ( v30 )
      {
        v32 = *(_BYTE *)(v30 + 34);
        if ( (v32 & 0x20) == 0 )
        {
          v8 = (v31 + 0x58000000000LL) / 48;
          goto LABEL_77;
        }
        if ( (v32 & 8) != 0 )
          goto LABEL_58;
        v33 = 0LL;
LABEL_71:
        LODWORD(BugCheckParameter2) = 1;
        MiWaitForCollidedFaultComplete(v31, v33, v47, v16, v17, v43, &BugCheckParameter2);
        goto LABEL_58;
      }
      v46 = MI_READ_PTE_LOCK_FREE(v28);
      v18 = v46;
      if ( (v46 & 1) != 0 )
        goto LABEL_42;
    }
    if ( (v18 & 2) != 0 )
    {
      LOBYTE(v25) = v17;
      MiUnlockWorkingSetExclusive((__int64)v16, v25, v26);
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        v18 &= ~0x400uLL;
      v16 = 0LL;
      v6 = 273;
      *v54 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
      goto LABEL_77;
    }
    v34 = v18 >> 16;
    if ( HIDWORD(v18) == 0xFFFFFFFF )
    {
      v34 = MiCheckVirtualAddress(v47, &v53, &v55);
      if ( !v34 )
      {
LABEL_56:
        v6 = -1073741819;
        goto LABEL_75;
      }
    }
    v35 = MiLockProtoPoolPage(v34, &v43);
    if ( !v35 )
      goto LABEL_58;
    v36 = MiLockLeafPage(v34, 0);
    v37 = MI_READ_PTE_LOCK_FREE((__int64 *)v34);
    v46 = v37;
    if ( (v37 & 1) != 0 )
    {
LABEL_60:
      v8 = (v36 + 0x58000000000LL) / 48;
      *v49 = v35;
      goto LABEL_77;
    }
    if ( !v37 )
    {
      MiUnlockProtoPoolPage(v35, v43);
      goto LABEL_56;
    }
    if ( (v37 & 0x400) != 0 )
    {
      v39 = v35;
      goto LABEL_65;
    }
    if ( (v37 & 0x800) != 0 )
    {
      v41 = *(_BYTE *)(v36 + 34);
      if ( (v41 & 0x20) == 0 )
        goto LABEL_60;
      v39 = v35;
      if ( (v41 & 8) == 0 )
      {
        MiObtainProtoReference(v35, 1LL, v38);
        v33 = v35;
        v31 = v36;
        goto LABEL_71;
      }
LABEL_65:
      v40 = v43;
    }
    else
    {
      v42 = MI_GET_PAGING_FILE_OFFSET((__int64)&v46);
      v40 = v43;
      v39 = v35;
      if ( !v42 )
      {
        MiUnlockProtoPoolPage(v35, v43);
        goto LABEL_49;
      }
    }
    MiUnlockProtoPoolPage(v39, v40);
    goto LABEL_58;
  }
LABEL_42:
  v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v46) + v27;
  if ( !MI_IS_PFN(v8) )
  {
    v6 = -1073741503;
    goto LABEL_75;
  }
  MiLockPageAtDpcInline(48 * v8 - 0x58000000000LL, v25, v26);
LABEL_77:
  *v50 = v16;
  *v51 = v17;
  *v52 = v8;
  return v6;
}
