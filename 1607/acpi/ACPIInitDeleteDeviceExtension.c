/*
 * XREFs of ACPIInitDeleteDeviceExtension @ 0x1C004F634
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F96C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004F990 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000746C (ExFreeToNPagedLookasideList.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalMoveList @ 0x1C002AC40 (ACPIInternalMoveList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0045750 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004FAA8 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C00500AC (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0055F54 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AMLIFinalizeObject @ 0x1C00596B8 (AMLIFinalizeObject.c)
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
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  volatile signed __int32 *v23; // rdi
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx

  v2 = 0;
  v3 = Entry + 90;
  while ( !*v3 )
  {
    ++v2;
    ++v3;
    if ( v2 > 4 )
      goto LABEL_4;
  }
  if ( (Entry[228] & 0x20000) != 0 || (Entry[2] & 0x800LL) == 0 )
  {
LABEL_4:
    ACPIInitRemovePowerNodes(Entry);
    PnpiCleanupForceActiveBothInterrupts(Entry);
    ACPIInternalInterruptPolarityCacheCleanup(Entry);
    if ( Entry )
    {
      while ( 1 )
      {
        v4 = Entry + 192;
        v5 = *((_QWORD *)Entry + 96);
        v6 = (_QWORD *)*((_QWORD *)Entry + 97);
        if ( *(volatile signed __int32 **)(v5 + 8) != Entry + 192 || (_QWORD *)*v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        *((_QWORD *)Entry + 97) = Entry + 192;
        *v4 = v4;
        ACPICleanDeviceDependenciesWithTreeLock((__int64)Entry);
        v7 = Entry + 200;
        v8 = *((_QWORD *)Entry + 100);
        v9 = (_QWORD *)*((_QWORD *)Entry + 101);
        if ( *(volatile signed __int32 **)(v8 + 8) != Entry + 200 || (_QWORD *)*v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = Entry + 196;
        *((_QWORD *)Entry + 101) = Entry + 200;
        *v7 = v7;
        if ( (_QWORD *)*v10 != v10 )
          ACPIInternalMoveList(v10, (__int64)&AcpiUnresolvedEjectList);
        v11 = *((_QWORD *)Entry + 1);
        if ( (v11 & 0x80000000000LL) != 0 )
        {
          v12 = (const char *)qword_1C002C340;
          v13 = (const char *)qword_1C002C340;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v12 = (const char *)*((_QWORD *)Entry + 70);
            if ( (v11 & 0x400000000000LL) != 0 )
              v13 = (const char *)*((_QWORD *)Entry + 71);
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0xAu,
            (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
            *((_DWORD *)Entry + 178),
            (char)Entry,
            v12,
            v13);
          v14 = *((_QWORD *)Entry + 89);
          if ( v14 )
          {
            AMLIFinalizeObject(v14, 0LL);
            AMLIDereferenceHandleEx(*((volatile signed __int32 **)Entry + 89), 0LL);
            *((_QWORD *)Entry + 89) = 0LL;
          }
        }
        if ( (*((_QWORD *)Entry + 1) & 0x200000000000LL) != 0 )
        {
          v15 = (void *)*((_QWORD *)Entry + 70);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
        }
        if ( (*((_QWORD *)Entry + 1) & 0x400000000000LL) != 0 )
        {
          v16 = (void *)*((_QWORD *)Entry + 71);
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
        }
        v17 = (void *)*((_QWORD *)Entry + 78);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = (void *)*((_QWORD *)Entry + 79);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = (void *)*((_QWORD *)Entry + 80);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        if ( *((__int64 *)Entry + 1) < 0 )
        {
          v20 = (void *)*((_QWORD *)Entry + 23);
          if ( v20 )
            ExFreePoolWithTag(v20, 0);
        }
        if ( (Entry[2] & 0x8000000) != 0 )
        {
          v21 = (void *)*((_QWORD *)Entry + 25);
          if ( v21 )
          {
            ExFreePoolWithTag(v21, 0x54706341u);
            *((_QWORD *)Entry + 25) = 0LL;
          }
        }
        v22 = (void *)*((_QWORD *)Entry + 110);
        if ( v22 )
          ExFreePoolWithTag(v22, 0x4D706341u);
        v23 = (volatile signed __int32 *)*((_QWORD *)Entry + 93);
        ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)Entry);
        if ( !v23 || _InterlockedExchangeAdd(v23 + 171, 0xFFFFFFFF) != 1 )
          break;
        Entry = v23;
      }
    }
    return;
  }
  ACPIInitReferenceDeviceExtension((__int64)Entry);
  v25 = Entry + 208;
  *((_DWORD *)Entry + 212) = *(_DWORD *)(**((_QWORD **)Entry + 89) + 40LL);
  v26 = (_QWORD *)qword_1C0074008;
  if ( *(__int64 **)qword_1C0074008 != &AcpiDevicesWhichMightNeedEnumerationList )
    __fastfail(3u);
  *v25 = &AcpiDevicesWhichMightNeedEnumerationList;
  *((_QWORD *)Entry + 105) = v26;
  *v26 = v25;
  qword_1C0074008 = (__int64)(Entry + 208);
  _InterlockedOr64((volatile signed __int64 *)Entry + 114, v24);
}
