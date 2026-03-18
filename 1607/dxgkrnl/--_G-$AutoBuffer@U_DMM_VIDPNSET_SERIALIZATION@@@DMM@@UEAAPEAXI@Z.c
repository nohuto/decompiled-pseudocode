/*
 * XREFs of ??_G?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0033010
 * Callers:
 *     ??_E?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C00129D0 (--_E-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0032764 (--1-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_DMM_VIDPNSET_SERIALIZATION>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  DMM::AutoBuffer<_DMM_VIDPNSET_SERIALIZATION>::~AutoBuffer<_DMM_VIDPNSET_SERIALIZATION>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
