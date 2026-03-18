/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x1800875B0
 * Callers:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180087F88 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x1800A5940 (-SetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  int v1; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+34h] [rbp-1Ch]
  _BYTE v12[20]; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v1 = 0;
  v10 = 0;
  v3 = *((_QWORD *)this + 61);
  v13 = 0;
  v11 = 0LL;
  v14 = 1;
  memset(v12, 0, sizeof(v12));
  if ( !v3 )
  {
    *((_BYTE *)this + 372) |= 0x40u;
    goto LABEL_9;
  }
  if ( *((char *)this + 372) >= 0 )
  {
    v4 = *((_DWORD *)this + 124);
    if ( v4 == 1 )
    {
      v9 = CRedirectedGDISurface::SetInformation(v3 + 16, 1LL, 4LL, &v14);
      v13 = v9;
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180178DD0, 1u, v9, 0x6ECu);
        goto LABEL_9;
      }
    }
    else if ( v4 == 2 )
    {
      v5 = 0LL;
      *(_DWORD *)v12 = *((_DWORD *)this + 6);
      HIDWORD(v11) = 1;
      if ( *((_DWORD *)this + 92) )
      {
        while ( 1 )
        {
          v6 = *((_QWORD *)this + 61);
          *(_QWORD *)&v12[4] = *((_QWORD *)this + v5 + 30);
          *(_QWORD *)&v12[12] = *((_QWORD *)this + v5 + 14);
          v7 = CRedirectedGDISurface::SetInformation(v6 + 16, 4LL, 32LL, &v10);
          v13 = v7;
          v1 = v7;
          if ( v7 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *((_DWORD *)this + 92) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR(0x14u, &dword_180178DD0, 1u, v7, 0x6FAu);
        goto LABEL_9;
      }
    }
LABEL_8:
    *((_BYTE *)this + 372) |= 0x80u;
  }
LABEL_9:
  TranslateDXGIorD3DErrorInContext(v1, 16, &v13);
  return v13;
}
