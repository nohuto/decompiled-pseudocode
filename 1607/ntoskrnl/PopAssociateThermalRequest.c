/*
 * XREFs of PopAssociateThermalRequest @ 0x14056C5C0
 * Callers:
 *     PoCreateThermalRequest @ 0x14056C4C8 (PoCreateThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140144FE0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopGetDope @ 0x140145054 (PopGetDope.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopDiagTraceThermalRequest @ 0x14052DCF8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14052DD74 (PopDiagTraceCoolingExtension.c)
 *     PopAcquireCoolingInterface @ 0x14056C778 (PopAcquireCoolingInterface.c)
 *     PopCleanCoolingExtension @ 0x14066B8F0 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  __int64 Dope; // rsi
  _QWORD *PoolWithTag; // rax
  int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rcx

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
  {
LABEL_9:
    if ( a3 && (v9 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64)), v9 < 0) )
    {
      PopReleaseRwLock(&PopCoolingExtensionLock);
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 64) + 32LL));
      v11 = *(_QWORD *)(Dope + 64);
      *(_QWORD *)(a1 + 32) = v11;
      v12 = v11 + 16;
      v13 = *(__int64 **)(v12 + 8);
      if ( *v13 != v12 )
        __fastfail(3u);
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)a1 = v12;
      *v13 = a1;
      *(_QWORD *)(v12 + 8) = a1;
      *(_BYTE *)(a1 + 18) = 1;
      PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_ADD);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
        PopThermalUpdateTelemetryClientCount(1);
      PopReleaseRwLock((signed __int64 *)(*(_QWORD *)(Dope + 64) + 32LL));
      PopReleaseRwLock(&PopCoolingExtensionLock);
      v9 = 0;
    }
    goto LABEL_14;
  }
  PopReleaseRwLock(&PopCoolingExtensionLock);
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
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
      if ( !*(_QWORD *)(Dope + 64) )
      {
        v10 = (_QWORD *)qword_140303278;
        if ( *(__int64 **)qword_140303278 != &PopCoolingExtensionList )
          __fastfail(3u);
        *v6 = &PopCoolingExtensionList;
        v6[1] = v10;
        *v10 = v6;
        qword_140303278 = (__int64)v6;
        *(_QWORD *)(Dope + 64) = v6;
        PopDiagTraceCoolingExtension((__int64)v6, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
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
