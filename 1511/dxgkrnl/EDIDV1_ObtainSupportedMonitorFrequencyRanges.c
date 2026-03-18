/*
 * XREFs of EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000EABC
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00DF9A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainSupportedMonitorFrequencyRanges(_QWORD *a1)
{
  __int64 result; // rax
  _WORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  char v5; // r11
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 && (v3 || !*v2) )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = v6 + 3LL;
        if ( !*(_WORD *)(v4 + 18 * v7) && !*(_BYTE *)(v4 + 18 * v7 + 2) && *(_BYTE *)(v4 + 18 * v7 + 3) == 0xFD )
          break;
        if ( ++v6 >= 4u )
          return 3221226021LL;
      }
      if ( *v2 )
      {
        *(_BYTE *)v3 = v5;
        *(_DWORD *)(v3 + 36) = 2;
        *(_DWORD *)(v3 + 4) = *(unsigned __int8 *)(v4 + 18 * v7 + 5);
        *(_DWORD *)(v3 + 8) = 1;
        *(_DWORD *)(v3 + 12) = *(unsigned __int8 *)(v4 + 18 * v7 + 6);
        *(_DWORD *)(v3 + 16) = 1;
        v8 = 1000 * *(unsigned __int8 *)(v4 + 18 * v7 + 7);
        *(_DWORD *)(v3 + 24) = 1;
        *(_DWORD *)(v3 + 20) = v8;
        v9 = 1000 * *(unsigned __int8 *)(v4 + 18 * v7 + 8);
        *(_DWORD *)(v3 + 32) = 1;
        *(_DWORD *)(v3 + 28) = v9;
        v10 = 10000000 * *(unsigned __int8 *)(v4 + 18 * v7 + 9);
        *(_QWORD *)(v3 + 40) = 0LL;
        result = 0LL;
        *(_DWORD *)(v3 + 48) = v10;
      }
      else
      {
        *v2 = 1;
        return 2147483653LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
