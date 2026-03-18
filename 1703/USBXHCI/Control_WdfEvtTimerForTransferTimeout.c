/*
 * XREFs of Control_WdfEvtTimerForTransferTimeout @ 0x1C0026CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026F80 (WPP_RECORDER_SF_DDq.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall Control_WdfEvtTimerForTransferTimeout(__int64 a1)
{
  char v1; // di
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  int v7; // edx
  KIRQL v8; // al
  __int64 v9; // rdx

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v3,
         off_1C00452F0);
  v5 = *(_QWORD *)(v4 + 296);
  v6 = *(_QWORD *)(v4 + 56);
  v7 = *(_DWORD *)(v6 + 144);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(v6 + 80),
    v7,
    *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
    40,
    (__int64)&WPP_b8bb340e430930fc90b81b2b4d1cc689_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
    *(_DWORD *)(v6 + 144),
    *(_QWORD *)(v5 + 24));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
  *(_BYTE *)(v4 + 96) = v8;
  if ( *(_DWORD *)(v5 + 100) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 304) & 8) != 0 )
      v1 = 1;
    else
      v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), v8);
  if ( v2 )
  {
    v9 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v9 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v9 + 272));
  }
  *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
  if ( *(_DWORD *)(v5 + 100) == 2 && (!v2 || (*(_DWORD *)(v4 + 304) & 0xA) != 0) )
    v1 = 1;
  *(_DWORD *)(v5 + 100) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
  if ( v1 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 80));
}
