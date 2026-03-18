/*
 * XREFs of Isoch_WdfEvtRequestCancel @ 0x1C002C970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A950 (WPP_RECORDER_SF_DDq.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

void __fastcall Isoch_WdfEvtRequestCancel(__int64 a1)
{
  char v2; // bp
  char v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 *v13; // rcx
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043070);
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v5 + 56);
  v15 = *(_DWORD *)(v6 + 144);
  v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(v6 + 80),
    4u,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
    0x33u,
    (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
    v14,
    v15,
    a1);
  *(_BYTE *)(v5 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
  if ( *(_DWORD *)(v4 + 48) == 1 )
  {
    v7 = *(_DWORD *)(v5 + 280);
    if ( (v7 & 2) != 0 )
    {
      v8 = v5 + 336;
      v9 = *(_QWORD *)(v5 + 336);
      if ( v9 != v5 + 336 )
      {
        **(_QWORD **)(v5 + 376) = v9;
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v5 + 376);
        **(_QWORD **)(v5 + 344) = v5 + 368;
        *(_QWORD *)(v5 + 376) = *(_QWORD *)(v5 + 344);
        *(_QWORD *)(v5 + 344) = v5 + 336;
        *(_QWORD *)v8 = v8;
      }
      v2 = 1;
    }
    else
    {
      v3 = 1;
      *(_DWORD *)(v5 + 280) = v7 | 4;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), *(_BYTE *)(v5 + 96));
  if ( v3 )
  {
    v10 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v10 + 272));
  }
  *(_BYTE *)(v5 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 88));
  if ( *(_DWORD *)(v4 + 48) == 2 )
  {
    v11 = *(_QWORD *)v4;
    v12 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v12 != v4 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(__int64 **)(v5 + 376);
    if ( *v13 != v5 + 368 )
      __fastfail(3u);
    *(_QWORD *)v4 = v5 + 368;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v13;
    *v13 = v4;
    *(_QWORD *)(v5 + 376) = v4;
  }
  *(_DWORD *)(v4 + 48) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 88), *(_BYTE *)(v5 + 96));
  if ( v2 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(v5 + 80));
}
