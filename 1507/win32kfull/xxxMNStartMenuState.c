/*
 * XREFs of xxxMNStartMenuState @ 0x1C01FCFB8
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxUnlockMenuState @ 0x1C00FEB60 (xxxUnlockMenuState.c)
 *     MNAllocPopup @ 0x1C01063A4 (MNAllocPopup.c)
 *     MNAllocMenuState @ 0x1C0107674 (MNAllocMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C010B284 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNFreePopup @ 0x1C010CF08 (MNFreePopup.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  struct tagMENUSTATE *v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  char i; // al
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagMENUSTATE *v18; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagMENUSTATE *v20; // [rsp+78h] [rbp+20h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(gptiCurrent + 536LL) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v1 + 54) & 8) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 88);
    }
    while ( (*(_BYTE *)(v1 + 55) & 0xC0) == 0x40 );
  }
  else
  {
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL) + 80LL);
  }
  if ( !v1 )
    return 0LL;
  v3 = safe_cast_fnid_to_PMENUWND(v1);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 376) || *(_QWORD *)(v3 + 384) )
      return 0LL;
  }
  if ( ((*(_BYTE *)(v1 + 55) & 0xC0) == 0x40 || !*(_QWORD *)(v1 + 192)) && (*(_BYTE *)(v1 + 54) & 8) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(v1 + 16);
  if ( *(_QWORD *)(v7 + 536) )
    return 0LL;
  if ( v7 != v5 )
  {
    PostTransformableMessage((struct tagWND *)v1, 0x112u, v4, v6, 1);
    return 0LL;
  }
  v8 = MNAllocPopup(0);
  v9 = (__int64)v8;
  if ( !v8 )
    return 0LL;
  v10 = (struct tagMENUSTATE *)MNAllocMenuState(v8);
  if ( !v10 )
  {
    MNFreePopup(v9);
    if ( v9 == gpopupMenu )
      gdwPUDFlags &= ~0x800000u;
    else
      Win32FreePool(v9);
    return 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v20, v10);
  *(_DWORD *)v9 |= 3u;
  HMAssignmentLock(v9 + 8, v1);
  *(_DWORD *)(v9 + 80) = -1;
  HMAssignmentLock(v9 + 16, v1);
  *(_DWORD *)v9 |= 0x10000u;
  v11 = v1;
  v12 = *(_DWORD *)v9;
  *(_QWORD *)(v9 + 64) = v9;
  for ( i = *(_BYTE *)(v1 + 55); (i & 0xC0) == 0x40; i = *(_BYTE *)(v11 + 55) )
    v11 = *(_QWORD *)(v11 + 88);
  v14 = *(_QWORD *)(v11 + 192);
  if ( v14 )
    v15 = *(unsigned __int8 *)(v14 + 40);
  else
    v15 = *(unsigned __int8 *)(v1 + 49);
  *(_DWORD *)v9 = v12 ^ (v12 ^ (((v15 >> 5) & 1) << 22)) & 0x400000;
  v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v19;
  v19[1] = v1;
  ++*(_DWORD *)(v1 + 8);
  xxxSendMessage((struct tagWND *)v1, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v17, v16);
  v18 = v20;
  if ( !v20 || (unsigned int)xxxUnlockMenuState(v20) )
    return 0LL;
  return v18;
}
