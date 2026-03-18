/*
 * XREFs of ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180141D98
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010BD38 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x18013FE84 (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 */

void __fastcall CFlipChain::CacheSharedHandlesForRect(CFlipChain *this, int a2, const RECT *a3)
{
  int CurrentDisplaySet; // eax
  CDisplaySet *v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  struct _LUID v17; // [rsp+40h] [rbp-69h] BYREF
  HMONITOR v18; // [rsp+48h] [rbp-61h]
  bool v19; // [rsp+50h] [rbp-59h]
  _BYTE v20[72]; // [rsp+58h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+B0h] [rbp+7h] BYREF

  *(_QWORD *)&rcSrc2.left = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, (const struct CDisplaySet **)&rcSrc2);
  v5 = *(CDisplaySet **)&rcSrc2.left;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3FDu);
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)&rcSrc2.left + 72LL);
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 0x58u);
    memset_0(v20, 0, 0x40uLL);
    v9 = *((_DWORD *)this + 56);
    if ( !v9 )
      v9 = 1;
    v10 = 0;
    if ( v6 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + *((_QWORD *)v5 + 6));
        rcSrc2 = *(RECT *)(v12 + 104);
        if ( IntersectRect(&rcDst, a3, &rcSrc2) )
          break;
LABEL_14:
        ++v10;
        v11 += 8LL;
        if ( v10 >= v6 )
          goto LABEL_19;
      }
      v17 = *(struct _LUID *)(v12 + 232);
      if ( a2 >= 0 )
        v18 = 0LL;
      else
        v18 = *(HMONITOR *)(*(_QWORD *)(v12 + 136) + 24LL);
      v19 = (a2 & 8) != 0;
      v13 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((__int64)this + 288, (__int64)&v17);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x426u);
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = CFlipChain::CacheSharedHandle(this, v17, v18, v19, v14);
          if ( v15 < 0 )
            break;
          if ( ++v14 >= v9 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x42Du);
      }
    }
  }
LABEL_19:
  if ( v5 )
    CDisplaySet::Release(v5, v7, v8);
}
