/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800204B0
 * Callers:
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001C510 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001FC50 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(CAtlasedRectsVisual *this, struct CVisual **a2)
{
  int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  volatile signed __int32 *v9; // rdi
  CResource *(__fastcall *v10)(CResource *, char); // r15
  CVisual *v11; // rdi
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rsi
  void (__fastcall *v13)(CVisual *__hidden, unsigned int); // rdi

  v3 = CCanvas::CloneVisualTree(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x181u);
  }
  else
  {
    v5 = *((_DWORD *)this + 72);
    if ( v5 )
    {
      v6 = 0LL;
      v7 = v5;
      do
      {
        v8 = *(_QWORD *)(v6 + *((_QWORD *)this + 33));
        v9 = *(volatile signed __int32 **)(v8 + 88);
        if ( v9 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            v10 = **(CResource *(__fastcall ***)(CResource *, char))v9;
            if ( v10 == CResource::`scalar deleting destructor' )
              CResource::`scalar deleting destructor'((CResource *)v9, 1);
            else
              v10((CResource *)v9, 1);
          }
          *(_QWORD *)(v8 + 88) = 0LL;
        }
        *(_DWORD *)(v8 + 96) |= 1u;
        v11 = *(CVisual **)(v8 + 80);
        if ( v11 )
        {
          v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v11 + 24LL);
          if ( v12 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v11, 0x1000u);
          else
            v12(v11, 4096u);
        }
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    v13 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v13 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x2000u);
    else
      v13(this, 0x2000u);
  }
  return v4;
}
