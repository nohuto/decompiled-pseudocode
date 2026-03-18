/*
 * XREFs of ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x180177440
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetColorContextNoRef(CD2DContext *this, unsigned int a2, struct ID2D1ColorContext **a3)
{
  int v3; // ebx
  char v4; // bp
  __int64 v5; // rsi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  struct ID2D1ColorContext *v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v15 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  if ( !*((_DWORD *)this + 40) )
    goto LABEL_6;
  do
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v5);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
    {
      v4 = 1;
      *a3 = *(struct ID2D1ColorContext **)(*((_QWORD *)this + 17) + 8 * v5);
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < *((_DWORD *)this + 40) );
  if ( !v4 )
  {
LABEL_6:
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct ID2D1ColorContext **))(**((_QWORD **)this + 5)
                                                                                                 + 472LL))(
            *((_QWORD *)this + 5),
            a2,
            0LL,
            0LL,
            &v15);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9A9u);
    }
    else
    {
      v11 = *((_DWORD *)this + 40);
      v12 = v11 + 1;
      if ( v11 + 1 >= v11 )
      {
        v3 = 0;
        if ( v12 <= *((_DWORD *)this + 39) )
        {
          *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)this + 40)) = v15;
          *((_DWORD *)this + 40) = v12;
LABEL_14:
          *a3 = v15;
          return (unsigned int)v3;
        }
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8u, 1, &v15);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v3 >= 0 )
        goto LABEL_14;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x9ABu);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1ColorContext *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v3;
}
