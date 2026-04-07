/*
 * XREFs of ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001FC50
 * Callers:
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001C510 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800204B0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001CED0 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCanvas::CloneVisualTree(CCanvas *this, struct CVisual **a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // esi
  struct CCanvas *v7; // rbx
  int v8; // eax
  struct CCanvas *v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2);
  v10 = 0LL;
  v5 = CCanvas::Create(*(struct MIL_CHANNEL__ *const *)(v2 + 16), &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x53u);
    v7 = v10;
  }
  else
  {
    v7 = v10;
    *a2 = v10;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      v7 = v10;
    }
    v8 = CVisual::CloneVisualTree(this, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x57u);
  }
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(struct CCanvas *, __int64))v10)(v10, 1LL);
  return v6;
}
