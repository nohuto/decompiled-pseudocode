/*
 * XREFs of NtGdiGetPublicFontTableChangeCookie @ 0x1401FFA20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall NtGdiGetPublicFontTableChangeCookie(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // ebx
  HSEMAPHORE v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(_QWORD *)(v2 + 20320);
  if ( !v3 || !*(_QWORD *)(v2 + 20392) )
    return 0LL;
  v6 = *(HSEMAPHORE *)(v2 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 20392) + 32LL);
  SEMOBJ<17>::vUnlock(&v6);
  return v4;
}
