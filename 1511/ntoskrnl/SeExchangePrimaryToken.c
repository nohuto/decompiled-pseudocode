/*
 * XREFs of SeExchangePrimaryToken @ 0x140653498
 * Callers:
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeExchangePrimaryToken(PEPROCESS Process, __int64 Object, ULONG_PTR *a3)
{
  void *SessionObjectById; // rsi
  __int64 result; // rax
  int SessionId; // eax
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // r8d
  bool v12; // zf
  unsigned int v13; // ecx
  int v14; // r8d
  int v15; // r14d
  ULONG_PTR v16; // rbx
  struct _KTHREAD *v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Objecta; // [rsp+58h] [rbp+10h] BYREF

  SessionObjectById = 0LL;
  Objecta = 0LL;
  if ( *(_DWORD *)(Object + 192) != 1 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(Process);
  v9 = SessionId;
  if ( SessionId == -1 )
  {
    v9 = 0;
  }
  else if ( !SeTokenDoesNotTrackSessionObject )
  {
    SessionObjectById = MmGetSessionObjectById(SessionId);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Object + 48), 1u);
  _InterlockedOr(v18, 0);
  if ( *(_BYTE *)(Object + 204) )
  {
    _InterlockedOr(v18, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    v12 = (*(_DWORD *)(Object + 200) & 0x4000) == 0;
    *(_BYTE *)(Object + 204) = 1;
    if ( v12
      || (v13 = *(_DWORD *)(Object + 120), v13 == v9)
      || (SepDereferenceLowBoxNumberEntry(v13, *(_QWORD *)(Object + 1080)),
          *(_QWORD *)(Object + 1080) = 0LL,
          LOBYTE(v14) = 1,
          SepSetTokenSessionById(Object, v9, v14, (_DWORD)SessionObjectById, (__int64)&Objecta),
          v15 = SepSetTokenLowboxNumber(Object, *(_QWORD *)(Object + 784)),
          v15 >= 0) )
    {
      LOBYTE(v11) = 1;
      SepSetTokenSessionById(Object, v9, v11, (_DWORD)SessionObjectById, (__int64)&Objecta);
      _InterlockedOr(v18, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Objecta )
        ObfDereferenceObject(Objecta);
      if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
        SepAuditAssignPrimaryToken(Process, Object);
      ObfReferenceObject((PVOID)Object);
      v16 = ObFastReplaceObject((volatile __int64 *)&Process[1].Affinity.Bitmap[5], Object);
      if ( v16 )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 48), 1u);
        _InterlockedOr(v18, 0);
        *(_BYTE *)(v16 + 204) = 0;
        _InterlockedOr(v18, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        result = 0LL;
        *a3 = v16;
      }
      else
      {
        return 3221225596LL;
      }
    }
    else
    {
      _InterlockedOr(v18, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(Object + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Objecta )
        ObfDereferenceObject(Objecta);
      return (unsigned int)v15;
    }
  }
  return result;
}
