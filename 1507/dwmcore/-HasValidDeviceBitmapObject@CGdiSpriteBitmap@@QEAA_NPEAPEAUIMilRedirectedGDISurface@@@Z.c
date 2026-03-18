/*
 * XREFs of ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x1801080CC
 * Callers:
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800629F0 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800622A0 (-GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18007E14C (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18007EEA0 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 */

char __fastcall CGdiSpriteBitmap::HasValidDeviceBitmapObject(CMILCOMBase **this, struct IMilRedirectedGDISurface **a2)
{
  char v2; // bl
  int v5; // eax
  CMILCOMBase *v6; // rcx
  int Interface; // eax
  int Information; // eax
  int v9; // eax
  unsigned int i; // edx
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+3Ch] [rbp-1Ch]
  _DWORD v16[3]; // [rsp+44h] [rbp-14h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 32;
  v2 = 0;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( this[21] )
  {
    v5 = CGdiSpriteBitmap::EnsureRedirSurface((CGdiSpriteBitmap *)this);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180175470, 2u, v5, 0x666u);
      return v2;
    }
    v6 = this[70];
    if ( !this[23] )
    {
      Interface = CMILCOMBase::InternalQueryInterface(v6, &IID_IMilRedirectedGDISurface, (void **)a2);
      if ( Interface < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180175470, 2u, Interface, 0x66Eu);
        return v2;
      }
      return 1;
    }
    Information = CRedirectedGDISurface::GetInformation((__int64)v6 + 16, 3, &v17, (__int64)&v13);
    if ( Information < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180175470, 2u, Information, 0x675u);
      return v2;
    }
    if ( v13 == 2 && this[23] == *(CMILCOMBase **)&v16[1] )
    {
      v9 = CMILCOMBase::InternalQueryInterface(this[70], &IID_IMilRedirectedGDISurface, (void **)a2);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180175470, 2u, v9, 0x67Eu);
        return v2;
      }
      return 1;
    }
    CGdiSpriteBitmap::ReleaseDeviceResources((CGdiSpriteBitmap *)this);
    for ( i = 0; i < *((_DWORD *)this + 110); this[v11 + 39] = 0LL )
    {
      v11 = i++;
      this[v11 + 23] = 0LL;
    }
    *((_DWORD *)this + 110) = 0;
  }
  return v2;
}
