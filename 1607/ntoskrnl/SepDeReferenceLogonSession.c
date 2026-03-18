/*
 * XREFs of SepDeReferenceLogonSession @ 0x1404E50DC
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140080760 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400AFF8C (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x140422458 (ObfDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1404E52A4 (SepInformLsaOfDeletedLogon.c)
 *     ObDestroyHandleRevocationBlock @ 0x1404E5328 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1404E53E4 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14054A5F0 (SepInformFileSystemsOfDeletedLogon.c)
 *     SepDeleteLogonSessionSidValues @ 0x140692EB8 (SepDeleteLogonSessionSidValues.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v6; // rsi
  _QWORD *v7; // rcx
  __int64 *i; // rbx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rsi
  void *v14; // rcx
  _QWORD *v15; // [rsp+60h] [rbp+18h]

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  CurrentThread = KeGetCurrentThread();
  v15 = (_QWORD *)(SepLogonSessions + 8 * v4);
  --CurrentThread->KernelApcDisable;
  v6 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = v15;
  for ( i = (__int64 *)*v15; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v6);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i[20] == a2 && *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
    v7 = i;
  }
  v9 = _InterlockedExchangeAdd64(i + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  v11 = v9 - 1;
  if ( v10 )
  {
    if ( v11 )
      __fastfail(0xEu);
    *v7 = *i;
    ExReleaseResourceLite(v6);
    KeLeaveCriticalRegion();
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      SepDeReferenceLogonSession(i + 2, i[20]);
    v12 = (void *)i[6];
    if ( v12 )
    {
      ObfDereferenceObject(v12);
      i[6] = 0LL;
    }
    v13 = (void *)i[5];
    if ( v13 )
    {
      i[5] = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObfDereferenceDeviceMap(v13);
    }
    if ( (i[4] & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v14 = (void *)i[8];
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    SepInformLsaOfDeletedLogon(a1, i[20], i);
    SepDeleteSessionLowboxEntries();
  }
  else
  {
    ExReleaseResourceLite(v6);
    KeLeaveCriticalRegion();
  }
}
