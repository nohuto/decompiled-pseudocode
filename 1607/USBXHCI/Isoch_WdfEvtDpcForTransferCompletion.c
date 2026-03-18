/*
 * XREFs of Isoch_WdfEvtDpcForTransferCompletion @ 0x1C002C5D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     TR_TransfersReclaimed @ 0x1C0028FCC (TR_TransfersReclaimed.c)
 *     Isoch_CompleteTransfers @ 0x1C002B06C (Isoch_CompleteTransfers.c)
 *     Isoch_DoesDriverOwnRequests @ 0x1C002B1B4 (Isoch_DoesDriverOwnRequests.c)
 */

void __fastcall Isoch_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rax
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 *v5; // rdi
  KIRQL v6; // al
  KIRQL v7; // r8
  int v8; // edx
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C00432F0);
  v13 = &v12;
  v12 = (__int64)&v12;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  *(_BYTE *)(v3 + 96) = v4;
  if ( *(_BYTE *)(v3 + 284) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v4);
  }
  else
  {
    *(_BYTE *)(v3 + 284) = 1;
    v5 = (__int64 *)(v3 + 368);
    do
    {
      if ( (__int64 *)*v5 != v5 )
      {
        *v13 = *v5;
        *(_QWORD *)(*v5 + 8) = v13;
        **(_QWORD **)(v3 + 376) = &v12;
        v13 = *(__int64 **)(v3 + 376);
        *(_QWORD *)(v3 + 376) = v3 + 368;
        *v5 = (__int64)v5;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
      Isoch_CompleteTransfers(v3, &v12);
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
      *(_BYTE *)(v3 + 96) = v6;
      v7 = v6;
    }
    while ( (__int64 *)*v5 != v5 );
    if ( (*(_DWORD *)(v3 + 280) & 8) != 0 && !Isoch_DoesDriverOwnRequests((_QWORD *)v3) )
    {
      v1 = 1;
      *(_DWORD *)(v3 + 280) = v8 & 0xFFFFFFF7;
    }
    *(_BYTE *)(v3 + 284) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v7);
    if ( v1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = *(_QWORD *)(v3 + 56);
        v11 = *(_DWORD *)(v9 + 144);
        v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v9 + 80),
          5u,
          0xDu,
          0x2Bu,
          (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
          v10,
          v11);
      }
      TR_TransfersReclaimed(v3);
    }
  }
}
