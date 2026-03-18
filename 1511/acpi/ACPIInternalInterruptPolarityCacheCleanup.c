/*
 * XREFs of ACPIInternalInterruptPolarityCacheCleanup @ 0x1C003CD54
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalInterruptPolarityCacheCleanup(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v1 = (_QWORD *)(a1 + 656);
  v2 = *(_QWORD **)(a1 + 656);
  if ( v2 != v1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0x43706341u);
      v2 = v3;
    }
    while ( v3 != v1 );
  }
  v1[1] = v1;
  *v1 = v1;
}
