/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x14012DDE0
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14012DD00 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14057D704 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIntSteerGetSteeringMode(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v6; // rcx

  v5 = 0;
  if ( KiIntSteerEnabled && a3 && !*(_WORD *)(a5 + 8) )
  {
    v6 = 0LL;
    if ( LOWORD(KeActiveProcessors[0]) )
      v6 = qword_1403AA618[0];
    if ( *(_QWORD *)a5 == v6 )
    {
      if ( (KiInterruptControllerInfo & 1) == 0 || a4 )
      {
        if ( (KiInterruptControllerInfo & 2) == 0 )
        {
          if ( a4 == 1 && (KiInterruptControllerInfo & 1) != 0 )
            return 2;
          return v5;
        }
        if ( a4 != 1 )
          return v5;
      }
      return 1;
    }
  }
  return v5;
}
