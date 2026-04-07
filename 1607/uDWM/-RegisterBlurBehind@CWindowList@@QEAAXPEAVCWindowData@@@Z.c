/*
 * XREFs of ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800333E8
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800243B0 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033BF8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowList::RegisterBlurBehind(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  struct CWindowData **v6; // [rsp+40h] [rbp+8h] BYREF
  struct CWindowData *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (char *)this + 544;
  if ( !(unsigned int)DynArray<CWindowData *,0>::Find((char *)this + 544, &v7) )
  {
    v3 = *((_DWORD *)v2 + 6);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v4 <= *((_DWORD *)v2 + 5) )
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8LL * *((unsigned int *)v2 + 6)) = v7;
      *((_DWORD *)v2 + 6) = v4;
    }
    else
    {
      v6 = &v7;
      v5 = DynArrayImpl<0>::Grow((__int64)v2, 8u, 1, 0, (unsigned __int64 *)&v6);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
      else
        *(_QWORD *)(*(_QWORD *)v2 + (unsigned int)(8 * (*((_DWORD *)v2 + 6))++)) = *v6;
    }
  }
}
