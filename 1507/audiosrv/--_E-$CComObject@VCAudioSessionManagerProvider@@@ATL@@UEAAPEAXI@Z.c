/*
 * XREFs of ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x180081090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x180080F38 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComObject<CAudioSessionManagerProvider>::`vector deleting destructor'(void *a1, char a2)
{
  ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
