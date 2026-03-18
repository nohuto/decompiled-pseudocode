/*
 * XREFs of xxxMNStartMenuState @ 0x1C01FD458
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     xxxUnlockMenuState @ 0x1C010B940 (xxxUnlockMenuState.c)
 *     MNAllocPopup @ 0x1C0133454 (MNAllocPopup.c)
 *     MNAllocMenuState @ 0x1C0134728 (MNAllocMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rdi
  struct tagMENUSTATE *v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  char i; // al
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagMENUSTATE *v16; // rbx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagMENUSTATE *v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  if ( *(_QWORD *)(gptiCurrent + 528LL) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v3 + 54) & 8) != 0 )
        break;
      v3 = *(_QWORD *)(v3 + 88);
    }
    while ( (*(_BYTE *)(v3 + 55) & 0xC0) == 0x40 );
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 80LL);
  }
  if ( !v3 || ((*(_BYTE *)(v3 + 55) & 0xC0) == 0x40 || !*(_QWORD *)(v3 + 192)) && (*(_BYTE *)(v3 + 54) & 8) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v5 + 528) )
    return 0LL;
  if ( v5 != gptiCurrent )
  {
    PostTransformableMessage(v3, 274LL, a2, a3, 1);
    return 0LL;
  }
  v6 = MNAllocPopup(0);
  v7 = (__int64)v6;
  if ( !v6 )
    return 0LL;
  v8 = (struct tagMENUSTATE *)MNAllocMenuState(v6);
  if ( !v8 )
  {
    MNFreePopup(v7);
    if ( v7 == gpopupMenu )
      gdwPUDFlags &= ~0x800000u;
    else
      Win32FreePool(v7);
    return 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v18, v8);
  *(_DWORD *)v7 |= 3u;
  HMAssignmentLock(v7 + 8, v3);
  *(_DWORD *)(v7 + 80) = -1;
  HMAssignmentLock(v7 + 16, v3);
  *(_DWORD *)v7 |= 0x10000u;
  v9 = v3;
  v10 = *(_DWORD *)v7;
  *(_QWORD *)(v7 + 64) = v7;
  for ( i = *(_BYTE *)(v3 + 55); (i & 0xC0) == 0x40; i = *(_BYTE *)(v9 + 55) )
    v9 = *(_QWORD *)(v9 + 88);
  v12 = *(_QWORD *)(v9 + 192);
  if ( v12 )
    v13 = *(unsigned __int8 *)(v12 + 40);
  else
    v13 = *(unsigned __int8 *)(v3 + 49);
  *(_DWORD *)v7 = v10 ^ (v10 ^ (((v13 >> 5) & 1) << 22)) & 0x400000;
  v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v17;
  v17[1] = v3;
  ++*(_DWORD *)(v3 + 8);
  xxxSendMessage((struct tagWND *)v3, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v15, v14);
  v16 = v18;
  if ( !v18 || (unsigned int)xxxUnlockMenuState(v18) )
    return 0LL;
  return v16;
}
