/*
 * XREFs of ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x18007C220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x18007C0C8 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComObject<CAudioSessionManagerProvider>::`vector deleting destructor'(void *a1, char a2)
{
  ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
