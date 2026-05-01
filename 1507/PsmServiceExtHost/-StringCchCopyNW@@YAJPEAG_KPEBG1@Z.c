/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002229C
 * Callers:
 *     ?CopyTierName@Internal@ExecutionModel@@YAJPEAGPEAIPEBGI@Z @ 0x180021FB0 (-CopyTierName@Internal@ExecutionModel@@YAJPEAGPEAIPEBGI@Z.c)
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800445FC (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x18004C5C8 (-SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v4;
  }
  else if ( a4 > 0x7FFFFFFE )
  {
    v4 = -2147024809;
  }
  else
  {
    v4 = 0;
    if ( !a2 )
      goto LABEL_14;
    v5 = a4 - a2;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + a2) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_14:
      a1 -= 2;
      v4 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
