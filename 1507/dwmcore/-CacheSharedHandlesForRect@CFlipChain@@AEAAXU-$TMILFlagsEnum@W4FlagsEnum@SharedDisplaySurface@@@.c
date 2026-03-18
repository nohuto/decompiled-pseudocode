/*
 * XREFs of ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180108CE8
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010960C (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z @ 0x18010895C (-AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180108A1C (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 */

void __fastcall CFlipChain::CacheSharedHandlesForRect(CFlipChain *this, int a2, const RECT *a3)
{
  int CurrentDisplaySet; // eax
  CDisplaySet *v5; // rdi
  unsigned int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  struct _LUID v15; // [rsp+40h] [rbp-69h] BYREF
  HMONITOR v16; // [rsp+48h] [rbp-61h]
  bool v17; // [rsp+50h] [rbp-59h]
  _BYTE v18[72]; // [rsp+58h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+B0h] [rbp+7h] BYREF

  *(_QWORD *)&rcSrc2.left = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, (const struct CDisplaySet **)&rcSrc2);
  v5 = *(CDisplaySet **)&rcSrc2.left;
  if ( CurrentDisplaySet >= 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)&rcSrc2.left + 72LL);
    *((_DWORD *)this + 60) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 27, 0x58u);
    memset_0(v18, 0, 0x40uLL);
    v7 = *((_DWORD *)this + 38);
    if ( !v7 )
      v7 = 1;
    v8 = 0;
    if ( v6 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + *((_QWORD *)v5 + 6));
        rcSrc2 = *(RECT *)(v10 + 112);
        if ( IntersectRect(&rcDst, a3, &rcSrc2) )
          break;
LABEL_15:
        ++v8;
        v9 += 8LL;
        if ( v8 >= v6 )
          goto LABEL_19;
      }
      v15 = *(struct _LUID *)(v10 + 832);
      if ( a2 >= 0 )
        v16 = 0LL;
      else
        v16 = *(HMONITOR *)(*(_QWORD *)(v10 + 152) + 32LL);
      v17 = (a2 & 8) != 0;
      v11 = CFlipChain::AddSharedSurfaceEntry(
              this,
              (const struct SharedBufferDataFlipChain::SharedSurfaceEntry *)&v15,
              0LL);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x426u);
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = CFlipChain::CacheSharedHandle(this, v15, v16, v17, v12);
          if ( v13 < 0 )
            break;
          if ( ++v12 >= v7 )
            goto LABEL_15;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x42Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3FDu);
  }
LABEL_19:
  if ( v5 )
    CDisplaySet::Release(v5);
}
