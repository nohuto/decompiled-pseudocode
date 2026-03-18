/*
 * XREFs of ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800BAACC
 * Callers:
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180025BAC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180108FF8 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1801091A8 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x1800B7950 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x18018A3A0 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::UpdateDxClipShape(const struct CWindowNode **this, char a2)
{
  const struct CWindowNode *v2; // rax
  unsigned int v3; // ebx
  struct _RGNDATA *v4; // r14
  CRegionShape *v5; // rsi
  unsigned int WindowDirtyIndex; // eax
  unsigned int *v9; // r8
  int v10; // eax
  int v11; // eax
  CRegionShape *v12; // rcx
  CShape *v13; // rcx
  signed int LastError; // eax
  HRGN hrgn; // [rsp+70h] [rbp+30h] BYREF
  struct CRegionShape *v16; // [rsp+80h] [rbp+40h] BYREF
  struct _RGNDATA *v17; // [rsp+88h] [rbp+48h] BYREF

  v2 = *this;
  v3 = 0;
  hrgn = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( !*((_QWORD *)v2 + 79) )
    return v3;
  if ( a2 )
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this) + 32;
  else
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this);
  if ( (unsigned int)DwmGetDxRgn(*((_QWORD *)*this + 79), WindowDirtyIndex, &hrgn) )
  {
    if ( !hrgn )
      return v3;
    SetLastError(0);
    if ( !OffsetRgn(
            hrgn,
            *((_DWORD *)*this + 162) - *((_DWORD *)*this + 178),
            *((_DWORD *)*this + 163) - *((_DWORD *)*this + 179)) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x73u);
      goto LABEL_19;
    }
    v10 = HrgnToRgnData(hrgn, &v17, v9);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x78u);
      v4 = v17;
    }
    else
    {
      v4 = v17;
      v11 = CRegionShape::Create(v17, &v16);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v5 = v16;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7Du);
      v5 = v16;
    }
LABEL_19:
    if ( hrgn )
      DeleteObject(hrgn);
    goto LABEL_21;
  }
LABEL_12:
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
      *((_BYTE *)*this + 1032) = 1;
      CVisual::PropagateFlags(*this, 1, 1, 0, 0, 0, 0);
    }
    goto LABEL_19;
  }
LABEL_21:
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return v3;
}
