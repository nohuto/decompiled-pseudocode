/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800205A8
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180022270 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180020540 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  __int64 v1; // rdi
  _BYTE *v2; // r14
  int v3; // esi
  __int64 v4; // rbp
  _QWORD *v5; // r15
  int v7; // eax
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = &unk_18019E744;
  v3 = 0;
  v9 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)((char *)this + 56);
  while ( !*v2 )
  {
LABEL_5:
    v4 = (unsigned int)(v4 + 1);
    ++v5;
    v2 += 24;
    if ( (unsigned int)v4 >= 8 )
      goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 5) + 504LL))(
         *((_QWORD *)this + 5),
         (char *)&unk_18019E734 + 24 * v4,
         &v9);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v1 = 0LL;
    *v5 = v9;
    v9 = 0LL;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x982u);
  v1 = v9;
LABEL_6:
  if ( v3 < 0 )
  {
    CD2DContext::ReleaseEffectTable(this);
    v1 = v9;
  }
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return (unsigned int)v3;
}
