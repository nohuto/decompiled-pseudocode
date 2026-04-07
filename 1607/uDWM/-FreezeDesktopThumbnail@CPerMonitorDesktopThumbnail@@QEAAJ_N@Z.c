/*
 * XREFs of ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x180096F64
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x180096E64 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18001E29C (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180041CFC (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180097E30 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(CPerMonitorDesktopThumbnail *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx

  v4 = 0;
  if ( !CDesktopManager::_IsMultiMon(CDesktopManager::s_pDesktopManagerInstance) && a2 )
  {
    if ( !CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v5 = CDesktopThumbnailCVI::_EnsureResources(this);
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x14Au);
        return v4;
      }
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 9));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x14Bu);
        return v4;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 968LL))(
        *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
        *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
        (char *)this + 40);
    }
    *(_BYTE *)(*((_QWORD *)this + 9) + 336LL) = a2;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    return v4;
  }
  if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    CBaseObject::Release(this);
  *(_BYTE *)(*((_QWORD *)this + 9) + 336LL) = 0;
  v7 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  return v4;
}
