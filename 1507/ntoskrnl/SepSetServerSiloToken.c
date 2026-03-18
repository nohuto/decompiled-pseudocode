/*
 * XREFs of SepSetServerSiloToken @ 0x1406D1220
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  _QWORD *v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v14, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v16);
    if ( v5 < 0 )
      goto LABEL_14;
    v6 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v6 + 3);
    v7 = v6[3];
    while ( v7 - 1 > 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v6 + 3, v7 - 1, v7);
      if ( v8 == v7 )
        goto LABEL_10;
    }
    if ( v7 != 1 )
      __fastfail(0xEu);
    v9 = v6[1];
    v10 = v6[20];
    v15 = v9;
    SepDeReferenceLogonSession(&v15, v10);
LABEL_10:
    *(_QWORD *)(a1 + 216) = v16;
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_14:
  _InterlockedOr(v14, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v5;
}
