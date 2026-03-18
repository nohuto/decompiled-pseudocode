/*
 * XREFs of CkptRestore @ 0x1C0085C30
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C0085BE8 (UpdateCheckpoint.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F6C08 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0204FC8 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     CkptUpdate @ 0x1C0085D0C (CkptUpdate.c)
 */

char *__fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  char *Prop; // rbx
  char *v7; // rax

  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) == 0 )
  {
    Prop = (char *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v7 = (char *)DesktopAlloc(*(_QWORD *)(v4 + 24), 0x34u);
    Prop = v7;
    if ( v7 )
    {
      if ( (unsigned int)InternalSetProp(a1, (unsigned __int16)atomCheckpointProp, (__int64)v7, 9) )
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
