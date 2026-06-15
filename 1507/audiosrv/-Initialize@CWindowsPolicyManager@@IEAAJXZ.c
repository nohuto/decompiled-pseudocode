/*
 * XREFs of ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x1800416E8
 * Callers:
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180038F9C (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180041524 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x18004190C (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180041974 (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::Initialize(struct CApplicationManager **this)
{
  int Instance; // edx

  Instance = CApplicationManager::CreateInstance(this + 6);
  if ( Instance >= 0 )
  {
    Instance = CStreamClassPolicyManager::CreateInstance(this + 5);
    if ( Instance >= 0 )
    {
      Instance = CPlaybackManager::CreateInstance(this + 4);
      if ( Instance >= 0 )
      {
        g_ApplicationManager = this[6];
        _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
        g_PlaybackManager = this[4];
        g_StreamClassPolicyManager = this[5];
      }
    }
  }
  return (unsigned int)Instance;
}
