/*
 * XREFs of ??_G?$Queue@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z @ 0x1C0034650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00343E4 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
