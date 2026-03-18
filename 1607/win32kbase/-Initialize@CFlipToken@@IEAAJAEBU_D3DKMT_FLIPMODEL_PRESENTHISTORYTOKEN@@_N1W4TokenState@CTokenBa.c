/*
 * XREFs of ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBase@@@Z @ 0x1C001C8C8
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C001EF20 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C294 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C001C510 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C5B4 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C001EE10 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001EF08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 CFlipToken::Initialize(__int64 a1, __int64 a2, char a3, char a4, ...)
{
  int v8; // esi
  _OWORD *v9; // rcx
  int v10; // r9d
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, a4);
  v8 = CToken::Initialize(a1, 2LL);
  if ( v8 >= 0 )
  {
    v8 = -1073741811;
    if ( ((*(_DWORD *)(a2 + 44) >> 7) & 3) != 2 )
      v8 = 0;
    if ( v8 >= 0 )
    {
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 108);
      *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 28);
      if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(a2 + 84)) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *v9;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v11 = (_DWORD *)(a1 + 188);
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
      v12 = 6LL;
      *(_BYTE *)(a1 + 117) = (*(_BYTE *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 136) = (*(_BYTE *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 137) = (*(_BYTE *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 116) = (*(_BYTE *)(a2 + 44) & 0x20) != 0;
      *(_DWORD *)(a1 + 140) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 164) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 744);
      *(_BYTE *)(a1 + 220) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 796);
      do
      {
        *v11 = *(_DWORD *)((char *)v11 + a2 - a1 + 576);
        ++v11;
        --v12;
      }
      while ( v12 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 222) = a3;
      if ( a4 )
      {
        *(_BYTE *)(a1 + 221) = 1;
        *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 64);
      }
      v13 = *(_DWORD *)(a2 + 804);
      if ( v13 )
      {
        if ( v13 > 0x10 )
        {
          v8 = v10;
        }
        else
        {
          v14 = 0;
          do
            CRegion::AddRect(*(CRegion **)(a1 + 80), (const struct tagRECT *)(16LL * v14++ + a2 + 808));
          while ( v14 < *(_DWORD *)(a2 + 804) );
        }
      }
    }
  }
  CFlipToken::TraceStateChanged((CFlipToken *)a1);
  if ( v8 >= 0 && !*(_BYTE *)(a1 + 222) )
  {
    *(_DWORD *)(a1 + 24) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)a1);
    v8 = CompositionSurfaceObject::NotifyTokenInFrame(
           *(CompositionSurfaceObject **)(a1 + 32),
           (const struct CToken *)a1,
           (bool *)va);
    CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)a1);
  }
  return (unsigned int)v8;
}
