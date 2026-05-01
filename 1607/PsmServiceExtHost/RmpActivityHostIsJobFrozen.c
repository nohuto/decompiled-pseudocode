/*
 * XREFs of RmpActivityHostIsJobFrozen @ 0x18002F25C
 * Callers:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall RmpActivityHostIsJobFrozen(__int64 a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 48) == 1 )
    return (*(unsigned __int8 *)(a1 + 820) >> 6) & 1;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL)
                                                                          + 208LL))(
    a1 + 520,
    *(unsigned int *)(a1 + 588),
    a1 + 56,
    *(unsigned int *)(a1 + 592),
    *(_QWORD *)(a1 + 24),
    &v2);
  return v2 == 7;
}
