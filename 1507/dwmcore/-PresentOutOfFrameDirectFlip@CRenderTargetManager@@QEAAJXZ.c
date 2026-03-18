/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x1800E8D50
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
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
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 36LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 49LL) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(v6[5] + 80LL))(v6 + 5);
        v8 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x254u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x256u);
  }
LABEL_11:
  NtTokenManagerDeleteOutstandingDirectFlipTokens();
  return v2;
}
