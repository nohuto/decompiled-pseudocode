/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x1C00029B4
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C00027D0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_PrepareStage @ 0x1C000B4B0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C230 (Isoch_Stage_CompleteTD.c)
 *     Isoch_RetrieveNextStage @ 0x1C000C8B0 (Isoch_RetrieveNextStage.c)
 *     Isoch_CompleteTransfers @ 0x1C002B06C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002B930 (Isoch_MapStage.c)
 * Callees:
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C0002D70 (Isoch_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029360 (WPP_RECORDER_SF_DDqd.c)
 */

char __fastcall Isoch_Transfer_CompleteCancelable(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 **v6; // rax
  unsigned int v8; // esi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 **v19; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v6 = (__int64 **)&retaddr;
  v8 = a4;
  if ( *((_DWORD *)a2 + 12) == 1 )
  {
    v17 = (__int64 *)*a2;
    v18 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v18 != a2 )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (__int64)v18;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2048))(WdfDriverGlobals, a2[3]);
    if ( v11 < 0 )
    {
      v12 = *(_QWORD *)(a1 + 48);
      v13 = *(unsigned __int8 *)(v12 + 135);
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v12,
        v13,
        17,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        v13,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        a2[3],
        v11);
      v14 = a1 + 352;
      *((_DWORD *)a2 + 12) = 2;
      v6 = *(__int64 ***)(v14 + 8);
      if ( *v6 != (__int64 *)v14 )
        __fastfail(3u);
      *a2 = v14;
      a2[1] = (__int64)v6;
      *v6 = a2;
      *(_QWORD *)(v14 + 8) = a2;
      return (char)v6;
    }
    *((_DWORD *)a2 + 12) = 0;
  }
  else if ( *((_DWORD *)a2 + 12) == 3 )
  {
    if ( !a5 )
      return (char)v6;
    v15 = *a2;
    if ( a4 == -1 )
      v8 = -1073676288;
    v16 = (__int64 **)a2[1];
    if ( *(__int64 **)(v15 + 8) != a2 || *v16 != a2 )
      __fastfail(3u);
    *v16 = (__int64 *)v15;
    *(_QWORD *)(v15 + 8) = v16;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  Isoch_Transfer_PrepareForCompletion(a1, a2, a3, v8);
  if ( a6 )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v19 = *(__int64 ***)(a1 + 376);
    if ( *v19 != (__int64 *)(a1 + 368) )
      __fastfail(3u);
    a2[1] = (__int64)v19;
    *a2 = a1 + 368;
    *v19 = a2;
    *(_QWORD *)(a1 + 376) = a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 80));
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2[3],
      *((unsigned int *)a2 + 13));
  }
  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(a1 + 96) = (_BYTE)v6;
  return (char)v6;
}
