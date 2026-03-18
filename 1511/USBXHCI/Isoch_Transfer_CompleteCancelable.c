/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x1C00017DC
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0001570 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_PrepareStage @ 0x1C000C4C4 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C760 (Isoch_Stage_CompleteTD.c)
 *     Isoch_RetrieveNextStage @ 0x1C000CC00 (Isoch_RetrieveNextStage.c)
 *     Isoch_CompleteTransfers @ 0x1C002AA4C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002B320 (Isoch_MapStage.c)
 * Callees:
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C00019F4 (Isoch_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0028D30 (WPP_RECORDER_SF_DDqd.c)
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
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rdi
  __int64 **v19; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v6 = (__int64 **)&retaddr;
  v8 = a4;
  if ( *((_DWORD *)a2 + 12) != 1 )
  {
    if ( *((_DWORD *)a2 + 12) == 3 )
    {
      if ( !a5 )
        return (char)v6;
      v11 = *a2;
      if ( a4 == -1 )
        v8 = -1073676288;
      v12 = (__int64 **)a2[1];
      if ( *(__int64 **)(v11 + 8) != a2 || *v12 != a2 )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    goto LABEL_18;
  }
  v13 = (__int64 *)*a2;
  v14 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v14 != a2 )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = (__int64)v14;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2048))(WdfDriverGlobals, a2[3]);
  if ( v15 >= 0 )
  {
    *((_DWORD *)a2 + 12) = 0;
LABEL_18:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    Isoch_Transfer_PrepareForCompletion(a1, a2, a3, v8);
    if ( a6 )
    {
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v19 = *(__int64 ***)(a1 + 376);
      *a2 = a1 + 368;
      a2[1] = (__int64)v19;
      if ( *v19 != (__int64 *)(a1 + 368) )
        __fastfail(3u);
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
  v16 = *(_QWORD *)(a1 + 48);
  v17 = *(unsigned __int8 *)(v16 + 135);
  LOBYTE(v16) = 4;
  WPP_RECORDER_SF_DDqd(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v16,
    v17,
    17,
    (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
    v17,
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    a2[3],
    v15);
  *((_DWORD *)a2 + 12) = 2;
  v18 = a1 + 352;
  v6 = *(__int64 ***)(v18 + 8);
  *a2 = v18;
  a2[1] = (__int64)v6;
  if ( *v6 != (__int64 *)v18 )
    __fastfail(3u);
  *v6 = a2;
  *(_QWORD *)(v18 + 8) = a2;
  return (char)v6;
}
