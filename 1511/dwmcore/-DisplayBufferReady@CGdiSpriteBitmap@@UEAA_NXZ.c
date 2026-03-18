/*
 * XREFs of ?DisplayBufferReady@CGdiSpriteBitmap@@UEAA_NXZ @ 0x180087700
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180086460 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::DisplayBufferReady(CGdiSpriteBitmap *this)
{
  int v2; // eax
  char *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  if ( *((_QWORD *)this + 12) )
  {
    v2 = CGdiSpriteBitmap::EnsureDeviceBitmapTextures((CGdiSpriteBitmap *)((char *)this - 72));
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6A8u);
    }
    else if ( (*((_BYTE *)this + 372) & 8) == 0 )
    {
      v4 = (char *)this + 408;
      v5 = *(_QWORD *)(*((_QWORD *)this - 5) + 40LL) + 176LL;
      v6 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this - 5) + 40LL) + 184LL);
      *((_QWORD *)this + 51) = v5;
      *((_QWORD *)this + 52) = v6;
      if ( *v6 != v5 )
        __fastfail(3u);
      *v6 = v4;
      *(_QWORD *)(v5 + 8) = v4;
      *((_BYTE *)this + 372) |= 8u;
    }
  }
  return (*((_BYTE *)this + 372) & 3) != 0;
}
