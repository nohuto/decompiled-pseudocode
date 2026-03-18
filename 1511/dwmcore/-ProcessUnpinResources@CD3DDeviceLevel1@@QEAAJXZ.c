/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800229E4
 * Callers:
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x180024514 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rbp
  unsigned int v2; // esi
  char *v5; // r15
  int v6; // eax
  __int64 v7; // r12

  v1 = *((unsigned int *)this + 250);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = (char *)this + 976;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 64) + 56LL))(
           *((_QWORD *)this + 64),
           *((_QWORD *)this + 122),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x113Bu);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *(_QWORD *)v5) + 16LL))(*(_QWORD *)(v7 + *(_QWORD *)v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)v5 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8LL);
  }
  return CD3DDeviceLevel1::TranslateDriverError(this, v2, 0LL);
}
