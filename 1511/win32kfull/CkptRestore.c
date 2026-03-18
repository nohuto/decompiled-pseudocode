/*
 * XREFs of CkptRestore @ 0x1C007734C
 * Callers:
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F70C4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020537C (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020A150 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxSetWindowShowState @ 0x1C0224100 (xxxSetWindowShowState.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     CkptUpdate @ 0x1C0077428 (CkptUpdate.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 */

char *__fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  char *Prop; // rbx
  char *v6; // rax

  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) == 0 )
  {
    Prop = (char *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = (char *)DesktopAlloc(*(_QWORD *)(a1 + 24), 0x34u);
    Prop = v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, (unsigned __int16)atomCheckpointProp, v6, 9LL) )
      {
        *((_DWORD *)Prop + 8) &= 0xFFFFFF80;
        *((_DWORD *)Prop + 4) = -1;
        *((_DWORD *)Prop + 5) = -1;
        *((_DWORD *)Prop + 6) = -1;
        *((_DWORD *)Prop + 7) = -1;
        *(_OWORD *)Prop = *a2;
        *(_OWORD *)(Prop + 36) = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, Prop);
    }
  }
  return 0LL;
}
