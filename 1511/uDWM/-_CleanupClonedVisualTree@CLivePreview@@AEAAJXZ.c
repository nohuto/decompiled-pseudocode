/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071930
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180071390 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CLivePreview::_CleanupClonedVisualTree(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 62) + 32LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 63) + 32LL));
    v3 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 102) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 384, 0x10u);
      v5 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 64) + 32LL));
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = CVisual::ClearInstructions(*((CVisual **)this + 64));
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x6D1u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x6D0u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x6CEu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x6CDu);
  }
  return v3;
}
