/*
 * XREFs of xxxMNStartMenuState @ 0x1C01F4A64
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     xxxUnlockMenuState @ 0x1C012CFD0 (xxxUnlockMenuState.c)
 *     MNAllocMenuState @ 0x1C013B658 (MNAllocMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNAllocPopup @ 0x1C013F8E4 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C0142D70 (MNFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  struct tagMENUSTATE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // edx
  char i; // al
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagMENUSTATE *v20; // rbx
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagMENUSTATE *v22; // [rsp+78h] [rbp+20h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(gptiCurrent + 528LL) )
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
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 88LL);
  }
  if ( !v1 )
    return 0LL;
  v3 = safe_cast_fnid_to_PMENUWND(v1);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 360) || *(_QWORD *)(v3 + 368) )
      return 0LL;
  }
  if ( ((*(_BYTE *)(v1 + 55) & 0xC0) == 0x40 || !*(_QWORD *)(v1 + 192)) && (*(_BYTE *)(v1 + 54) & 8) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(v1 + 16);
  if ( *(_QWORD *)(v7 + 528) )
    return 0LL;
  if ( v7 != v5 )
  {
    PostTransformableMessage(v1, 274LL, v4, v6, 1);
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
      Win32FreePool(v9, v11, v12);
    return 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v22, v10);
  *(_DWORD *)v9 |= 3u;
  HMAssignmentLock(v9 + 8, v1);
  *(_DWORD *)(v9 + 80) = -1;
  HMAssignmentLock(v9 + 16, v1);
  *(_DWORD *)v9 |= 0x10000u;
  v13 = v1;
  v14 = *(_DWORD *)v9;
  *(_QWORD *)(v9 + 64) = v9;
  for ( i = *(_BYTE *)(v1 + 55); (i & 0xC0) == 0x40; i = *(_BYTE *)(v13 + 55) )
    v13 = *(_QWORD *)(v13 + 88);
  v16 = *(_QWORD *)(v13 + 192);
  if ( v16 )
    v17 = *(unsigned __int8 *)(v16 + 40);
  else
    v17 = *(unsigned __int8 *)(v1 + 49);
  *(_DWORD *)v9 = v14 ^ (v14 ^ (((v17 >> 5) & 1) << 22)) & 0x400000;
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v1;
  ++*(_DWORD *)(v1 + 8);
  xxxSendMessage((struct tagWND *)v1, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v19, v18);
  v20 = v22;
  if ( !v22 || (unsigned int)xxxUnlockMenuState(v22) )
    return 0LL;
  return v20;
}
