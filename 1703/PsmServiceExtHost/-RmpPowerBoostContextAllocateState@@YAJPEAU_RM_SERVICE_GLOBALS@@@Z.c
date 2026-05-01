/*
 * XREFs of ?RmpPowerBoostContextAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001EE84
 * Callers:
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001ED9C (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPowerBoostContextAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = TpAllocTimer(&v5, RmpPowerBoostWatchdogCallback, a1, 0LL);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *((_QWORD *)a1 + 20) = v5;
    v2 = 0;
    v5 = 0LL;
  }
  if ( v3 )
    TpReleaseTimer();
  return (unsigned int)v2;
}
