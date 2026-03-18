/*
 * XREFs of ??_E?$AutoBuffer@I@DMM@@UEAAPEAXI@Z @ 0x1C0032E20
 * Callers:
 *     ??_E?$AutoBuffer@I@DMM@@WBI@EAAPEAXI@Z @ 0x1C0012940 (--_E-$AutoBuffer@I@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C000FAF8 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<unsigned int>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
