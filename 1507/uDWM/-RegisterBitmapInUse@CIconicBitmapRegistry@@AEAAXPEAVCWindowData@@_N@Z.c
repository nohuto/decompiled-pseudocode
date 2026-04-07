/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18006F23C
 * Callers:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180030D80 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180030DAC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  struct CWindowData *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( a3 )
  {
    ++*((_DWORD *)this + 20);
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, (__int64 *)&v6);
  }
  else
  {
    --*((_DWORD *)this + 20);
    v3 = *((_DWORD *)this + 10);
    v4 = v3 + 1;
    if ( v3 + 1 >= v3 )
    {
      if ( v4 > *((_DWORD *)this + 9) )
      {
        v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v6);
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v6;
        *((_DWORD *)this + 10) = v4;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
}
