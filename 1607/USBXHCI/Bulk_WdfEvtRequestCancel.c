/*
 * XREFs of Bulk_WdfEvtRequestCancel @ 0x1C002F1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002F78C (WPP_RECORDER_SF_DDDx.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

void __fastcall Bulk_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bp
  char v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 *v13; // rcx

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043070);
  v4 = *(_QWORD *)(v3 + 40);
  v5 = *(_QWORD *)(v4 + 56);
  v6 = *(_DWORD *)(v5 + 144);
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_DDDx(*(_QWORD *)(v5 + 80), v6, *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL), 13);
  *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
  if ( *(_DWORD *)(v3 + 48) == 1 )
  {
    v7 = *(_DWORD *)(v4 + 276);
    if ( (v7 & 0x20) != 0 )
    {
      v8 = v4 + 320;
      v9 = *(_QWORD *)(v4 + 320);
      if ( v9 != v4 + 320 )
      {
        **(_QWORD **)(v4 + 360) = v9;
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v4 + 360);
        **(_QWORD **)(v4 + 328) = v4 + 352;
        *(_QWORD *)(v4 + 360) = *(_QWORD *)(v4 + 328);
        *(_QWORD *)(v4 + 328) = v4 + 320;
        *(_QWORD *)v8 = v8;
      }
      v1 = 1;
    }
    else
    {
      v2 = 1;
      *(_DWORD *)(v4 + 276) = v7 | 0x10;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
  if ( v2 )
  {
    v10 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v10 + 272));
  }
  *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
  if ( *(_DWORD *)(v3 + 48) == 2 )
  {
    v11 = *(_QWORD *)v3;
    v12 = *(_QWORD **)(v3 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v12 != v3 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(__int64 **)(v4 + 360);
    if ( *v13 != v4 + 352 )
      __fastfail(3u);
    *(_QWORD *)v3 = v4 + 352;
    v1 = 1;
    *(_QWORD *)(v3 + 8) = v13;
    *v13 = v3;
    *(_QWORD *)(v4 + 360) = v3;
  }
  *(_DWORD *)(v3 + 48) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
  if ( v1 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 80));
}
