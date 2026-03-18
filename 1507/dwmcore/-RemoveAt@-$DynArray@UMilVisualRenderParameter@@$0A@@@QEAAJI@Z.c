/*
 * XREFs of ?RemoveAt@?$DynArray@UMilVisualRenderParameter@@$0A@@@QEAAJI@Z @ 0x1800ED1E0
 * Callers:
 *     ?ProcessRemoveRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_REMOVERENDERPARAMETER@@@Z @ 0x180104484 (-ProcessRemoveRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_REMOVERENDERPA.c)
 *     ?RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x18010493C (-RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<MilVisualRenderParameter,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        v8 = *(_QWORD *)(v6 + 24LL * v4 + 16);
        v9 = 3 * v7;
        *(_OWORD *)(v6 + 8 * v9) = *(_OWORD *)(v6 + 24LL * v4);
        *(_QWORD *)(v6 + 8 * v9 + 16) = v8;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v3;
}
