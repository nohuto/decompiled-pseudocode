/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18007889C
 * Callers:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180033954 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180033980 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033B04 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  char *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  struct CWindowData *v7; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData **v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = a2;
  if ( a3 )
  {
    ++*((_DWORD *)this + 20);
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, (__int64 *)&v7);
  }
  else
  {
    --*((_DWORD *)this + 20);
    v3 = (char *)this + 16;
    v4 = *((_DWORD *)this + 10);
    v5 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      if ( v5 > *((_DWORD *)this + 9) )
      {
        v8 = &v7;
        v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 8u, 1, 0, (unsigned __int64 *)&v8);
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
        else
          *(_QWORD *)(*(_QWORD *)v3 + (unsigned int)(8 * (*((_DWORD *)v3 + 6))++)) = *v8;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * *((unsigned int *)this + 10)) = v7;
        *((_DWORD *)this + 10) = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
}
