/*
 * XREFs of ?CreateInstance@CDuckingManager@@SAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAV1@@Z @ 0x180041764
 * Callers:
 *     ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAUIAudioDuckingManager@@@Z @ 0x1800415C0 (-GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAUIAud.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z @ 0x1800417D4 (--0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z.c)
 */

__int64 __fastcall CDuckingManager::CreateInstance(
        struct IAudioSessionManagerProviderInfo *a1,
        struct CDuckingManager **a2)
{
  unsigned int v2; // ebx
  CDuckingManager *v5; // rax
  struct CDuckingManager *v6; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = (CDuckingManager *)operator new(0x148uLL);
    if ( v5 )
      v6 = CDuckingManager::CDuckingManager(v5, a1);
    else
      v6 = 0LL;
    if ( v6 )
      *a2 = v6;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
