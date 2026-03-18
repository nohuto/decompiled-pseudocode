/*
 * XREFs of ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1C025870C
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258BCC (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
        CPhysicalMonitorHandle *this,
        char *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // ecx
  unsigned int v7; // r8d
  __int16 v8; // dx
  unsigned __int64 v9; // rbx

  v5 = 0;
  if ( a3 < a5 )
    return (unsigned int)-1073741823;
  v7 = 0;
  if ( a5 )
  {
    while ( 1 )
    {
      v8 = *(_WORD *)a4;
      if ( (unsigned __int16)(*(_WORD *)a4 - 32) > 0x3Fu
        || (v9 = 0x87FFFFFE03FF4301uLL, !_bittest64((const __int64 *)&v9, (unsigned __int16)(*(_WORD *)a4 - 32))) )
      {
        if ( v8 && (unsigned __int16)(v8 - 97) > 0x19u )
          break;
      }
      ++v7;
      *a2 = *a4;
      a4 += 2;
      ++a2;
      if ( v7 >= a5 )
        return v5;
    }
    return (unsigned int)-1073741823;
  }
  return v5;
}
