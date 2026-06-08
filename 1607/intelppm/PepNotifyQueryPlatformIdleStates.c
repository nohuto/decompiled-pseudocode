/*
 * XREFs of PepNotifyQueryPlatformIdleStates @ 0x1C0017890
 * Callers:
 *     InitPep @ 0x1C0017290 (InitPep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepNotifyQueryPlatformIdleStates(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  result = PoFxProcessorNotification(*(_QWORD *)(a1 + 1064), 16LL, &v3);
  if ( (int)result >= 0 )
  {
    result = v3;
    dword_1C000F220 = v3;
  }
  if ( !*(_BYTE *)(a1 + 66) )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C000EF70)(*(_QWORD *)(a1 + 1064));
  return result;
}
