/*
 * XREFs of ??_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z @ 0x180005300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDuckingNotification::CSharedNotificationData *__fastcall CDuckingNotification::CSharedNotificationData::`vector deleting destructor'(
        CDuckingNotification::CSharedNotificationData *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
