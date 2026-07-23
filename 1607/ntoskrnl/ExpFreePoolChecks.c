/*
 * XREFs of ExpFreePoolChecks @ 0x14022CEAC
 * Callers:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401D346C (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14022D9F4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14022E358 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14022E6D0 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x140710998 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !(_DWORD)a3 )
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
