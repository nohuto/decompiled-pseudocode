/*
 * XREFs of KeRelaxTimingConstraints @ 0x1401C3890
 * Callers:
 *     KdEnableDebugger @ 0x1401C1FF0 (KdEnableDebugger.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeRelaxTimingConstraints(int a1)
{
  bool v1; // dl
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = KeEnableWatchdogTimeout == 0;
  if ( a1 )
  {
    KeEnableWatchdogTimeout = 0;
  }
  else
  {
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v2 = KiProcessorBlock;
      v3 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v4 = *v2++;
        *(_DWORD *)(v4 + 22636) = 0;
        *(_DWORD *)(v4 + 23328) = 0;
        --v3;
      }
      while ( v3 );
    }
    KeEnableWatchdogTimeout = 1;
  }
  return v1;
}
