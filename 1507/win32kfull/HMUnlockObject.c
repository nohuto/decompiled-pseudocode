/*
 * XREFs of HMUnlockObject @ 0x1C00DF9F0
 * Callers:
 *     ThreadLockExchangeAlways @ 0x1C00DF9CC (ThreadLockExchangeAlways.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01453D0 (Win32kRIMDevChangeCallback.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C39E0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAA28 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01F0A68 (HMUnlockDestroyObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 8))-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
