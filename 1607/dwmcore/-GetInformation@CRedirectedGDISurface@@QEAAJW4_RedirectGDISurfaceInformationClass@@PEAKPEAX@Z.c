/*
 * XREFs of ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B12E4
 * Callers:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z @ 0x18014180C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetInformation(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  signed int LastError; // eax
  int v16; // r9d
  signed int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+54h] [rbp-2Ch]
  __int64 v21; // [rsp+5Ch] [rbp-24h]
  _DWORD v22[3]; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( !a2 )
  {
    if ( a3 && *a3 >= 0x38u )
    {
      *a3 = 56;
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfGetDirtyRgn(
                           *(_QWORD *)(a1 + 24),
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
      v18 = 232;
      goto LABEL_18;
    }
    v18 = 219;
    goto LABEL_37;
  }
  v9 = a2 - 2;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      v16 = -2147024809;
      v18 = 260;
LABEL_38:
      v4 = v16;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, &dword_1801AD980, 3u, v16, v18);
      return v4;
    }
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    memset(v22, 0, sizeof(v22));
    if ( a3 && *a3 >= 0x20u )
    {
      *a3 = 32;
      SetLastError(0);
      if ( (unsigned int)DwmGetRedirectionStyle(*(_QWORD *)(a1 + 24), &v19) )
      {
        *(_DWORD *)a4 = v19;
        *(_QWORD *)(a4 + 8) = v20;
        *(_QWORD *)(a4 + 16) = v21;
        *(_QWORD *)(a4 + 24) = *(_QWORD *)&v22[1];
        return v4;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v18 = 249;
LABEL_18:
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      v16 = LastError;
      goto LABEL_21;
    }
    v18 = 244;
LABEL_37:
    v16 = -2147024872;
    goto LABEL_38;
  }
  memset_0(&v19, 0, 0x30uLL);
  if ( !a3 || *a3 < 0x138u )
  {
    v18 = 124;
    goto LABEL_37;
  }
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  *a3 = 312;
  if ( (unsigned int)DwmGetSurfaceData(v10, &v19) )
  {
    v11 = v19;
    *(_QWORD *)(a4 + 32) = v20;
    *(_DWORD *)(a4 + 40) = HIDWORD(v21);
    *(_QWORD *)(a4 + 16) = *(_QWORD *)&v22[1];
    v12 = v11 - 1;
    if ( v12 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      if ( v12 == 1 )
      {
        v13 = v23;
        *(_DWORD *)a4 = 2;
        *(_DWORD *)(a4 + 44) = 87;
        *(_DWORD *)(a4 + 48) = 1;
        *(_QWORD *)(a4 + 56) = v13;
        *(_QWORD *)(a4 + 64) = v24;
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
      *(_QWORD *)(a4 + 24) = v24;
      v14 = v23;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 48) = 0;
      *(_QWORD *)(a4 + 56) = v14;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 64) = 0LL;
    v17 = GetLastError();
    if ( v17 > 0 )
      return (unsigned __int16)v17 | 0x80070000;
    else
      return (unsigned int)v17;
  }
  return v4;
}
