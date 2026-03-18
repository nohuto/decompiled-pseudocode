/*
 * XREFs of ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z @ 0x18014180C
 * Callers:
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B12E4 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 */

char __fastcall CGdiSpriteBitmap::HasValidDeviceBitmapObject(CGdiSpriteBitmap *this, struct CRedirectedGDISurface **a2)
{
  char v2; // di
  int v5; // eax
  int Information; // eax
  unsigned int i; // ecx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+3Ch] [rbp-1Ch]
  _DWORD v13[3]; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 32;
  v2 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( *((_QWORD *)this + 30) )
  {
    v5 = CGdiSpriteBitmap::EnsureRedirSurface(this);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7758, 2u, v5, 0x667u);
      return v2;
    }
    if ( !*((_QWORD *)this + 32) )
      goto LABEL_4;
    Information = CRedirectedGDISurface::GetInformation(*((_QWORD *)this + 79), 3, &v14, (__int64)&v10);
    if ( Information < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7758, 2u, Information, 0x676u);
      return v2;
    }
    if ( v10 == 2 && *((_QWORD *)this + 32) == *(_QWORD *)&v13[1] )
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 79) + 8LL));
      v2 = 1;
      *a2 = (struct CRedirectedGDISurface *)*((_QWORD *)this + 79);
    }
    else
    {
      CGdiSpriteBitmap::ReleaseDeviceResources(this);
      for ( i = 0; i < *((_DWORD *)this + 128); *((_QWORD *)this + v8 + 48) = 0LL )
      {
        v8 = i++;
        *((_QWORD *)this + v8 + 32) = 0LL;
      }
      *((_DWORD *)this + 128) = 0;
    }
  }
  return v2;
}
