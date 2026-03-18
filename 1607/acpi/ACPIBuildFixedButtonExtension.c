/*
 * XREFs of ACPIBuildFixedButtonExtension @ 0x1C000535C
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C000530C (ACPIFixedFeatureButtonInitialize.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C000CDE8 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildFixedButtonExtension(__int64 a1, __int64 *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  char *PoolWithTag; // rax

  if ( AcpiBuildFixedButtonEnumerated )
    goto LABEL_12;
  AcpiBuildFixedButtonEnumerated = 1;
  v3 = (*((_WORD *)AcpiInformation + 56) & 0x100) != 0;
  if ( (*((_WORD *)AcpiInformation + 56) & 0x200) != 0 )
    v3 |= 2u;
  if ( !v3 || (AcpiOverrideAttributes & 0x400000) != 0 )
  {
LABEL_12:
    *a2 = 0LL;
  }
  else
  {
    result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, a2);
    if ( (int)result < 0 )
      goto LABEL_10;
    v5 = *a2;
    if ( !*a2 )
      goto LABEL_10;
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x18000000360000uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 184));
    *(_DWORD *)(v5 + 200) = v3 | 0x80000000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
    *(_QWORD *)(v5 + 560) = PoolWithTag;
    if ( !PoolWithTag )
    {
      _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x2000000000000uLL);
      result = 3221225626LL;
LABEL_10:
      *a2 = 0LL;
      return result;
    }
    strcpy(PoolWithTag, "ACPI\\FixedButton");
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0xA00000000000uLL);
  }
  return 0LL;
}
