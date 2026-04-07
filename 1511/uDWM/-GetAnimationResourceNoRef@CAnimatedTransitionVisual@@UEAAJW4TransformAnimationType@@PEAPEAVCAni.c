/*
 * XREFs of ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x18000C510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnimationResource@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180011B30 (-Create@CAnimationResource@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z @ 0x1800120FC (-SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::GetAnimationResourceNoRef(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  int v7; // eax
  struct CResource *v8; // rdx
  int v9; // eax

  v3 = 0;
  v6 = a1 + 8LL * a2;
  if ( !*(_QWORD *)(v6 + 600) )
  {
    v7 = CAnimationResource::Create(
           *(struct MIL_CHANNEL__ *const *)(*(_QWORD *)(a1 + 24) + 16LL),
           (struct CAnimationResource **)(v6 + 600));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x785u);
    }
    else
    {
      v8 = *(struct CResource **)(a1 + 704);
      if ( v8 )
      {
        v9 = CAnimationResource::SetTrigger(*(CAnimationResource **)(v6 + 600), v8);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x788u);
      }
    }
  }
  *a3 = *(_QWORD *)(v6 + 600);
  return v3;
}
