/*
 * XREFs of ??_ESpatialInputControllerCollection@@UEAAPEAXI@Z @ 0x1800781A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800781E4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 */

SpatialInputControllerCollection *__fastcall SpatialInputControllerCollection::`vector deleting destructor'(
        SpatialInputControllerCollection *this,
        char a2)
{
  SpatialInputControllerCollection::~SpatialInputControllerCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
