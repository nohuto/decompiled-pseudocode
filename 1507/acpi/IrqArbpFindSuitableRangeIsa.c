/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C006E858
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C006E280 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0019848 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     AcpiCheckExternalConnection @ 0x1C006AC78 (AcpiCheckExternalConnection.c)
 *     IcIsInterruptTypeSecondary @ 0x1C006B8DC (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C006D670 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcGetPossibleInput @ 0x1C006E184 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C006EA6C (IcIsInputValid.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  ULONG Flags; // r13d
  __int16 v5; // di
  unsigned int v6; // r15d
  __int64 v7; // rdx
  char v8; // si
  int v9; // r10d
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // r8
  __int64 v13; // rdx
  char result; // al
  bool v15; // si
  int v16; // edi
  _BYTE v17[4]; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+54h] [rbp-15h]
  int i; // [rsp+58h] [rbp-11h] BYREF
  int v20; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  _BYTE v22[32]; // [rsp+68h] [rbp-1h] BYREF

  v2 = *(_DWORD *)a2;
  v21 = a1;
  Flags = 0;
  for ( i = 0; v2 <= *(_DWORD *)(a2 + 8); ++v2 )
  {
    v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v6 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &i) && (v8 = byte_1C0057014[8 * i], v8 != -1) )
    {
      if ( (v8 & 1) == 0 && !v5 || (v8 & 1) != 0 && v5 == 1 )
        continue;
    }
    else if ( IcIsInterruptTypeSecondary(v6) )
    {
      v15 = v5 != 1;
      AcpiCheckExternalConnection();
      v16 = -1073741822;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
      if ( ExternalTranslationInterface )
        v16 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v6, 0LL, v22);
      ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
      KeLeaveCriticalRegion();
      if ( v16 < 0 )
        continue;
      v8 = v22[16] | v15;
    }
    else if ( ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v20) )
    {
      v8 = v20 | (v5 != 1);
    }
    else
    {
      v8 = v5 != 1 ? 3 : 0;
    }
    if ( ((int)IcGetPossibleInput(v6, v7, v17) < 0 || v8 == v17[0]) && (unsigned __int8)IcIsInputValid(v6) )
    {
      v10 = *(_QWORD *)(a2 + 40);
      if ( (*(_DWORD *)(v10 + 36) & 1) != 0 )
        Flags |= 1u;
      v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL);
      v12 = *(_QWORD *)(a2 + 72);
      v13 = *(_QWORD *)(v10 + 40);
      v18 = v9;
      LOBYTE(v18) = (v11 & 1 ^ (2 * ((v8 & 8) != 0))) & 2 ^ v11 & 1;
      if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64))ProcessorFindIdtEntries)(
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
                  v13,
                  v12) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(v21 + 48),
             v2,
             v2,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        result = 1;
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) = 1LL;
        return result;
      }
    }
  }
  return 0;
}
