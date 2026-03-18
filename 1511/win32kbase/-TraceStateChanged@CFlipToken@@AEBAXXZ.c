/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C003BC84
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C003BF70 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C003BFA0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C003C050 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CToken.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E2FD0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E3180 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     Template_pqqxqttxx @ 0x1C00ADF7C (Template_pqqxqttxx.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebp
  char v4; // bl
  int v5; // r14d
  char v6; // r15
  __int64 v7; // r12
  char v8; // al
  int v9; // edx
  int v10; // r8d
  __int64 v11; // [rsp+90h] [rbp+8h]

  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 5);
  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)this + 222) == 0;
  v5 = *((_DWORD *)this + 25);
  v6 = *((_BYTE *)this + 220);
  v7 = *((_QWORD *)this + 14);
  v11 = *(_QWORD *)(v1 + 16);
  v8 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 120LL))(this);
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    Template_pqqxqttxx(v11, v9, v10, v1, v5, v8, v7, v3, v6, v4, v11, v2);
}
