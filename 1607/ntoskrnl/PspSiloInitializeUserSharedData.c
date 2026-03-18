/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x14067EDB8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067E960 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140009D20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140009D40 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     ExIsMultiSessionSku @ 0x14057F37C (ExIsMultiSessionSku.c)
 *     PspSiloInitializeSuiteMask @ 0x14067ED58 (PspSiloInitializeSuiteMask.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140689108 (RtlpGetNtProductTypeFromRegistry.c)
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
