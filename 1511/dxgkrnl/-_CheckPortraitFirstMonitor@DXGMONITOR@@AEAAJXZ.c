/*
 * XREFs of ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00DF918
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C009C160 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitor(DXGMONITOR *this)
{
  _QWORD *EdidBaseBlockPtr; // rax
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool v8; // al
  int v9; // ecx

  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( !EdidBaseBlockPtr )
    return 3221226021LL;
  result = EDIDV1_IsEDIDBaseBlock(EdidBaseBlockPtr);
  if ( (int)result < 0 )
    return result;
  if ( *(_WORD *)(v5 + 54) == (_WORD)v3 && *(_BYTE *)(v5 + 56) == (_BYTE)v3 )
    return 3221226021LL;
  v6 = *(unsigned __int8 *)(v5 + 59) | (*(unsigned __int8 *)(v5 + 61) >> 4 << 8);
  if ( (*(unsigned __int8 *)(v5 + 56) | (*(unsigned __int8 *)(v5 + 58) >> 4 << 8)) < v6 )
  {
    v8 = IsInternalVideoOutput(*(_DWORD *)(v4 + 32));
    v9 = v3;
    LOBYTE(v9) = v8;
    *(_DWORD *)(v4 + 24) ^= (*(_DWORD *)(v4 + 24) ^ (v9 << 8)) & 0x100;
  }
  else
  {
    *(_DWORD *)(v4 + 24) &= ~0x100u;
    v7 = v6;
  }
  LOBYTE(v3) = v7 < 0x400;
  *(_DWORD *)(v4 + 24) ^= (*(_DWORD *)(v4 + 24) ^ (v3 << 9)) & 0x200;
  return 0LL;
}
