/*
 * XREFs of ?AddResourceNotifier@CRenderTargetBitmap@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180131F60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::AddResourceNotifier(
        CRenderTargetBitmap *this,
        struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  struct IDeviceResourceNotify *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 16);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 > *((_DWORD *)this + 15) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v7);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v7;
      *((_DWORD *)this + 16) = v3;
    }
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  return v4;
}
