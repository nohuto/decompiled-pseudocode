/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x1401F16FC
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401F16B0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x1401F150C (BvgaAcquireLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 (__fastcall *a1)(_QWORD))
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock();
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
