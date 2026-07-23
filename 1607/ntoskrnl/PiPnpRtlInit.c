/*
 * XREFs of PiPnpRtlInit @ 0x140551E10
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x140551F28 (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x140551F4C (PiDrvDbInit.c)
 *     _PnpCtxOpenMachine @ 0x140579A88 (_PnpCtxOpenMachine.c)
 */

int __fastcall PiPnpRtlInit(unsigned int a1)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( a1 )
    return PiDrvDbInit(a1);
  qword_14031EFB8 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  result = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( result >= 0 )
  {
    result = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( result >= 0 )
    {
      result = PnpCtxOpenMachine(v4, v3, v5, 0);
      if ( result >= 0 )
      {
        result = PnpCtxSetNtPlugPlayRoutine(v6, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
        if ( result >= 0 )
        {
          result = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
          if ( result >= 0 )
          {
            result = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
            if ( result >= 0 )
            {
              result = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
              if ( result >= 0 )
              {
                result = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                if ( result >= 0 )
                {
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 312LL),
                    (__int64)PiPnpRtlObjectActionCallback);
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 328LL),
                    (__int64)PiPnpRtlCmActionCallback);
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 320LL),
                    (__int64)PiPnpRtlObjectEventCallback);
                  return PiDrvDbInit(a1);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
