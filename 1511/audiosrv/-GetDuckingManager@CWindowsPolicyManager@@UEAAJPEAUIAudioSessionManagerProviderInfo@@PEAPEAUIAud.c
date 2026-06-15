/*
 * XREFs of ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAUIAudioDuckingManager@@@Z @ 0x18003E210
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18003E024 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ?CreateInstance@CDuckingManager@@SAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAV1@@Z @ 0x18003E3AC (-CreateInstance@CDuckingManager@@SAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetDuckingManager(
        CWindowsPolicyManager *this,
        struct IAudioSessionManagerProviderInfo *a2,
        struct IAudioDuckingManager **a3)
{
  struct IAudioDuckingManager *v3; // rbx
  int Instance; // r9d
  char *v6; // rdi

  v3 = 0LL;
  Instance = 0;
  if ( a2 && a3 )
  {
    v6 = (char *)this + 56;
    if ( *((_QWORD *)this + 7)
      || (Instance = CDuckingManager::CreateInstance(a2, (struct CDuckingManager **)this + 7), Instance >= 0) )
    {
      if ( *(_QWORD *)v6 )
        v3 = (struct IAudioDuckingManager *)(*(_QWORD *)v6 + 24LL);
      *a3 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 8LL));
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Instance;
}
