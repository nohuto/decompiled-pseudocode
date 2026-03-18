/*
 * XREFs of EDIDV1_ObtainMonitorAnalogVideoInputParams @ 0x1C0010A60
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorAnalogVideoInputParams(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  __int64 v3; // r9
  char v4; // cl

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 )
    {
      v4 = *(_BYTE *)(v3 + 20);
      if ( v4 < 0 )
      {
        return 3221226021LL;
      }
      else
      {
        v2[1] = (v4 & 0x10) != 0;
        v2[2] = (v4 & 8) != 0;
        v2[3] = (v4 & 4) != 0;
        v2[4] = (v4 & 2) != 0;
        v2[5] = v4 & 1;
        *v2 = ((unsigned __int8)v4 >> 5) & 3;
        return 0LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
