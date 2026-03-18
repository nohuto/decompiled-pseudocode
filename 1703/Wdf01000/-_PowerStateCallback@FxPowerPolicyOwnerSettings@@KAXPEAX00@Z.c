/*
 * XREFs of ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C0038CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0025868 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::_PowerStateCallback(void *Context, void *Argument1, void *Argument2)
{
  __int64 v3; // rsi
  _KEVENT *v6; // rcx
  FxPkgPnp *v7; // rcx

  if ( Argument1 == (void *)3 )
  {
    v3 = *((_QWORD *)Context + 53);
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject((PVOID)(v3 + 728), Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      *(_QWORD *)(v3 + 760) = KeGetCurrentThread();
    if ( Argument2 )
    {
      if ( Argument2 == (void *)1 )
      {
        v7 = (FxPkgPnp *)*((_QWORD *)Context + 53);
        *((_BYTE *)Context + 534) = 1;
        FxPkgPnp::SaveState(v7, 1u);
      }
    }
    else
    {
      FxPkgPnp::SaveState(*((FxPkgPnp **)Context + 53), 1u);
      *((_BYTE *)Context + 534) = 0;
    }
    v6 = (_KEVENT *)(*((_QWORD *)Context + 53) + 728LL);
    v6[1].Header.WaitListHead.Flink = 0LL;
    KeSetEvent(v6, 0, 0);
    KeLeaveCriticalRegion();
  }
}
