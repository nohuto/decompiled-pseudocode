/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C002441C (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0024624 (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C0024F34 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00252B4 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C0026078 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0026914 (Isoch_Stage_CompleteTD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0020E80 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C0028174 (Isoch_Transfer_PrepareForCompletion.c)
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
  __int64 v16; // rdi
  __int64 **v17; // rcx
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
  v15 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2048))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          a2[3]);
  if ( v15 >= 0 )
  {
    *((_DWORD *)a2 + 12) = 0;
LABEL_18:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    Isoch_Transfer_PrepareForCompletion(a1, a2, a3, v8);
    if ( a6 )
    {
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v17 = *(__int64 ***)(a1 + 376);
      *a2 = a1 + 368;
      a2[1] = (__int64)v17;
      if ( *v17 != (__int64 *)(a1 + 368) )
        __fastfail(3u);
      *v17 = a2;
      *(_QWORD *)(a1 + 376) = a2;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
      (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 896))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        *(_QWORD *)(a1 + 80));
    }
    else
    {
      (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        a2[3],
        *((unsigned int *)a2 + 13));
    }
    LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    *(_BYTE *)(a1 + 96) = (_BYTE)v6;
    return (char)v6;
  }
  WPP_RECORDER_SF_DDqd(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    0x11u,
    (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    a2[3],
    v15);
  *((_DWORD *)a2 + 12) = 2;
  v16 = a1 + 352;
  v6 = *(__int64 ***)(v16 + 8);
  *a2 = v16;
  a2[1] = (__int64)v6;
  if ( *v6 != (__int64 *)v16 )
    __fastfail(3u);
  *v6 = a2;
  *(_QWORD *)(v16 + 8) = a2;
  return (char)v6;
}
