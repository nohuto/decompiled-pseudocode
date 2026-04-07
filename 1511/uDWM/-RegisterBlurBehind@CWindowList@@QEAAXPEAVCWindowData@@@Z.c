/*
 * XREFs of ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180033528
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18003CF7C (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::RegisterBlurBehind(CWindowList *this, struct CWindowData *a2)
{
  __int64 v2; // r11
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  struct CWindowData *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( !(unsigned int)DynArray<CWindowData *,0>::Find((char *)this + 544, &v6) )
  {
    v3 = *(_DWORD *)(v2 + 24);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else if ( v4 > *(_DWORD *)(v2 + 20) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8u, 1, &v6);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8LL * v3) = v6;
      *(_DWORD *)(v2 + 24) = v4;
    }
  }
}
