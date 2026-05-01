/*
 * XREFs of RmpActivityHostComputeAndApplyExecutionSpeed @ 0x18003B8CC
 * Callers:
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     RmpActivityHostApplyExecutionSpeed @ 0x18000499C (RmpActivityHostApplyExecutionSpeed.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostComputeAndApplyExecutionSpeed(__int64 a1)
{
  __int64 v1; // r11
  int v2; // r10d
  int v3; // eax
  __int64 v4[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 584) == 2 )
  {
    RmpActivityHostEnumerateResourceSetBegin(a1, 1, v4);
    if ( !RmpActivityHostEnumerateResourceSetGetNext(v4) )
      goto LABEL_5;
    while ( RmpActivityHostEnumerateResourceSetGetNext(v4) )
      ;
    if ( v2 == 3 )
LABEL_5:
      v2 = 1;
    v3 = *(_DWORD *)(v1 + 904);
    if ( ((v3 & 0x40) != 0 || (v3 & 0xEu) >= 8 && (v3 & 0x30u) >= 0x20) && v2 <= 1 )
      v2 = 1;
    RmpActivityHostApplyExecutionSpeed(v1, v2);
  }
}
