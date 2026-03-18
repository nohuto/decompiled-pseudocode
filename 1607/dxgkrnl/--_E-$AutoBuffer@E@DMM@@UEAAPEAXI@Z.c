/*
 * XREFs of ??_E?$AutoBuffer@E@DMM@@UEAAPEAXI@Z @ 0x1C0032DC0
 * Callers:
 *     ??_E?$AutoBuffer@E@DMM@@WBI@EAAPEAXI@Z @ 0x1C0012920 (--_E-$AutoBuffer@E@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@E@DMM@@UEAA@XZ @ 0x1C0032518 (--1-$AutoBuffer@E@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<unsigned char>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<unsigned char>::~AutoBuffer<unsigned char>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
