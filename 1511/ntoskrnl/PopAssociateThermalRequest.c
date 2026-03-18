/*
 * XREFs of PopAssociateThermalRequest @ 0x14054C3E0
 * Callers:
 *     PoCreateThermalRequest @ 0x14054C2E8 (PoCreateThermalRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopAcquireCoolingInterface @ 0x14054C598 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14054E730 (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x1406333F8 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  __int64 Dope; // rsi
  _QWORD *PoolWithTag; // rax
  int v9; // edi
  __int64 **v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
  {
LABEL_9:
    if ( a3 && (v9 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64)), v9 < 0) )
    {
      PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
    }
    else
    {
      PopAcquireRwLockExclusive(*(_QWORD *)(Dope + 64) + 32LL);
      v11 = *(_QWORD *)(Dope + 64);
      *(_QWORD *)(a1 + 32) = v11;
      v12 = v11 + 16;
      v13 = *(_QWORD **)(v12 + 8);
      *(_QWORD *)a1 = v12;
      *(_QWORD *)(a1 + 8) = v13;
      if ( *v13 != v12 )
        __fastfail(3u);
      *v13 = a1;
      *(_QWORD *)(v12 + 8) = a1;
      *(_BYTE *)(a1 + 18) = 1;
      PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_ADD);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
        PopThermalUpdateTelemetryClientCount(1);
      PopReleaseRwLock((signed __int64 *)(*(_QWORD *)(Dope + 64) + 32LL));
      PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
      v9 = 0;
    }
    goto LABEL_14;
  }
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6C6F4350u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  v6[3] = v6 + 2;
  v6[2] = v6 + 2;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[4] = 0LL;
  *((_BYTE *)v6 + 66) = 100;
  v6[6] = a2;
  v9 = PopAcquireCoolingInterface(v6);
  if ( v9 >= 0 )
  {
    *((_BYTE *)v6 + 64) = 1;
    if ( !a3 || (v9 = PopRegisterCoolingExtensionProtection(v6), v9 >= 0) )
    {
      PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
      if ( !*(_QWORD *)(Dope + 64) )
      {
        v10 = (__int64 **)qword_1402DE9B8;
        *v6 = &PopCoolingExtensionList;
        v6[1] = v10;
        if ( *v10 != &PopCoolingExtensionList )
          __fastfail(3u);
        *v10 = v6;
        qword_1402DE9B8 = (__int64)v6;
        *(_QWORD *)(Dope + 64) = v6;
        PopDiagTraceCoolingExtension(v6, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
        v6 = 0LL;
        a3 = 0;
      }
      goto LABEL_9;
    }
  }
LABEL_14:
  if ( v6 )
    PopCleanCoolingExtension(v6);
  return (unsigned int)v9;
}
