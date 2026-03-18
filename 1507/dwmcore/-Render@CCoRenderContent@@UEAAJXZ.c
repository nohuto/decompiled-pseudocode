/*
 * XREFs of ?Render@CCoRenderContent@@UEAAJXZ @ 0x18011C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCoRenderContent::Render(CCoRenderContent *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this - 3) + 512LL) + 24LL)
                                                 + 80LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 3) + 512LL) + 24LL),
         *((_QWORD *)this + 1));
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x51u);
  return v2;
}
