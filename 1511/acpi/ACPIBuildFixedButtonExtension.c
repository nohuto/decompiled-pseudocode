/*
 * XREFs of ACPIBuildFixedButtonExtension @ 0x1C0005044
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0004FF4 (ACPIFixedFeatureButtonInitialize.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C000BA9C (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildFixedButtonExtension(__int64 a1, __int64 *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  char *PoolWithTag; // rax

  if ( AcpiBuildFixedButtonEnumerated )
  {
    *a2 = 0LL;
    return 0LL;
  }
  AcpiBuildFixedButtonEnumerated = 1;
  v3 = (*((_WORD *)AcpiInformation + 56) & 0x100) != 0;
  if ( (*((_WORD *)AcpiInformation + 56) & 0x200) != 0 )
    v3 |= 2u;
  if ( v3 )
  {
    result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, a2);
    if ( (int)result >= 0 )
    {
      v5 = *a2;
      if ( *a2 )
      {
        _InterlockedOr64((volatile signed __int64 *)v5, 0x18000000360000uLL);
        KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 176));
        *(_DWORD *)(v5 + 192) = v3 | 0x80000000;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
        *(_QWORD *)(v5 + 552) = PoolWithTag;
        if ( PoolWithTag )
        {
          strcpy(PoolWithTag, "ACPI\\FixedButton");
          _InterlockedOr64((volatile signed __int64 *)v5, 0xA00000000000uLL);
          return 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)v5, 0x2000000000000uLL);
        result = 3221225626LL;
      }
    }
  }
  else
  {
    result = 0LL;
  }
  *a2 = 0LL;
  return result;
}
