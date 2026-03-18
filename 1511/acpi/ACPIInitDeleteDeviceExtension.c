/*
 * XREFs of ACPIInitDeleteDeviceExtension @ 0x1C003C46C
 * Callers:
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C718 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C003C73C (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalMoveList @ 0x1C001C65C (ACPIInternalMoveList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021C10 (ExFreeToNPagedLookasideList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0036678 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitRemovePowerNodes @ 0x1C003C854 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C003CD54 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0040220 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AMLIFinalizeObject @ 0x1C0042078 (AMLIFinalizeObject.c)
 */

void __fastcall ACPIInitDeleteDeviceExtension(volatile signed __int32 *Entry)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  volatile signed __int32 *v20; // rdi
  unsigned __int64 v21; // r8
  __int64 **v22; // rcx

  v2 = 0;
  v3 = Entry + 88;
  while ( !*v3 )
  {
    ++v2;
    ++v3;
    if ( v2 > 4 )
      goto LABEL_4;
  }
  if ( (Entry[226] & 0x20000) != 0 || (*Entry & 0x800LL) == 0 )
  {
LABEL_4:
    ACPIInitRemovePowerNodes(Entry);
    PnpiCleanupForceActiveBothInterrupts(Entry);
    ACPIInternalInterruptPolarityCacheCleanup(Entry);
    if ( Entry )
    {
      while ( 1 )
      {
        v4 = Entry + 190;
        v5 = *((_QWORD *)Entry + 95);
        v6 = (_QWORD *)*((_QWORD *)Entry + 96);
        if ( *(volatile signed __int32 **)(v5 + 8) != Entry + 190 || (_QWORD *)*v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        *((_QWORD *)Entry + 96) = Entry + 190;
        *v4 = v4;
        ACPICleanDeviceDependenciesWithTreeLock((__int64)Entry);
        v7 = Entry + 198;
        v8 = *((_QWORD *)Entry + 99);
        v9 = (_QWORD *)*((_QWORD *)Entry + 100);
        if ( *(volatile signed __int32 **)(v8 + 8) != Entry + 198 || (_QWORD *)*v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = Entry + 194;
        *((_QWORD *)Entry + 100) = Entry + 198;
        *v7 = v7;
        if ( (_QWORD *)*v10 != v10 )
          ACPIInternalMoveList(v10, (__int64)&AcpiUnresolvedEjectList);
        if ( (*(_QWORD *)Entry & 0x80000000000LL) != 0 )
        {
          v11 = *((_QWORD *)Entry + 88);
          if ( v11 )
          {
            AMLIFinalizeObject(v11, 0LL);
            AMLIDereferenceHandleEx(*((volatile signed __int32 **)Entry + 88));
            *((_QWORD *)Entry + 88) = 0LL;
          }
        }
        if ( (*(_QWORD *)Entry & 0x200000000000LL) != 0 )
        {
          v12 = (void *)*((_QWORD *)Entry + 69);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
        }
        if ( (*(_QWORD *)Entry & 0x400000000000LL) != 0 )
        {
          v13 = (void *)*((_QWORD *)Entry + 70);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
        v14 = (void *)*((_QWORD *)Entry + 77);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        v15 = (void *)*((_QWORD *)Entry + 78);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v16 = (void *)*((_QWORD *)Entry + 79);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        if ( *(__int64 *)Entry < 0 )
        {
          v17 = (void *)*((_QWORD *)Entry + 22);
          if ( v17 )
            ExFreePoolWithTag(v17, 0);
        }
        if ( (*Entry & 0x8000000) != 0 )
        {
          v18 = (void *)*((_QWORD *)Entry + 24);
          if ( v18 )
          {
            ExFreePoolWithTag(v18, 0x54706341u);
            *((_QWORD *)Entry + 24) = 0LL;
          }
        }
        v19 = (void *)*((_QWORD *)Entry + 109);
        if ( v19 )
          ExFreePoolWithTag(v19, 0x4D706341u);
        v20 = (volatile signed __int32 *)*((_QWORD *)Entry + 92);
        ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)Entry);
        if ( !v20 || _InterlockedExchangeAdd(v20 + 169, 0xFFFFFFFF) != 1 )
          break;
        Entry = v20;
      }
    }
    return;
  }
  ACPIInitReferenceDeviceExtension((__int64)Entry);
  *((_DWORD *)Entry + 210) = *(_DWORD *)(**((_QWORD **)Entry + 88) + 32LL);
  v22 = (__int64 **)qword_1C0059C08;
  *((_QWORD *)Entry + 103) = &AcpiDevicesWhichMightNeedEnumerationList;
  *((_QWORD *)Entry + 104) = v22;
  if ( *v22 != &AcpiDevicesWhichMightNeedEnumerationList )
    __fastfail(3u);
  *v22 = (__int64 *)(Entry + 206);
  qword_1C0059C08 = (__int64)(Entry + 206);
  _InterlockedOr64((volatile signed __int64 *)Entry + 113, v21);
}
