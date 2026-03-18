/*
 * XREFs of EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000D228
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z @ 0x1C0001414 (-EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z.c)
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorUserFriendlyName(_QWORD *a1, void *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  size_t v5; // rbx
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  const void *v9; // r9

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v5 = 0LL;
      v6 = 0;
      while ( 1 )
      {
        v7 = v4 + 18 * (v6 + 3LL);
        if ( !*(_WORD *)v7 && !*(_BYTE *)(v7 + 2) && *(_BYTE *)(v7 + 3) == 0xFC )
          break;
        if ( ++v6 >= 4u )
          goto LABEL_14;
      }
      v8 = EDID_V1_ComputeMonDescStringLength((const struct _EDID_V1_MONITOR_DESCRIPTOR_BLOCK *)v7);
      v5 = v8;
      if ( v9 && v8 )
      {
        if ( v8 > 0xD )
          v5 = 13LL;
        memmove(a2, v9, v5);
      }
LABEL_14:
      *((_BYTE *)a2 + v5) = 0;
      result = 3221226021LL;
      if ( v5 )
        return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
