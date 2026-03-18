/*
 * XREFs of ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18014C7A8
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z @ 0x18014C8EC (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18000BEEC (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x18005F80C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1800E06E8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18014C760 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18014C77C (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacks(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  _QWORD *TopByReference; // rax
  __int64 v3; // rcx
  int *v4; // r8
  __int64 v5; // r10
  bool v6; // r9
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  TopByReference = (_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
  v6 = v5 == *TopByReference;
  if ( (*(_BYTE *)(v5 + 90) & 4) != 0 || v5 == *TopByReference )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v3 + 256));
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 400) - 1.0)) & _xmm) >= 0.0000011920929 || v6 )
    CWatermarkStack<bool,64,2,10>::Pop(v4 + 56);
  if ( *(_DWORD *)(v5 + 208) != 5 || v6 )
  {
    v7 = v4[48];
    if ( v7 )
      v4[48] = v7 - 1;
  }
  if ( *(_DWORD *)(v5 + 204) != -1 || v6 )
    CWatermarkStack<bool,64,2,10>::Pop(v4 + 40);
  if ( (*(_DWORD *)(v5 + 92) & 0x78000) != 0x78000 || v6 )
    CWatermarkStack<bool,64,2,10>::Pop(v4 + 32);
  if ( *(_DWORD *)(v5 + 216) != -1 || v6 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v4 + 24);
  v8 = v4[16];
  if ( v8 )
    v4[16] = v8 - 1;
  if ( v6 )
  {
    CWatermarkStack<CVisual *,64,2,10>::Pop(v4, 0LL);
    if ( (unsigned int)CWatermarkStack<CBspNode *,64,2,10>::Pop((int *)(v9 + 32), &v10) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 8LL))(v10 + 8);
  }
}
