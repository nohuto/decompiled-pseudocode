/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18000E140
 * Callers:
 *     <none>
 * Callees:
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x18001830C (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 */

__int64 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, unsigned int a2, enum ResourceType a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( g_PlaybackManager )
    return CPlaybackManager::UseOfResourceAllowed(this, (CProcess *)((char *)this - 16), a2, a3);
  return result;
}
