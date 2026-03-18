/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C0007410
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  const char *v6; // r15
  char **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v6 = *(const char **)(v1 + 552);
  if ( AcpiInternalDeviceFlagTable )
  {
    v7 = &AcpiInternalDeviceFlagTable;
    while ( !strstr(v6, *v7) )
    {
      v7 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
      if ( !*v7 )
        goto LABEL_7;
    }
    v8 = 4LL * v4;
    _InterlockedOr64((volatile signed __int64 *)v1, (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 904), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 2]);
    v2 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)v1, 0x200000000000uLL);
  v9 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1145652063LL);
  if ( !v9 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx(v9);
    *(_DWORD *)(a1 + 32) = 9;
    v3 = ACPIGet((_QWORD *)v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
