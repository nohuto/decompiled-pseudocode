/*
 * XREFs of ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0039510 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C003BC84 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C003DAD8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003E934 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A8988 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 CFlipToken::Initialize(__int64 a1, __int64 a2, char a3, char a4, char a5, char a6, ...)
{
  int v10; // esi
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  int v13; // r9d
  _DWORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ebp
  va_list va; // [rsp+70h] [rbp+38h] BYREF

  va_start(va, a6);
  *(_DWORD *)(a1 + 24) = 2;
  v10 = CRegion::Create((struct CRegion **)(a1 + 80));
  if ( v10 < 0 )
  {
    *(_DWORD *)(a1 + 24) = 6;
  }
  else
  {
    v10 = -1073741811;
    if ( ((*(_DWORD *)(a2 + 44) >> 7) & 3) != 2 )
      v10 = 0;
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 108);
      *(_QWORD *)(a1 + 112) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 28);
      if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(a2 + 84)) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *v12;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v14 = (_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 788);
      *(_BYTE *)(a1 + 125) = (*(_BYTE *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 144) = (*(_BYTE *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 145) = (*(_BYTE *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 124) = (*(_BYTE *)(a2 + 44) & 0x20) != 0;
      *(_DWORD *)(a1 + 148) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 156) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 172) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 744);
      *(_BYTE *)(a1 + 220) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 252) = *(_DWORD *)(a2 + 796);
      *(_BYTE *)(a1 + 88) = a5;
      *(_BYTE *)(a1 + 89) = a6;
      do
      {
        *v14 = *(_DWORD *)((char *)v14 + a2 - a1 + 568);
        ++v14;
        --v11;
      }
      while ( v11 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 97) = 1;
      *(_BYTE *)(a1 + 222) = a3;
      if ( a4 )
      {
        *(_BYTE *)(a1 + 221) = 1;
        *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 64);
      }
      v15 = *(_DWORD *)(a2 + 804);
      if ( v15 )
      {
        if ( v15 > 0x10 )
        {
          v10 = v13;
        }
        else
        {
          v16 = 0;
          do
            CRegion::AddRect(*(CRegion **)(a1 + 80), (const struct tagRECT *)(16LL * v16++ + a2 + 808));
          while ( v16 < *(_DWORD *)(a2 + 804) );
        }
      }
    }
  }
  CFlipToken::TraceStateChanged((CFlipToken *)a1);
  if ( v10 >= 0 && !*(_BYTE *)(a1 + 222) )
  {
    *(_DWORD *)(a1 + 24) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)a1);
    v10 = CompositionSurfaceObject::NotifyTokenInFrame(
            *(CompositionSurfaceObject **)(a1 + 32),
            (const struct CToken *)a1,
            (bool *)va);
    CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)a1, 0);
  }
  return (unsigned int)v10;
}
