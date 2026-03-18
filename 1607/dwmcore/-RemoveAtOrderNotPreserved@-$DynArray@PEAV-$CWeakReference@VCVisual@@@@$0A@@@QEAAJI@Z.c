/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180110CB4
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18010E09C (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18010FC88 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180116B7C (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x217u);
  }
  else
  {
    v4 = v2 - 1;
    if ( a2 < (unsigned int)v4 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    --*(_DWORD *)(a1 + 24);
  }
  return v3;
}
