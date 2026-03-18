/*
 * XREFs of EDIDV1_ObtainMonitorColorCharacteristics @ 0x1C00354F0
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorColorCharacteristics(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  _WORD *v3; // r9

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v3 )
    {
      *v3 = (v2[25] >> 6) | (4 * (unsigned __int8)v2[27]);
      v3[1] = (4 * (unsigned __int8)v2[28]) | (v2[25] >> 4) & 3;
      v3[4] = (4 * (unsigned __int8)v2[29]) | (v2[25] >> 2) & 3;
      v3[5] = v2[25] & 3 | (4 * (unsigned __int8)v2[30]);
      v3[2] = (v2[26] >> 6) | (4 * (unsigned __int8)v2[31]);
      v3[3] = (4 * (unsigned __int8)v2[32]) | (v2[26] >> 4) & 3;
      v3[6] = (4 * (unsigned __int8)v2[33]) | (v2[26] >> 2) & 3;
      v3[7] = v2[26] & 3 | (4 * (unsigned __int8)v2[34]);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
