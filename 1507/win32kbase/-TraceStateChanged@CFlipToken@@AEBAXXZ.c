/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0047D00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0047D80 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0047E10 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0047E50 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E1090 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqxqttxx @ 0x1C00A9AD0 (Template_pqqxqttxx.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  int v5; // r14d
  char v6; // r15
  char v7; // r12
  char v8; // al
  int v9; // edx
  int v10; // r8d
  __int64 v11; // [rsp+90h] [rbp+8h]

  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 5);
  v3 = *((_DWORD *)this + 6);
  v4 = *((_QWORD *)this + 14);
  v5 = *((_DWORD *)this + 25);
  v6 = *((_BYTE *)this + 90);
  v7 = *((_BYTE *)this + 220);
  v11 = *(_QWORD *)(v1 + 16);
  v8 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 96LL))(this);
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    Template_pqqxqttxx(v11, v9, v10, v1, v5, v8, v4, v3, v7, v6, v11, v2);
}
