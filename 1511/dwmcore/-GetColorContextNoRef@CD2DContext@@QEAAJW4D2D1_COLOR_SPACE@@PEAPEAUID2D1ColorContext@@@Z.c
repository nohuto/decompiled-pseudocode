/*
 * XREFs of ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801477B0
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::GetColorContextNoRef(CD2DContext *this, unsigned int a2, struct ID2D1ColorContext **a3)
{
  char v3; // r12
  __int64 v4; // r14
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // ebx
  struct ID2D1ColorContext *v13; // rdi
  int v15; // eax
  struct ID2D1ColorContext *v17; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v17 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 36) )
  {
    do
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 15) + 8 * v4) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v4)) == a2 )
      {
        v3 = 1;
        *a3 = *(struct ID2D1ColorContext **)(*((_QWORD *)this + 15) + 8 * v4);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 36) );
    v8 = 0;
    if ( v3 )
      goto LABEL_20;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct ID2D1ColorContext **))(**((_QWORD **)this + 5)
                                                                                              + 472LL))(
         *((_QWORD *)this + 5),
         a2,
         0LL,
         0LL,
         &v17);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = *((_DWORD *)this + 36);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v8 = -2147024362;
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x833u);
      goto LABEL_20;
    }
    v8 = 0;
    if ( v11 > *((_DWORD *)this + 35) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 120, 8, 1, &v17);
      v12 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v8 = v12;
      if ( v12 < 0 )
        goto LABEL_19;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * *((unsigned int *)this + 36)) = v17;
      *((_DWORD *)this + 36) = v11;
    }
    v13 = 0LL;
    *a3 = v17;
    v17 = 0LL;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x831u);
LABEL_20:
  v13 = v17;
LABEL_13:
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1ColorContext *))(*(_QWORD *)v13 + 16LL))(v13);
  return v8;
}
