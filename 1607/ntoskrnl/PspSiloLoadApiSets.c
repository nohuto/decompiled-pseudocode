/*
 * XREFs of PspSiloLoadApiSets @ 0x14067EF24
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ApiSetReleaseSchema @ 0x140231C84 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x14055FBE8 (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x14067E27C (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaEx @ 0x1406BC000 (ApiSetLoadSchemaEx.c)
 */

__int64 __fastcall PspSiloLoadApiSets(__int64 a1)
{
  __int64 v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+28h] [rbp-18h] BYREF
  const wchar_t *v8; // [rsp+30h] [rbp-10h]
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v7 = 4980810;
  v8 = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaEx(&v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v11, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(a1);
      ServerSiloGlobals[118] = v11;
      ServerSiloGlobals[119] = v6;
      *((_BYTE *)ServerSiloGlobals + 960) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
