/*
 * XREFs of RmpActivityHostComputeAndApplyExecutionSpeed @ 0x180004D90
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     RmpActivityHostApplyExecutionSpeed @ 0x180004E7C (RmpActivityHostApplyExecutionSpeed.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyExecutionSpeed(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // r10d
  int v3; // r11d
  int v4; // eax
  int v5; // ecx
  __int64 result; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1LL, v7);
  if ( !RmpActivityHostEnumerateResourceSetGetNext(v7) )
    goto LABEL_13;
  while ( RmpActivityHostEnumerateResourceSetGetNext(v7) )
    ;
  if ( v2 == v3 )
LABEL_13:
    v2 = 1;
  v4 = *((_DWORD *)a1 + 234);
  if ( ((v4 & 0x40) != 0 || (v4 & 0xEu) >= 8 && (v4 & 0x30u) >= 0x20) && v2 <= 1 )
    v2 = 1;
  v5 = *((_DWORD *)a1 + 10);
  if ( v5 )
    result = 0LL;
  else
    result = *((unsigned int *)a1 + 146);
  *((_DWORD *)a1 + 172) = v2;
  if ( !v5 && (_DWORD)result == 2 )
    return RmpActivityHostApplyExecutionSpeed(a1);
  return result;
}
