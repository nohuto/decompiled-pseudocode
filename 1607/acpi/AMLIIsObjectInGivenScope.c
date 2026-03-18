/*
 * XREFs of AMLIIsObjectInGivenScope @ 0x1C0024B00
 * Callers:
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C002499C (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4 (ACPIIoctlGetDeviceSpecificData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIIsObjectInGivenScope(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // dl
  __int64 v6; // rcx

  v4 = -1073741767;
  v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v6 )
  {
    while ( v6 != *a2 )
    {
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = 0;
  }
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
  return v4;
}
