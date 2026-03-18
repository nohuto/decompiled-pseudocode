/*
 * XREFs of ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18017C720
 * Callers:
 *     ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x1801107F0 (-Realize@CHwConstantColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C570 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C668 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Realize(
        CHwSolidColorTextureSource *this,
        __int64 a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  unsigned int v4; // edi
  int LockableTexture; // eax
  int v7; // eax

  v4 = 0;
  if ( !*((_QWORD *)this + 13) )
  {
    LockableTexture = CHwSolidColorTextureSource::CreateLockableTexture(this);
    v4 = LockableTexture;
    if ( LockableTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LockableTexture, 0x9Bu);
      return v4;
    }
    *((_BYTE *)this + 112) = 0;
  }
  if ( *((_BYTE *)this + 112) || (v7 = CHwSolidColorTextureSource::FillTexture(this, a2, a3, a4), v4 = v7, v7 >= 0) )
    *((_BYTE *)this + 112) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA8u);
  return v4;
}
