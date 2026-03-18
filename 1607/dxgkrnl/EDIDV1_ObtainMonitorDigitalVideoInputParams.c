/*
 * XREFs of EDIDV1_ObtainMonitorDigitalVideoInputParams @ 0x1C0010B8C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorDigitalVideoInputParams(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  __int64 v3; // r9
  char v4; // al

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 )
    {
      v4 = *(_BYTE *)(v3 + 20);
      if ( v4 < 0 )
      {
        *v2 = v4 & 1;
        return 0LL;
      }
      else
      {
        return 3221226021LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
