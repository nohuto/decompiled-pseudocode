/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18003FB80
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FB20 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CThumbnailVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003FDD0 (-Create@CThumbnailVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  unsigned int v1; // edi
  int v3; // eax
  volatile signed __int32 *v4; // rbx
  CSecondaryWindowRepresentation **v5; // rcx
  int updated; // eax
  CThumbnailVisual *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 11) )
    return v1;
  v3 = CThumbnailVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v8);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1CA8u);
    goto LABEL_5;
  }
  v4 = (volatile signed __int32 *)v8;
  v5 = (CSecondaryWindowRepresentation **)v8;
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1CAAu);
LABEL_6:
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  return v1;
}
