/*
 * XREFs of Control_WdfEvtRequestCancel @ 0x1C0026B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026F80 (WPP_RECORDER_SF_DDq.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall Control_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bl
  char v2; // si
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // edx
  KIRQL v8; // al
  __int64 v9; // rdx

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045070);
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_DWORD *)(v6 + 144);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(v6 + 80),
    v7,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
    41,
    (__int64)&WPP_b8bb340e430930fc90b81b2b4d1cc689_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
    *(_DWORD *)(v6 + 144),
    v1);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
  *(_BYTE *)(v5 + 96) = v8;
  if ( *(_DWORD *)(v4 + 96) == 1 )
  {
    if ( (*(_DWORD *)(v5 + 304) & 8) != 0 )
      v2 = 1;
    else
      v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), v8);
  if ( v3 )
  {
    v9 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v9 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v9 + 272));
  }
  *(_BYTE *)(v5 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
  if ( *(_DWORD *)(v4 + 96) == 2 && (!v3 || (*(_DWORD *)(v5 + 304) & 0xA) != 0) )
    v2 = 1;
  *(_DWORD *)(v4 + 96) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), *(_BYTE *)(v5 + 96));
  if ( v2 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(v5 + 80));
}
