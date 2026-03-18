/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C02175B8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(struct tagPOPUPMENU *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return 0LL;
  v4 = (_QWORD *)((char *)a1 + 48);
  if ( !*((_QWORD *)a1 + 6) || (*(_DWORD *)a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 1);
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  xxxMNSelectItem(a1, a2, 0xFFFFFFFF);
  if ( !*v4 )
  {
    ThreadUnlock1(v6, 0LL);
    return 0LL;
  }
  HMAssignmentLock(&v15, *v4);
  v8 = (char *)a1 + 40;
  HMAssignmentLock(v4, *((_QWORD *)a1 + 5));
  HMAssignmentLock((char *)a1 + 40, v15);
  HMAssignmentUnlock(&v15);
  v9 = *((_QWORD *)a1 + 1);
  if ( (*(_BYTE *)(v9 + 54) & 8) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 184);
    if ( v10 )
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (2 * (v10 == *(_QWORD *)v8))) & 2;
    else
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (2 * (*(unsigned __int8 *)(*(_QWORD *)v8 + 40LL) >> 7))) & 2;
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  v11 = (__int64 *)*((_QWORD *)a1 + 1);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, v11, ((unsigned __int8)~(unsigned __int8)*(_DWORD *)a1 >> 1) & 2 | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *((__int64 **)a1 + 1), (*(unsigned __int8 *)a1 >> 1) & 2 | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v13, v12);
  return 1LL;
}
