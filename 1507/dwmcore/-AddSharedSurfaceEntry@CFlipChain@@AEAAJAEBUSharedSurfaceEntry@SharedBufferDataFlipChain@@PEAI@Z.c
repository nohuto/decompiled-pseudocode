/*
 * XREFs of ?AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z @ 0x18010895C
 * Callers:
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180108CE8 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180108FFC (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFlipChain::AddSharedSurfaceEntry(
        CFlipChain *this,
        const struct SharedBufferDataFlipChain::SharedSurfaceEntry *a2,
        unsigned int *a3)
{
  char *v3; // r10
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax

  if ( a3 )
    *a3 = *((_DWORD *)this + 60);
  v3 = (char *)this + 216;
  v4 = *((unsigned int *)this + 60);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
  {
    v6 = 0;
    if ( v5 > *((_DWORD *)this + 59) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 0x58u, 1, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v7 = *(_QWORD *)v3 + 88 * v4;
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v7 + 64) = *((_OWORD *)a2 + 4);
      *(_QWORD *)(v7 + 80) = *((_QWORD *)a2 + 10);
      *((_DWORD *)v3 + 6) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  return v6;
}
