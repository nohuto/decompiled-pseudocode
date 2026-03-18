/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x18007B12C
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18007B964 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTargetManager::PresentOutOfFrameDirectFlip(CRenderTargetManager *this)
{
  unsigned int v1; // r15d
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v5; // r14
  _QWORD *v6; // r12
  int v7; // eax
  int v8; // ebx
  int v9; // eax

  v1 = *((_DWORD *)this + 12);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_QWORD **)(v5 + *((_QWORD *)this + 3));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 37LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 53LL) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(v6[5] + 80LL))(v6 + 5);
        v8 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x24Bu);
        v9 = CRenderTargetManager::HandlePresentErrors(this, v8);
        v2 = v9;
        if ( v9 < 0 )
          break;
      }
      ++v3;
      v5 += 8LL;
      if ( v3 >= v1 )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x24Du);
  }
LABEL_11:
  NtTokenManagerDeleteOutstandingDirectFlipTokens();
  return v2;
}
