/*
 * XREFs of ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x180023050
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x180023094 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 */

CVolumeLimitTrackerNull *__fastcall CVolumeLimitTrackerNull::`scalar deleting destructor'(
        CVolumeLimitTrackerNull *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
