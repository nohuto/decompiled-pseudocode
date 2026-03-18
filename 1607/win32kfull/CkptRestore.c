/*
 * XREFs of CkptRestore @ 0x1C00AFD64
 * Callers:
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01EE254 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC678 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxSetWindowShowState @ 0x1C0224CB4 (xxxSetWindowShowState.c)
 * Callees:
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     CkptUpdate @ 0x1C00AFE40 (CkptUpdate.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

__int64 __fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  __int64 Prop; // rbx
  PVOID v6; // rax

  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) == 0 )
  {
    Prop = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x34u, 1952674645);
    Prop = (__int64)v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, (unsigned __int16)atomCheckpointProp, (__int64)v6, 9) )
      {
        *(_DWORD *)(Prop + 32) &= 0xFFFFFF80;
        *(_DWORD *)(Prop + 16) = -1;
        *(_DWORD *)(Prop + 20) = -1;
        *(_DWORD *)(Prop + 24) = -1;
        *(_DWORD *)(Prop + 28) = -1;
        *(_OWORD *)Prop = *a2;
        *(_OWORD *)(Prop + 36) = *a2;
        goto LABEL_3;
      }
      DesktopFree(*(_QWORD *)(a1 + 24));
    }
  }
  return 0LL;
}
