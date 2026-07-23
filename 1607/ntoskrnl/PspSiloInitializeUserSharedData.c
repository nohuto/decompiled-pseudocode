/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x14067EE9C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ExIsMultiSessionSku @ 0x14057F828 (ExIsMultiSessionSku.c)
 *     PspSiloInitializeSuiteMask @ 0x14067EE3C (PspSiloInitializeSuiteMask.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406891EC (RtlpGetNtProductTypeFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(__int64 a1)
{
  __int64 v2; // rsi
  _DWORD *ServerSiloGlobals; // rdi
  int NtProductTypeFromRegistry; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = PsAttachSiloToCurrentThread(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&v6);
  if ( NtProductTypeFromRegistry >= 0 )
  {
    ServerSiloGlobals[256] = v6;
    NtProductTypeFromRegistry = ExIsMultiSessionSku(&v6);
    if ( NtProductTypeFromRegistry >= 0 )
    {
      *((_BYTE *)ServerSiloGlobals + 1032) = v6;
      NtProductTypeFromRegistry = PspSiloInitializeSuiteMask((__int64)(ServerSiloGlobals + 252));
    }
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)NtProductTypeFromRegistry;
}
