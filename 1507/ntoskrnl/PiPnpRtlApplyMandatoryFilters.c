/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C
 * Callers:
 *     PiDqQueryEnumObject @ 0x14043E924 (PiDqQueryEnumObject.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14043FFC0 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     PiUEventApplyAdditionalFilters @ 0x14045FB50 (PiUEventApplyAdditionalFilters.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     PiCMMandatoryFilterCallback @ 0x140561074 (PiCMMandatoryFilterCallback.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14043EA34 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14043EAE8 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x14043ED78 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x14043FE74 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *IsServiceSession,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS SessionIdToken; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rax
  int v15; // ebx
  int v16; // ebx
  ULONG SessionId[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = IsServiceSession;
  ClientToken = IsServiceSession->ClientToken;
  if ( !IsServiceSession->ClientToken )
    ClientToken = IsServiceSession->PrimaryToken;
  SessionIdToken = SeQuerySessionIdTokenEx(ClientToken, SessionId, (PBOOLEAN)&IsServiceSession);
  if ( SessionIdToken >= 0 )
  {
    if ( (_BYTE)IsServiceSession )
    {
      LOBYTE(IsServiceSession) = 0;
      SessionIdToken = PiAuVerifyAccessToObject(
                         0xF0000u,
                         PiAuLocalSystemSecurityObject,
                         (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
                         v6,
                         (__int64)&IsServiceSession);
      if ( SessionIdToken < 0 )
        return (unsigned int)SessionIdToken;
      if ( (_BYTE)IsServiceSession )
      {
        v14 = a6;
LABEL_13:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        if ( v16 != 2 )
          goto LABEL_13;
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
