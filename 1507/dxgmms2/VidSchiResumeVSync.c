/*
 * XREFs of VidSchiResumeVSync @ 0x1C0076DEC
 * Callers:
 *     VidSchIsVSyncEnabled @ 0x1C0078930 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C007A1EC (VidSchiControlVSync.c)
 */

char __fastcall VidSchiResumeVSync(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  __int64 v3; // rdx
  int v4; // r14d
  char v5; // si

  v1 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
  v4 = *(unsigned __int8 *)(a1 + 1976);
  if ( (_BYTE)v4 )
  {
    if ( *(_DWORD *)(a1 + 1956) )
    {
      LOBYTE(v3) = 1;
      VidSchiControlVSync(a1, v3, 65539LL);
    }
    else
    {
      *(_BYTE *)(a1 + 1976) = 0;
    }
  }
  v5 = *(_BYTE *)(a1 + 1952);
  if ( v5 && !v4 )
    _InterlockedExchange((volatile __int32 *)(a1 + 2020), 1);
  ExReleaseResourceLite(v1);
  return v5;
}
