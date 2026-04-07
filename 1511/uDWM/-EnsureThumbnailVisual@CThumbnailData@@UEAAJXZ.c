/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180040030
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18004028C (-Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  unsigned int v1; // edi
  int v3; // eax
  volatile signed __int32 *v4; // rbx
  CThumbnailVisual *v5; // rcx
  int updated; // eax
  CThumbnailVisual *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 11) )
    return v1;
  v3 = CThumbnailVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v8);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x20E3u);
    goto LABEL_5;
  }
  v4 = (volatile signed __int32 *)v8;
  v5 = v8;
  *((_QWORD *)v8 + 44) = this;
  updated = CThumbnailVisual::UpdateProperties(v5, *((_DWORD *)this + 9));
  v1 = updated;
  if ( updated >= 0 )
  {
    *((_QWORD *)this + 11) = v4;
    _InterlockedIncrement(v4 + 2);
LABEL_5:
    v4 = (volatile signed __int32 *)v8;
    goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x20E5u);
LABEL_6:
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  return v1;
}
