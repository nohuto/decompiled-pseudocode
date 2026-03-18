/*
 * XREFs of EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000C778
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000B958 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00BA7FC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorBasicDisplayParams(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  _BYTE *v3; // r9

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 )
    {
      *v2 = v3[20] >> 7;
      v2[1] = v3[21];
      v2[2] = v3[22];
      v2[3] = v3[23];
      v2[4] = v3[24] >> 7;
      v2[5] = (v3[24] & 0x40) != 0;
      v2[6] = (v3[24] & 0x20) != 0;
      v2[8] = (v3[24] & 4) != 0;
      v2[9] = (v3[24] & 2) != 0;
      v2[10] = v3[24] & 1;
      v2[7] = (v3[24] >> 3) & 3;
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
