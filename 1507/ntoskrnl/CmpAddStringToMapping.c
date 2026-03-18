/*
 * XREFs of CmpAddStringToMapping @ 0x1405BFB4C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rdi
  _QWORD *v11; // rcx
  void *v12; // rcx
  unsigned __int8 v13; // di
  signed __int32 v14; // eax

  v6 = 0;
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpSIDMappingLock, 0LL, 0LL, a4);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpSIDMappingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpSIDMappingLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(&CmpSIDMappingLock + 1) = (ULONG_PTR)KeGetCurrentThread();
  *((_DWORD *)&CmpSIDMappingLock + 12) = CurrentIrql;
  if ( CmpSIDToHiveMappingCount == -1 )
  {
    v6 = -1073741675;
    goto LABEL_11;
  }
  if ( CmpSIDToHiveMappingCount + 1 < (unsigned int)CmpSIDToHiveMappingSize )
    goto LABEL_18;
  v10 = CmpSIDToHiveMapping;
  CmpSIDToHiveMapping = ExAllocatePoolWithTag(
                          PagedPool,
                          32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4),
                          0x65564D43u);
  v11 = CmpSIDToHiveMapping;
  if ( CmpSIDToHiveMapping )
  {
    CmpSIDToHiveMappingSize += 4;
    if ( !v10 )
      goto LABEL_9;
    memmove(CmpSIDToHiveMapping, v10, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
    ExFreePoolWithTag(v10, 0x65564D43u);
LABEL_18:
    v11 = CmpSIDToHiveMapping;
LABEL_9:
    v11[4 * (unsigned int)CmpSIDToHiveMappingCount + 3] = a2;
    *((_WORD *)CmpSIDToHiveMapping + 16 * (unsigned int)CmpSIDToHiveMappingCount) = *(_WORD *)a1;
    *((_WORD *)CmpSIDToHiveMapping + 16 * (unsigned int)CmpSIDToHiveMappingCount + 1) = *(_WORD *)a1;
    *((_QWORD *)CmpSIDToHiveMapping + 4 * (unsigned int)CmpSIDToHiveMappingCount + 1) = ExAllocatePoolWithTag(
                                                                                          PagedPool,
                                                                                          *(unsigned __int16 *)a1,
                                                                                          0x65564D43u);
    v12 = (void *)*((_QWORD *)CmpSIDToHiveMapping + 4 * (unsigned int)CmpSIDToHiveMappingCount + 1);
    if ( v12 )
    {
      memmove(v12, a1[1], *(unsigned __int16 *)a1);
      *((_DWORD *)CmpSIDToHiveMapping + 8 * (unsigned int)CmpSIDToHiveMappingCount++ + 4) = CmpComputeHashKey(
                                                                                              0,
                                                                                              (unsigned __int16 *)a1);
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  CmpSIDToHiveMapping = v10;
LABEL_16:
  v6 = -1073741670;
LABEL_11:
  *(&CmpSIDMappingLock + 1) = 0LL;
  v13 = *((_BYTE *)&CmpSIDMappingLock + 48);
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpSIDMappingLock, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpSIDMappingLock, v14);
  __writecr8(v13);
  KeAbPostRelease((ULONG_PTR)&CmpSIDMappingLock);
  return v6;
}
