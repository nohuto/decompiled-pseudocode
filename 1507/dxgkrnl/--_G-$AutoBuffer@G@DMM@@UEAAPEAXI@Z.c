/*
 * XREFs of ??_G?$AutoBuffer@G@DMM@@UEAAPEAXI@Z @ 0x1C002B590
 * Callers:
 *     ??_E?$AutoBuffer@G@DMM@@WBI@EAAPEAXI@Z @ 0x1C0010E60 (--_E-$AutoBuffer@G@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C00086A4 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<unsigned short>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
