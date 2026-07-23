/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1404334E0
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CmpKeyFullNameLength @ 0x140092170 (CmpKeyFullNameLength.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpFindKcbInHashEntryByName @ 0x140435B44 (CmpFindKcbInHashEntryByName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140435CE0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x140435E50 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404362E0 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpEtwDumpKcb @ 0x1405FB9D4 (CmpEtwDumpKcb.c)
 *     CmpTryToLockKcbExclusive @ 0x140603DE8 (CmpTryToLockKcbExclusive.c)
 *     CmpCreateLayerLink @ 0x14060BB68 (CmpCreateLayerLink.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, __int64 a3, void *a4, char a5, unsigned __int16 *a6, ...)
{
  PVOID v7; // r15
  __int64 v10; // r8
  unsigned __int16 *v11; // rbp
  __int64 KcbInHashEntryByName; // rax
  void *v13; // rbx
  __int64 KeyControlBlock; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  int v17; // eax
  _DWORD *v18; // r12
  __int64 NameControlBlock; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  int v22; // eax
  bool v23; // zf
  unsigned __int64 v24; // rax
  int v25; // r12d
  __int64 v26; // r15
  signed __int64 *v27; // r14
  __int64 v28; // rbp
  char v29; // bp
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  signed __int64 v32; // rtt
  unsigned __int64 v33; // rdx
  int LayerLink; // ebp
  void *v36; // rcx
  void *v37; // rcx
  _BYTE v38[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]
  __int64 v41; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  __int64 v43; // [rsp+A8h] [rbp+40h]
  __int64 *v44; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v41 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, __int64 *);
  P = a4;
  v7 = a4;
  HvpGetCellContextReinitialize((__int64)v38);
  if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread() )
    return 3221225524LL;
  v11 = a6;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(a1, (unsigned int)v43, v10, a6);
  v13 = (void *)KcbInHashEntryByName;
  if ( KcbInHashEntryByName )
  {
    CmpLockKcbExclusive(KcbInHashEntryByName);
    if ( (unsigned __int8)CmpReferenceKeyControlBlock(v13) )
    {
      CmpUnlockKcb(v13);
      *v44 = (__int64)v13;
      return 0LL;
    }
    CmpUnlockKcb(v13);
    return 3221225626LL;
  }
  if ( *v11 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    return 3221225485LL;
  KeyControlBlock = CmpAllocateKeyControlBlock();
  v15 = KeyControlBlock;
  if ( !KeyControlBlock )
    return 3221225626LL;
  v16 = (_QWORD *)(KeyControlBlock + 112);
  v16[1] = v16;
  *v16 = v16;
  *(_QWORD *)(v15 + 128) = 0LL;
  *(_QWORD *)(v15 + 136) = 0LL;
  *(_QWORD *)(v15 + 144) = 0LL;
  *(_QWORD *)(v15 + 152) = 0LL;
  if ( a3 )
    v17 = (*(_DWORD *)(a3 + 4) >> 20) & 1;
  else
    v17 = (unsigned __int8)CmpLockTablePresent;
  *(_DWORD *)v15 = 1;
  v18 = (_DWORD *)(v15 + 8);
  *(_QWORD *)(v15 + 24) = a1;
  *(_DWORD *)(v15 + 32) = a2;
  *(_DWORD *)(v15 + 4) ^= (*(_DWORD *)(v15 + 4) ^ (v17 << 20)) & 0x100000;
  *(_DWORD *)(v15 + 8) = v43;
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 208) = v15 + 200;
  *(_QWORD *)(v15 + 200) = v15 + 200;
  *(_QWORD *)(v15 + 224) = v15 + 216;
  *(_QWORD *)(v15 + 216) = v15 + 216;
  *(_QWORD *)(v15 + 232) = 0LL;
  *(_DWORD *)(v15 + 240) = 0;
  *(_QWORD *)(v15 + 248) = 0LL;
  *(_DWORD *)(v15 + 256) = 0;
  *(_QWORD *)(v15 + 264) = 0LL;
  *(_DWORD *)(v15 + 272) = 0;
  *(_DWORD *)(v15 + 276) = -1;
  *(_QWORD *)(v15 + 280) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v11, (__int64 *)va, 0LL);
  *(_QWORD *)(v15 + 72) = NameControlBlock;
  if ( !NameControlBlock )
  {
    LayerLink = -1073741670;
    goto LABEL_65;
  }
  v20 = *(unsigned int *)(v15 + 32);
  if ( (_DWORD)v20 != -1 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v15 + 24) + 8LL))(
            *(_QWORD *)(v15 + 24),
            v20,
            v38);
    if ( (*(_BYTE *)(v21 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v38);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v15 + 24) + 2848LL), 1u);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v15 + 24) + 8LL))(
              *(_QWORD *)(v15 + 24),
              *(unsigned int *)(v15 + 32),
              v38);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v15 + 24), v21, *(_DWORD *)(v15 + 32));
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v15 + 24) + 2848LL));
    }
    *(_BYTE *)(v15 + 57) = *(_BYTE *)(v21 + 13) & 3;
    v22 = *(_DWORD *)(v21 + 36);
    *(_QWORD *)(v15 + 96) = *(unsigned int *)(v21 + 40);
    *(_DWORD *)(v15 + 88) = v22;
    *(_WORD *)(v15 + 178) = *(_WORD *)(v21 + 2);
    *(_DWORD *)(v15 + 104) = *(_DWORD *)(v21 + 20) + *(_DWORD *)(v21 + 24);
    *(_QWORD *)(v15 + 160) = *(_QWORD *)(v21 + 4);
    *(_WORD *)(v15 + 168) = *(_WORD *)(v21 + 52);
    *(_WORD *)(v15 + 170) = *(_WORD *)(v21 + 60);
    *(_DWORD *)(v15 + 172) = *(_DWORD *)(v21 + 64);
    *(_DWORD *)(v15 + 176) ^= (*(_DWORD *)(v15 + 176) ^ *(unsigned __int16 *)(v21 + 54)) & 0xF;
    v23 = (*(_DWORD *)(v15 + 4) & 0x100000) == 0;
    *(_DWORD *)(v15 + 176) ^= ((unsigned __int8)*(_DWORD *)(v15 + 176) ^ (unsigned __int8)*(_WORD *)(v21 + 54)) & 0xF0;
    *(_BYTE *)(v15 + 177) = *(_BYTE *)(v21 + 55);
    if ( !v23 )
      *(_DWORD *)(v15 + 60) = CmpLockTableAdd(v15, 1);
    v24 = KeAbPreAcquire(v15 + 40, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 40), 0LL) )
    {
      if ( v24 )
        KeAbPostReleaseEx(v15 + 40, v24);
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      *(_QWORD *)(v15 + 48) = KeGetCurrentThread();
    }
    v25 = *(_DWORD *)(v21 + 44);
    if ( v25 == -1 )
    {
      *(_QWORD *)(v15 + 80) = 0LL;
      goto LABEL_30;
    }
    v26 = *(_QWORD *)(v15 + 24);
    v27 = (signed __int64 *)(v26 + 2952);
    v28 = KeAbPreAcquire(v26 + 2952, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 2952), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v26 + 2952), v28, v26 + 2952);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    if ( CmpFindSecurityCellCacheIndex(v26, v25, &v39) )
    {
      v29 = 1;
      *(_QWORD *)(v15 + 80) = *(_QWORD *)(*(_QWORD *)(v26 + 3056) + 16LL * v39 + 8);
    }
    else
    {
      *(_QWORD *)(v15 + 80) = 0LL;
      v29 = 0;
    }
    _m_prefetchw(v27);
    v30 = *v27;
    if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v31 = v30 - 16;
    else
      v31 = 0LL;
    if ( (v30 & 2) != 0 || (v32 = *v27, v32 != _InterlockedCompareExchange64(v27, v31, v30)) )
      ExfReleasePushLock((_QWORD *)(v26 + 2952));
    KeAbPostRelease(v26 + 2952);
    if ( v29 )
    {
      v7 = P;
LABEL_30:
      CmpUnlockKcb((PVOID)v15);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v38);
      v18 = (_DWORD *)(v15 + 8);
      goto LABEL_31;
    }
    CmpUnlockKcb((PVOID)v15);
    LayerLink = -1073741670;
    (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v38);
