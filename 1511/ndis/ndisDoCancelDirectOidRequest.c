/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C0041408
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C0040490 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0053850 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char v6; // bp
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // al
  _QWORD *v9; // r13
  __int64 v10; // r14
  char v11; // bl
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rbx
  KIRQL NewIrql; // [rsp+78h] [rbp+10h]
  _DWORD *v16; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  if ( a2 )
  {
    v6 = ndisReferenceRef((PKSPIN_LOCK)(a2 + 312));
    if ( !v6 )
      goto LABEL_27;
    while ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 312LL) )
    {
      v7 = (KSPIN_LOCK *)(v4 + 144);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      v9 = (_QWORD *)(v4 + 152);
      v10 = *(_QWORD *)(v4 + 840);
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      NewIrql = v8;
      *(_DWORD *)(v4 + 160) = 2306936;
      v11 = *(_BYTE *)v10;
      v16 = (_DWORD *)(v4 + 160);
      ndisDereferenceRef((PKSPIN_LOCK)(v4 + 312), 4u);
      v6 = 0;
      if ( v11 == 5 )
      {
        v4 = v10;
        v6 = ndisReferenceRef((PKSPIN_LOCK)(v10 + 312));
        if ( !v6 )
          v4 = 0LL;
      }
      else
      {
        v4 = 0LL;
        a1 = v10;
      }
      *v9 = 0LL;
      *v16 = 0;
      KeReleaseSpinLock(v7, NewIrql);
      if ( !v4 )
        goto LABEL_14;
    }
    v12 = *(_QWORD *)(v4 + 16);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_q(0x8Au, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v4);
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 312))(*(_QWORD *)(v4 + 24), a3);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_q(0x8Bu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v4);
  }
LABEL_14:
  if ( a1 )
  {
    v13 = *(_BYTE *)(a1 + 32);
    if ( (v13 > 6u || v13 == 6 && *(_BYTE *)(a1 + 33))
      && *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 256LL)
      && (!*(_QWORD *)(a1 + 4512) || ndisSetBusyAsync(a1, 1, 0x33u, a3, 0)) )
    {
      v14 = *(_QWORD *)(a1 + 3816);
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_q(0xE9u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
      (*(void (__fastcall **)(_QWORD, __int64))(v14 + 256))(*(_QWORD *)(a1 + 24), a3);
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_q(0xEAu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
      if ( *(_QWORD *)(a1 + 4512) )
        ndisClearBusy(a1, 1LL, 51LL);
    }
  }
LABEL_27:
  if ( v6 == 1 )
    ndisDereferenceRef((PKSPIN_LOCK)(v4 + 312), 4u);
}
