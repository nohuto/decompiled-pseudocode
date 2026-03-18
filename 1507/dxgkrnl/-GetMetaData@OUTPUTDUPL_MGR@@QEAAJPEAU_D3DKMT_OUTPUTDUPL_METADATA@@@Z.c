/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C015354C
 * Callers:
 *     _lambda_0720b077c9a5d0c6caab17ee5b3bab12_::_helper_func_cdecl_ @ 0x1C0152110 (_lambda_0720b077c9a5d0c6caab17ee5b3bab12_--_helper_func_cdecl_.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C008E174 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0152F6C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C015390C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0153D68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C0157560 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
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
  __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // rax
  OUTPUTDUPL_MGR *v19; // rcx
  UINT v20; // eax
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *(struct DXGFASTMUTEX *const *)v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
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
    v17 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17);
      v20 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v17 + 12) = 8;
      *((_DWORD *)v17 + 1) = v20;
      *((_DWORD *)v17 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v17 + 14) = a2->Type;
      *((_DWORD *)v17 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v17 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v17 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v17 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17, 1);
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v18 + 24) = 1723LL;
      WdLogEvent5_WdLowResource(v18);
      DirtyRects = -1073741801;
    }
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return (unsigned int)DirtyRects;
}
