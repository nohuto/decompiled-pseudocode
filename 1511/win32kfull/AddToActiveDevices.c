/*
 * XREFs of AddToActiveDevices @ 0x1C01C8E7C
 * Callers:
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C7698 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CFE08 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 * Callees:
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     ?InsertInListByRank@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C01C7250 (-InsertInListByRank@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall AddToActiveDevices(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v3; // ebx
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v5; // rax
  int v7; // eax

  Flink = gActivePointerDeviceList.Flink;
  v3 = 0;
  do
  {
    if ( Flink == &gActivePointerDeviceList )
    {
      v5 = Win32AllocPoolZInit(32LL, 2020635477LL);
      if ( v5 )
      {
        *(_QWORD *)v5 = a1;
        InsertInListByRank(&gActivePointerDeviceList, (struct _LIST_ENTRY *)(v5 + 8));
        v3 = 1;
        if ( ++dword_1C0323FA0 == 1 )
          gtmridPointerDeviceTimer = SetRITTimer(0LL, 0x64u, (__int64)xxxAssessPointerContactStateTimerCallback, 0);
      }
      return v3;
    }
    p_Blink = &Flink[-1].Blink;
    Flink = Flink->Flink;
  }
  while ( *p_Blink != a1 );
  v7 = *((_DWORD *)p_Blink + 6);
  if ( (v7 & 1) != 0 )
    *((_DWORD *)p_Blink + 6) = v7 & 0xFFFFFFFE;
  return 1;
}
