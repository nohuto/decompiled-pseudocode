/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01580D8
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        DXGDIAGNOSTICSWITHMUTEX **this,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a2,
        void **a3)
{
  size_t v5; // rdi
  UINT v6; // r14d
  char *Buffer; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbp
  __int64 v13; // rax
  OUTPUTDUPL_MGR *v15; // rcx

  v5 = 16 * a2->PresentRegions.DirtyRectCount;
  v6 = 24 * a2->PresentRegions.MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a3, v6 + v5 + 72, 0);
  v12 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v15, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    *((_DWORD *)v12 + 1) = v6 + v5 + 72;
    *((_DWORD *)v12 + 12) = 2;
    *((_DWORD *)v12 + 13) = a2->VidPnSourceId;
    *((_DWORD *)v12 + 14) = a2->Flags.0;
    *((_DWORD *)v12 + 15) = a2->PresentRegions.DirtyRectCount;
    *((_DWORD *)v12 + 16) = a2->PresentRegions.MoveRectCount;
    memmove(v12 + 72, a2->PresentRegions.pDirtyRects, v5);
    memmove(&v12[(v5 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a2->PresentRegions.pMoveRects, v6);
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12, 1LL);
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 1080LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
