/*
 * XREFs of CmpRemoveHiveFromMapping @ 0x140658DD0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpRemoveHiveFromMapping(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax

  v5 = KeAbPreAcquire((ULONG_PTR)&CmpSIDMappingLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpSIDMappingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpSIDMappingLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *(&CmpSIDMappingLock + 1) = (ULONG_PTR)KeGetCurrentThread();
  v8 = CurrentIrql;
  v9 = 0;
  *((_DWORD *)&CmpSIDMappingLock + 12) = v8;
  if ( CmpSIDToHiveMappingCount )
  {
    v10 = (char *)CmpSIDToHiveMapping + 24;
    while ( *v10 != a1 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= CmpSIDToHiveMappingCount )
        goto LABEL_11;
    }
    --CmpSIDToHiveMappingCount;
    v11 = 32LL * v9;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v11 + 8), 0x65564D43u);
    memmove(
      (char *)CmpSIDToHiveMapping + v11,
      (char *)CmpSIDToHiveMapping + 32 * v9 + 32,
      32LL * (CmpSIDToHiveMappingCount - v9));
  }
LABEL_11:
  *(&CmpSIDMappingLock + 1) = 0LL;
  v12 = *((_BYTE *)&CmpSIDMappingLock + 48);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpSIDMappingLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpSIDMappingLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&CmpSIDMappingLock);
}
