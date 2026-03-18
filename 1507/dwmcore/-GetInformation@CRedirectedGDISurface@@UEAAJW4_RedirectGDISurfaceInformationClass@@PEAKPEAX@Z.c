/*
 * XREFs of ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800622A0
 * Callers:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x1801080CC (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetInformation(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  signed int LastError; // eax
  int v15; // r9d
  signed int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-60h]
  int v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v20; // [rsp+5Ch] [rbp-24h]
  _DWORD v21[3]; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( !a2 )
  {
    if ( a3 && *a3 >= 0x38u )
    {
      *a3 = 56;
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfGetDirtyRgn(
                           *(_QWORD *)(a1 + 16),
                           *(_QWORD *)a4,
                           *(_QWORD *)(a4 + 8),
                           *(_QWORD *)(a4 + 16),
                           *(_QWORD *)(a4 + 24),
                           *(_QWORD *)(a4 + 32),
                           *(_QWORD *)(a4 + 40),
                           a4 + 48,
                           a4 + 52) )
        return v4;
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v17 = 255;
      goto LABEL_18;
    }
    v17 = 242;
    goto LABEL_37;
  }
  v9 = a2 - 2;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      v15 = -2147024809;
      v17 = 283;
LABEL_38:
      v4 = v15;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, &dword_180167588, 3u, v15, v17);
      return v4;
    }
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    memset(v21, 0, sizeof(v21));
    if ( a3 && *a3 >= 0x20u )
    {
      *a3 = 32;
      SetLastError(0);
      if ( (unsigned int)DwmGetRedirectionStyle(*(_QWORD *)(a1 + 16), &v18) )
      {
        *(_DWORD *)a4 = v18;
        *(_QWORD *)(a4 + 8) = v19;
        *(_QWORD *)(a4 + 16) = v20;
        *(_QWORD *)(a4 + 24) = *(_QWORD *)&v21[1];
        return v4;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v17 = 272;
LABEL_18:
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      v15 = LastError;
      goto LABEL_21;
    }
    v17 = 267;
LABEL_37:
    v15 = -2147024872;
    goto LABEL_38;
  }
  v18 = 0;
  memset_0(&v19, 0, 0x2CuLL);
  if ( !a3 || *a3 < 0x138u )
  {
    v17 = 147;
    goto LABEL_37;
  }
  *a3 = 312;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( (unsigned int)DwmGetSurfaceData(*(_QWORD *)(a1 + 16), &v18) )
  {
    v10 = v18;
    *(_QWORD *)(a4 + 32) = v19;
    *(_DWORD *)(a4 + 40) = HIDWORD(v20);
    *(_QWORD *)(a4 + 16) = *(_QWORD *)&v21[1];
    v11 = v10 - 1;
    if ( v11 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      if ( v11 == 1 )
      {
        v12 = v22;
        *(_DWORD *)a4 = 2;
        *(_DWORD *)(a4 + 44) = 87;
        *(_DWORD *)(a4 + 48) = 1;
        *(_QWORD *)(a4 + 56) = v12;
        *(_QWORD *)(a4 + 64) = v23;
      }
      else
      {
        *(_DWORD *)a4 = 0;
        *(_QWORD *)(a4 + 64) = 0LL;
        *(_DWORD *)(a4 + 48) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 24) = v23;
      v13 = v22;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 48) = 0;
      *(_QWORD *)(a4 + 56) = v13;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 64) = 0LL;
    v16 = GetLastError();
    if ( v16 > 0 )
      return (unsigned __int16)v16 | 0x80070000;
    else
      return (unsigned int)v16;
  }
  return v4;
}
