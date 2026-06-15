/*
 * XREFs of ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x1800045A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetDuckingManager(
        CWindowsPolicyManager *this,
        struct IAudioDuckingManager **a2)
{
  __int64 v2; // r8
  struct IAudioDuckingManager *v3; // rax

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  if ( v2 )
    v3 = (struct IAudioDuckingManager *)(v2 + 24);
  *a2 = v3;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 6) + 8LL));
  return 0LL;
}
