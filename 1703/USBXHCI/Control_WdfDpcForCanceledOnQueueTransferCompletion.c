/*
 * XREFs of Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C00267E0
 * Callers:
 *     <none>
 * Callees:
 *     Control_Transfer_Complete @ 0x1C0003AB4 (Control_Transfer_Complete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Control_WdfDpcForCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // dl
  __int64 **v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C00452F0);
  v9[1] = v9;
  v9[0] = v9;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 88));
  v4 = *(_BYTE *)(v2 + 328) == 0;
  *(_BYTE *)(v2 + 96) = v3;
  if ( v4 )
  {
    *(_BYTE *)(v2 + 328) = 1;
    v6 = (__int64 **)(v2 + 312);
    while ( *v6 != (__int64 *)v6 )
    {
      v7 = *v6;
      v8 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v6 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v6;
      v7[1] = (__int64)v7;
      *v7 = (__int64)v7;
      Control_Transfer_Complete(v2, (__int64)v7);
    }
    v5 = *(_BYTE *)(v2 + 96);
    *(_BYTE *)(v2 + 328) = 0;
  }
  else
  {
    v5 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 88), v5);
}
