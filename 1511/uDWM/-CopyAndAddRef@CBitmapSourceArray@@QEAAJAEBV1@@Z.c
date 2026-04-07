/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001BAF0
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001F3A0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003B1C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // edi
  int v10; // eax
  unsigned int v11; // ebp
  bool v12; // zf
  void *Src; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 )
  {
    v6 = v2;
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v7 + *(_QWORD *)this);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
        *(_QWORD *)(v7 + *(_QWORD *)this) = 0LL;
      }
      v7 += 8LL;
      --v6;
    }
    while ( v6 );
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