LABEL_65:
    v36 = *(void **)(v15 + 72);
    if ( v36 )
      CmpDereferenceNameControlBlockWithLock(v36);
    if ( *(_QWORD *)(v15 + 64) )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3);
    v37 = *(void **)(v15 + 184);
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    *(_DWORD *)(v15 + 4) |= 0x80000u;
    CmpFreeKeyControlBlock((PVOID)v15);
    return (unsigned int)LayerLink;
  }
  if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
    *(_BYTE *)(v15 + 57) = 1;
  if ( (a5 & 1) != 0 )
    *(_WORD *)(v15 + 178) |= 4u;
LABEL_31:
  if ( !a3 )
  {
    *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 4) & 0x801FFFFF | 0x200000;
    goto LABEL_35;
  }
  if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3) )
  {
    LayerLink = -1073741670;
    goto LABEL_65;
  }
  v23 = (*(_BYTE *)(v15 + 178) & 4) == 0;
  *(_QWORD *)(v15 + 64) = a3;
  if ( v23 )
    *(_DWORD *)(v15 + 4) ^= (*(_DWORD *)(v15 + 4) ^ ((*(_DWORD *)(a3 + 4) & 0xFFE00000) + 0x200000)) & 0x7FE00000;
  else
    *(_DWORD *)(v15 + 4) ^= (*(_DWORD *)(v15 + 4) ^ *(_DWORD *)(a3 + 4)) & 0x7FE00000;
LABEL_35:
  if ( v7 )
  {
    CmpLockKcbExclusive((__int64)v7);
    CmpTryToLockKcbExclusive(v15);
    LayerLink = CmpCreateLayerLink(v7, v15);
    CmpUnlockKcb((PVOID)v15);
    CmpUnlockKcb(v7);
    if ( LayerLink < 0 )
      goto LABEL_65;
  }
  v33 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 2800LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v15 + 24) + 2808LL) - 1) & ((unsigned int)(101027 * (*v18 ^ (*v18 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v18 ^ (*v18 >> 9))) >> 9)));
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v33 + 16);
  *(_QWORD *)(v33 + 16) = v18;
  if ( *(_BYTE *)(a1 + 4112) == 1 )
    *(_WORD *)(v15 + 4) |= 0x20u;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v33) = 22;
    CmpEtwDumpKcb(v15, v33);
  }
  *v44 = v15;
  return 0LL;
}
