/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C002E10C (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  if ( !(unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(this, a2, &v6) )
  {
    RGNOBJ::vCopy(this, a2);
    return 1LL;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v5, v6);
  if ( v5[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v5, a2);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)v5);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v5);
    return 1LL;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v5);
  return 0LL;
}
