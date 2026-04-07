/*
 * XREFs of ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800294A4
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180021860 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800067DC (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CWindowList::RegisterBlurBehind(CWindowList *this, struct CWindowData *a2)
{
  __int64 v2; // r11
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  struct CWindowData *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( !(unsigned int)DynArray<CWindowData *,0>::Find((__int64)this + 544, &v6) )
  {
    v3 = *(_DWORD *)(v2 + 24);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else if ( v4 <= *(_DWORD *)(v2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 24)) = v6;
      *(_DWORD *)(v2 + 24) = v4;
    }
    else
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8u, 1, &v6);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
  }
}
