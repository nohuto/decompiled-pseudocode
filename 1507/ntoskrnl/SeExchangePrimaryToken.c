/*
 * XREFs of SeExchangePrimaryToken @ 0x1406D51C0
 * Callers:
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 * Callees:
 *     SepSetTrustLevelForProcessToken @ 0x14002B9A4 (SepSetTrustLevelForProcessToken.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeExchangePrimaryToken(PEPROCESS Process, __int64 Object, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  int SessionId; // eax
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  struct _KTHREAD *v17; // rdx
  __int16 v18; // cx
  PVOID v19; // rcx
  unsigned int v20; // ecx
  int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // rdx
  __int16 v25; // cx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  ULONG_PTR v28; // rbx
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  signed __int32 v32[8]; // [rsp+0h] [rbp-58h] BYREF
  PVOID *p_Objecta; // [rsp+20h] [rbp-38h]
  char v34; // [rsp+68h] [rbp+10h] BYREF
  PVOID Objecta; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(Object + 192) == 1;
  Objecta = 0LL;
  SessionObjectById = 0LL;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(Process);
  v10 = SessionId;
  if ( SessionId == -1 )
  {
    v10 = 0;
  }
  else if ( !SeTokenDoesNotTrackSessionObject )
  {
    SessionObjectById = MmGetSessionObjectById(SessionId);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Object + 48), 1u);
  _InterlockedOr(v32, 0);
  if ( *(_BYTE *)(Object + 204) )
  {
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(Object + 204) = 1;
  v16 = SepSetTrustLevelForProcessToken(Object, (__int64)Process, &v34);
  if ( v16 < 0 )
  {
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !SessionObjectById )
      return (unsigned int)v16;
    v19 = SessionObjectById;
LABEL_22:
    ObfDereferenceObject(v19);
    return (unsigned int)v16;
  }
  if ( (*(_DWORD *)(Object + 200) & 0x4000) != 0 )
  {
    v20 = *(_DWORD *)(Object + 120);
    if ( v20 != v10 )
    {
      SepDereferenceLowBoxNumberEntry(v20, *(_QWORD *)(Object + 1080), v14, v15);
      *(_QWORD *)(Object + 1080) = 0LL;
      p_Objecta = &Objecta;
      LOBYTE(v21) = 1;
      SepSetTokenSessionById(Object, v10, v21, (__int64)SessionObjectById);
      v16 = SepSetTokenLowboxNumber(Object, *(_QWORD *)(Object + 784), v22, v23);
      if ( v16 < 0 )
      {
        _InterlockedOr(v32, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
        v24 = KeGetCurrentThread();
        v25 = v24->KernelApcDisable + 1;
        v24->KernelApcDisable = v25;
        if ( !v25
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
          && !v24->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v19 = Objecta;
        if ( !Objecta )
          return (unsigned int)v16;
        goto LABEL_22;
      }
    }
  }
  LOBYTE(v14) = 1;
  p_Objecta = &Objecta;
  SepSetTokenSessionById(Object, v10, v14, (__int64)SessionObjectById);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(Process, Object);
  ObfReferenceObject((PVOID)Object);
  v28 = ObFastReplaceObject((volatile __int64 *)&Process[1].Affinity.Bitmap[5], Object);
  if ( !v28 )
    return 3221225596LL;
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 48), 1u);
  _InterlockedOr(v32, 0);
  *(_BYTE *)(v28 + 204) = 0;
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v28 + 48));
  v30 = KeGetCurrentThread();
  v31 = v30->KernelApcDisable + 1;
  v30->KernelApcDisable = v31;
  if ( !v31
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
    && !v30->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *a3 = v28;
  return 0LL;
}
