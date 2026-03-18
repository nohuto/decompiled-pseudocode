/*
 * XREFs of ExpFreePoolChecks @ 0x140212DB8
 * Callers:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401C3440 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x140213F80 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x1402148BC (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140214B20 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x1406C48D4 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x417) != 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 && !(_DWORD)a3 )
    {
      ExpCheckForLookaside(BugCheckParameter3, a2, a3, a4);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter3, a2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 4) != 0 )
    {
      ExpCheckForResource(BugCheckParameter3, a2, a3, a4);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter3);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 0x10) != 0 )
      return VfFreePoolNotification(BugCheckParameter3, a2, a3, a4);
  }
  return result;
}
