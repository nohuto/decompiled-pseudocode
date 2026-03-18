/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z @ 0x1C013459C
 * Callers:
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(struct tagPOPUPMENU *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  if ( !v1 )
    return 0LL;
  v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v5;
  v5[1] = v1;
  ++*(_DWORD *)(v1 + 8);
  if ( v1 != *((_QWORD *)a1 + 7) )
    xxxSendMessage((struct tagWND *)v1, 0x1E4u, 0LL, 0LL);
  xxxSendMessage((struct tagWND *)v1, 0x1E5u, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
  ThreadUnlock1(v4, v3);
  return 1LL;
}
