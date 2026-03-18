/*
 * XREFs of Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002BA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     TR_TransfersReclaimed @ 0x1C0025624 (TR_TransfersReclaimed.c)
 *     Bulk_CompleteTransfers @ 0x1C002A374 (Bulk_CompleteTransfers.c)
 *     Bulk_DoesDriverOwnRequests @ 0x1C002A808 (Bulk_DoesDriverOwnRequests.c)
 */

void __fastcall Bulk_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rax
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 ***v5; // rdi
  KIRQL v6; // al
  KIRQL v7; // r8
  int v8; // edx
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  __int64 **v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 ***v14; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C00452F0);
  v14 = &v13;
  v13 = (__int64 **)&v13;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  *(_BYTE *)(v3 + 96) = v4;
  if ( *(_BYTE *)(v3 + 280) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v4);
  }
  else
  {
    *(_BYTE *)(v3 + 280) = 1;
    v5 = (__int64 ***)(v3 + 352);
    do
    {
      if ( *v5 != (__int64 **)v5 )
      {
        *v14 = *v5;
        (*v5)[1] = (__int64 *)v14;
        **(_QWORD **)(v3 + 360) = &v13;
        v14 = *(__int64 ****)(v3 + 360);
        *(_QWORD *)(v3 + 360) = v3 + 352;
        *v5 = (__int64 **)v5;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
      Bulk_CompleteTransfers(v3, &v13);
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
      *(_BYTE *)(v3 + 96) = v6;
      v7 = v6;
    }
    while ( *v5 != (__int64 **)v5 );
    if ( (*(_DWORD *)(v3 + 276) & 0x40) != 0 && !Bulk_DoesDriverOwnRequests((_QWORD *)v3) )
    {
      v1 = 1;
      *(_DWORD *)(v3 + 276) = v8 & 0xFFFFFFBF;
    }
    *(_BYTE *)(v3 + 280) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v7);
    if ( v1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = *(_QWORD *)(v3 + 56);
        v12 = *(_DWORD *)(v3 + 64);
        v11 = *(_DWORD *)(v9 + 144);
        v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(v9 + 80),
          5u,
          0xDu,
          0x10u,
          (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
          v10,
          v11,
          v12);
      }
      TR_TransfersReclaimed(v3);
    }
  }
}
