/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x1404F9F88
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x1403F0920 (PiUEventApplyAdditionalFilters.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048BF34 (PiDqQueryApplyObjectEvent.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMMandatoryFilterCallback @ 0x1404F7868 (PiCMMandatoryFilterCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404F79DC (IopDeviceInterfaceFilterCallback.c)
 *     PiDqQueryEnumObject @ 0x1404F925C (PiDqQueryEnumObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404ED31C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiAuVerifyAccessToObject @ 0x1404F7F30 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404F9D54 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404F9E34 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x1404FA0C4 (SeQuerySessionIdTokenEx.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *IsServiceSession,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  int SessionIdToken; // ecx
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
                         (BOOLEAN *)&IsServiceSession);
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
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, (__int64)v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, (__int64)a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, (__int64)a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
