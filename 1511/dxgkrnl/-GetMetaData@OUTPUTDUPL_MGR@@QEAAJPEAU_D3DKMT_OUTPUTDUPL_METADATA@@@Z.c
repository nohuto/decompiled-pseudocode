/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C01577B8
 * Callers:
 *     j_?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C01563E0 (j_-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0157210 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0157B78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C015B878 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v8; // rcx
  D3DKMT_OUTPUTDUPL_METADATATYPE Type; // edx
  __int64 v10; // rax
  int DirtyRects; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rdx
  char *Buffer; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rsi
  __int64 v21; // rax
  OUTPUTDUPL_MGR *v22; // rcx
  UINT v23; // eax
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, *(struct DXGFASTMUTEX *const *)v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    Type = a2->Type;
    if ( Type )
    {
      if ( Type != D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS )
      {
        v10 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v10 + 24) = a2->Type;
        WdLogEvent5_WdError(v10);
        DirtyRects = -1073741811;
        goto LABEL_13;
      }
      v12 = *((_QWORD *)*ContextForProcess + 33);
      if ( *(_DWORD *)(v12 + 16) == 2 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        v14 = **(void ***)(v13 + 48);
        LODWORD(v13) = 24 * *(_DWORD *)(v13 + 44);
        a2->BufferSizeRequired = v13;
        if ( a2->BufferSizeSupplied < (unsigned int)v13 )
        {
          DirtyRects = -1073741789;
          goto LABEL_13;
        }
        a2->pBuffer = v14;
      }
      else
      {
        a2->BufferSizeRequired = 0;
      }
      DirtyRects = 0;
    }
    else
    {
      DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*ContextForProcess, a2);
    }
  }
  else
  {
    DirtyRects = -1073741275;
  }
LABEL_13:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*(void ***)(v4 + 16), a2->BufferSizeRequired + 72, 0);
    v20 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v22, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20);
      v23 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v20 + 12) = 8;
      *((_DWORD *)v20 + 1) = v23;
      *((_DWORD *)v20 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v20 + 14) = a2->Type;
      *((_DWORD *)v20 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v20 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v20 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v20 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20, 1);
    }
    else
    {
      v21 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = 1723LL;
      WdLogEvent5_WdLowResource(v21);
      DirtyRects = -1073741801;
    }
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return (unsigned int)DirtyRects;
}
