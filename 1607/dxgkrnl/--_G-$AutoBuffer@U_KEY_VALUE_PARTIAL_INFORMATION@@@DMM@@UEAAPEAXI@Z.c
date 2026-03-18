/*
 * XREFs of ??_G?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0033070
 * Callers:
 *     ??_E?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C00129F0 (--_E-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAA@XZ @ 0x1C003280C (--1-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::~AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
