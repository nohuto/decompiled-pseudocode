/*
 * XREFs of ?Render@CCoRenderContent@@UEAAJXZ @ 0x180132D20
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
