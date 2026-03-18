/*
 * XREFs of HMUnlockObject @ 0x1C009684C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C55A0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAF38 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01F09CC (HMUnlockDestroyObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 8))-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
