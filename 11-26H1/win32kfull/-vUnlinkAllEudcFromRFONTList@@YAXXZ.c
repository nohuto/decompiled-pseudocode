/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808
 * Callers:
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x140288444 (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  HDEV i; // rcx
  HDEV v5; // rax
  HDEV v6; // rbx
  HSEMAPHORE v7; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v8 = *(HSEMAPHORE *)(v3 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v7 = *(HSEMAPHORE *)(v3 + 20328);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  for ( i = 0LL; ; i = v6 )
  {
    v5 = (HDEV)hdevEnumerateAll(i);
    v6 = v5;
    if ( !v5 )
      break;
    vUnlinkAllEudcFromRFONTListInternal(v5);
  }
  SEMOBJ<18>::vUnlock(&v7);
  SEMOBJ<17>::vUnlock(&v8);
}
