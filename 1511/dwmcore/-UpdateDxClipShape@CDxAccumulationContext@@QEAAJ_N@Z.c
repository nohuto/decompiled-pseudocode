/*
 * XREFs of ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28
 * Callers:
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18005E02C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x1800F6DD8 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1800F6F88 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x1800A9C38 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x180158F50 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::UpdateDxClipShape(const struct CWindowNode **this, char a2)
{
  const struct CWindowNode *v2; // rax
  unsigned int v3; // esi
  struct _RGNDATA *v4; // r14
  CRegionShape *v5; // rdi
  unsigned int WindowDirtyIndex; // eax
  unsigned int *v8; // r8
  signed int LastError; // eax
  int v10; // eax
  int v11; // eax
  CRegionShape *v12; // rcx
  CShape *v13; // rcx
  HRGN hrgn; // [rsp+70h] [rbp+30h] BYREF
  struct _RGNDATA *v16; // [rsp+80h] [rbp+40h] BYREF
  struct CRegionShape *v17; // [rsp+88h] [rbp+48h] BYREF

  v2 = *this;
  v3 = 0;
  hrgn = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !*((_QWORD *)v2 + 103) )
    return v3;
  if ( a2 )
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this) + 32;
  else
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this);
  if ( (unsigned int)DwmGetDxRgn(*((_QWORD *)*this + 103), WindowDirtyIndex, &hrgn) )
  {
    if ( !hrgn )
      return v3;
    SetLastError(0);
    if ( !OffsetRgn(
            hrgn,
            *((_DWORD *)*this + 210) - *((_DWORD *)*this + 226),
            *((_DWORD *)*this + 211) - *((_DWORD *)*this + 227)) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x73u);
      goto LABEL_26;
    }
    v10 = HrgnToRgnData(hrgn, &v16, v8);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x78u);
      v4 = v16;
      goto LABEL_26;
    }
    v4 = v16;
    v11 = CRegionShape::Create(v16, &v17);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7Du);
      v5 = v17;
LABEL_26:
      if ( hrgn )
        DeleteObject(hrgn);
      goto LABEL_28;
    }
    v5 = v17;
  }
  if ( hrgn )
  {
    v12 = this[1];
    if ( v5 != v12 )
    {
      if ( v12 )
        CRegionShape::`vector deleting destructor'(v12, 1);
      this[1] = v5;
      v5 = 0LL;
      v13 = this[1];
      if ( !v13 || (unsigned __int8)CShape::IsEmpty(v13) )
        *((_BYTE *)this + 16) = 0;
      *((_BYTE *)*this + 1224) = 1;
      CVisual::PropagateFlags(*this, 1, 1, 0, 0, 0, 0);
    }
    goto LABEL_26;
  }
LABEL_28:
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return v3;
}
