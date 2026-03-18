/*
 * XREFs of ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C00619E8
 * Callers:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C0061980 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00620B8 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C0182638 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::_GetDescriptorLength(CCD_SET_STRING_ID *this, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // r10

  v3 = a2 + 1;
  if ( (unsigned int)v3 < *((unsigned __int16 *)this + 16) )
    v4 = *(_WORD *)(*((_QWORD *)this + 3) + 8 * v3) - 1;
  else
    v4 = *((_WORD *)this + 4);
  return v4 - (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * a2);
}
