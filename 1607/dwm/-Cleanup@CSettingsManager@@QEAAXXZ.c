/*
 * XREFs of ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140002A30
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001B60 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002AA0 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::Cleanup(RTL_SRWLOCK *this)
{
  HKEY Ptr; // rcx
  HKEY v3; // rcx
  HKEY v4; // rcx

  AcquireSRWLockExclusive(this + 5);
  Ptr = (HKEY)this[1].Ptr;
  if ( Ptr )
  {
    RegCloseKey(Ptr);
    this[1].Ptr = 0LL;
  }
  v3 = (HKEY)this[2].Ptr;
  if ( v3 )
  {
    RegCloseKey(v3);
    this[2].Ptr = 0LL;
  }
  v4 = (HKEY)this[4].Ptr;
  if ( v4 )
  {
    RegCloseKey(v4);
    this[4].Ptr = 0LL;
  }
  ReleaseSRWLockExclusive(this + 5);
}
