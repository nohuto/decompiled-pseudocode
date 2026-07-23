/*
 * XREFs of SeExchangePrimaryToken @ 0x140692858
 * Callers:
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x14007C264 (SepSetTrustLevelForProcessToken.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 */

__int64 __fastcall SeExchangePrimaryToken(struct _KPROCESS *a1, __int64 a2, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  unsigned int SessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  struct _KTHREAD *CurrentThread; // rcx
  int v14; // r8d
  int v15; // r14d
  PVOID v16; // rcx
  unsigned int v17; // ecx
  int v18; // r8d
  ULONG_PTR v19; // rbx
  struct _KTHREAD *v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  PVOID *p_Object; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  v12 = SessionId;
  if ( SessionId == -1 )
  {
    v12 = 0;
  }
  else if ( !SeTokenDoesNotTrackSessionObject )
  {
    SessionObjectById = MmGetSessionObjectById(SessionId, v10, v11);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v21, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v21, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v15 = SepSetTrustLevelForProcessToken(a2, (__int64)a1, &v23);
  if ( v15 < 0 )
  {
    _InterlockedOr(v21, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( !SessionObjectById )
      return (unsigned int)v15;
    v16 = SessionObjectById;
LABEL_14:
    ObfDereferenceObject(v16);
    return (unsigned int)v15;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v17 = *(_DWORD *)(a2 + 120);
    if ( v17 != v12 )
    {
      SepDereferenceLowBoxNumberEntry(v17, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      p_Object = &Object;
      LOBYTE(v18) = 1;
      SepSetTokenSessionById(a2, v12, v18, (__int64)SessionObjectById);
      v15 = SepSetTokenLowboxNumber(a2, *(_QWORD *)(a2 + 784));
      if ( v15 < 0 )
      {
        _InterlockedOr(v21, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KeLeaveCriticalRegion();
        v16 = Object;
        if ( !Object )
          return (unsigned int)v15;
        goto LABEL_14;
      }
    }
  }
  LOBYTE(v14) = 1;
  p_Object = &Object;
  SepSetTokenSessionById(a2, v12, v14, (__int64)SessionObjectById);
  _InterlockedOr(v21, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken((__int64)a1, a2);
  ObfReferenceObject((PVOID)a2);
  v19 = ObFastReplaceObject((volatile __int64 *)&a1[1].Affinity.Bitmap[5], a2);
  if ( !v19 )
    return 3221225596LL;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 48), 1u);
  _InterlockedOr(v21, 0);
  *(_BYTE *)(v19 + 204) = 0;
  _InterlockedOr(v21, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v19 + 48));
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v19;
  return result;
}
