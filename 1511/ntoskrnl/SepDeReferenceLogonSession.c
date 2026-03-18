/*
 * XREFs of SepDeReferenceLogonSession @ 0x14049B694
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x1400EF720 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400D52A0 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x14049B860 (SepInformLsaOfDeletedLogon.c)
 *     ObDestroyHandleRevocationBlock @ 0x14049B8E4 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14049B9AC (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14049BCFC (SepInformFileSystemsOfDeletedLogon.c)
 *     SepDeleteLogonSessionSidValues @ 0x140653B34 (SepDeleteLogonSessionSidValues.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  __int64 v3; // r8
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
  __int64 v15; // rcx
  _QWORD *v16; // [rsp+40h] [rbp+8h]

  v3 = *a1 & 0xF;
  CurrentThread = KeGetCurrentThread();
  v16 = (_QWORD *)(SepLogonSessions + 8 * v3);
  --CurrentThread->KernelApcDisable;
  v6 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = v16;
  for ( i = (__int64 *)*v16; ; i = (__int64 *)*i )
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
    SepDeleteSessionLowboxEntries(v15);
  }
  else
  {
    ExReleaseResourceLite(v6);
    KeLeaveCriticalRegion();
  }
}
