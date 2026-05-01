/*
 * XREFs of RmpActivityHostComputeAndApplyAffinity @ 0x180040BF4
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpEnforcementApplyLimits @ 0x1800400B4 (RmpEnforcementApplyLimits.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyAffinity(_OWORD *a1)
{
  __int128 v1; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // r10
  unsigned int v7; // r11d
  _OWORD v9[3]; // [rsp+20h] [rbp-29h] BYREF
  __int128 v10; // [rsp+50h] [rbp+7h]
  __int128 v11; // [rsp+60h] [rbp+17h]
  __int64 v12[4]; // [rsp+70h] [rbp+27h] BYREF

  v1 = a1[40];
  v9[0] = a1[39];
  v3 = a1[41];
  v9[1] = v1;
  v4 = a1[42];
  v9[2] = v3;
  v5 = a1[43];
  v10 = v4;
  v11 = v5;
  RmpActivityHostEnumerateResourceSetBegin((__int64)a1, 1, v12);
  while ( RmpActivityHostEnumerateResourceSetGetNext(v12) )
    ;
  if ( v6 != *((_QWORD *)&v10 + 1) )
  {
    BYTE12(v11) |= 4u;
    *((_QWORD *)&v10 + 1) = v6;
    return (unsigned int)RmpEnforcementApplyLimits((__int64)a1, (__int64)v9);
  }
  return v7;
}
