/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180015B70
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001A7C0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A204 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x1800173F0 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  volatile signed __int32 *v8; // r14
  int v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  bool v12; // zf
  void *(__fastcall *v14)(CBitmapSource *__hidden, unsigned int); // r12
  void *Src; // [rsp+78h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = *(volatile signed __int32 **)(v6 + *(_QWORD *)this);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = **(void *(__fastcall ***)(CBitmapSource *__hidden, unsigned int))v8;
          if ( v14 == CBitmapSource::`vector deleting destructor' )
            CBitmapSource::`vector deleting destructor'((CBitmapSource *)v8, 1u);
          else
            v14((CBitmapSource *)v8, 1u);
        }
        *(_QWORD *)(v6 + *(_QWORD *)this) = 0LL;
      }
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 6) = 0;
  v9 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v10 = DynArrayImpl<0>::Grow((_DWORD)this, 8, v9, 0, (__int64)&Src);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x308u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + (unsigned int)(8 * *((_DWORD *)this + 6))), Src, (unsigned int)(8 * v9));
    v12 = v9 + *((_DWORD *)this + 6) == 0;
    *((_DWORD *)this + 6) += v9;
    if ( !v12 )
    {
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)this + 8LL * v3++) + 8LL));
      while ( v3 < *((_DWORD *)this + 6) );
    }
  }
  return v11;
}
