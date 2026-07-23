/*
 * XREFs of SeQueryTrustedPlatformModuleInformation @ 0x14021A610
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

__int64 __fastcall SeQueryTrustedPlatformModuleInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 >= 4 )
  {
    *a1 = 0;
    if ( SepOsLoaderTpmDriverLoaded )
      *a1 = 1;
    if ( PnpCoreDriverGroupLoadPhase > 2 )
      *a1 |= 2u;
  }
  else
  {
    if ( a3 )
      *a3 = 4;
    return (unsigned int)-1073741820;
  }
  return v3;
}
