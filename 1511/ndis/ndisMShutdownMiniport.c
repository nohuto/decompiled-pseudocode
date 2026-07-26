/*
 * XREFs of ndisMShutdownMiniport @ 0x1C00EF14C
 * Callers:
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisMInvokeShutdown @ 0x1C0059E60 (ndisMInvokeShutdown.c)
 */

__int64 __fastcall ndisMShutdownMiniport(__int64 a1)
{
  KIRQL v2; // al
  int v3; // edx
  void (__fastcall *v4)(_QWORD); // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x70u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) |= 0x1000000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  *(_DWORD *)(a1 + 120) = v3 & 0x7FFFFFFE | 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( (*(_DWORD *)(a1 + 124) & 0x4004) == 0 && (unsigned int)(*(_DWORD *)(a1 + 3924) - 2) > 2 )
  {
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 232LL) )
        ndisMInvokeShutdown(a1, 0);
    }
    else
    {
      v4 = *(void (__fastcall **)(_QWORD))(a1 + 2072);
      if ( v4 )
        v4(*(_QWORD *)(a1 + 2064));
    }
    *(_DWORD *)(a1 + 124) |= 0x800000u;
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(0x71u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a1, *(__int64 **)(a1 + 3912));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x72u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a1);
  return 0LL;
}
