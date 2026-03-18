/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x140669BC8
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1403EAEEC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PfSnBeginAppLaunch @ 0x1403E64A0 (PfSnBeginAppLaunch.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, KPROCESSOR_MODE a2)
{
  int v2; // esi
  NTSTATUS v3; // edi
  PVOID v4; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v3 = ObReferenceObjectByHandleWithTag(
             *(HANDLE *)(a1 + 8),
             8u,
             (POBJECT_TYPE)PsProcessType,
             a2,
             0x73576650u,
             &Object,
             0LL);
      if ( v3 < 0 )
      {
        v4 = Object;
      }
      else
      {
        v4 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v2 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v7);
        }
        PfSnBeginAppLaunch((__int64)v4, 0LL, 9);
        v3 = 0;
        if ( v2 )
          KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v3;
}
