/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800731A4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180071E58 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180072D54 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x180072DD8 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180072E10 (-FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z @ 0x18007669C (-ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z.c)
 *     ?SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z @ 0x180076A44 (-SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct MIL_CHANNEL__ **this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // rbp
  int HasContextualizedOpacity; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  HWND Ancestor; // rax
  struct CWindowData *WindowByHandle; // rax
  CVisual *v12; // rdi
  unsigned int v14; // [rsp+20h] [rbp-38h]
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v16; // [rsp+60h] [rbp+8h] BYREF

  if ( (dword_1800BD40C & 1) == 0 )
  {
    dword_1800BD340 = -2147023728;
    dword_1800BD40C |= 1u;
  }
  v16 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(this + 8);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 8),
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1800BD340, 1LL, -2147024809, 0x1FFu);
    return v8;
  }
  HasContextualizedOpacity = CMagnifier::Create(a2, a3, this[2], this[6], &v16);
  v8 = HasContextualizedOpacity;
  if ( HasContextualizedOpacity >= 0 )
  {
    Ancestor = GetAncestor(a2, 2u);
    WindowByHandle = CMagnifierControl::FindWindowByHandle(Ancestor);
    if ( !WindowByHandle )
    {
      v8 = -2147023728;
      v14 = 500;
      v9 = -2147023728;
      goto LABEL_21;
    }
    v12 = (CVisual *)*((_QWORD *)WindowByHandle + 46);
    if ( v12 )
    {
      HasContextualizedOpacity = CVisual::SetHasContextualizedOpacity(*((CVisual **)WindowByHandle + 46), 1);
      v8 = HasContextualizedOpacity;
      if ( HasContextualizedOpacity < 0 )
      {
        v14 = 492;
        goto LABEL_6;
      }
      HasContextualizedOpacity = CVisual::ApplyContextualizedOpacityParameter(v12, 0.0);
      v8 = HasContextualizedOpacity;
      if ( HasContextualizedOpacity < 0 )
      {
        v14 = 493;
        goto LABEL_6;
      }
    }
    else
    {
      *((_BYTE *)WindowByHandle + 555) |= 1u;
    }
    Buffer[0] = a2;
    Buffer[1] = v16;
    if ( v16 )
      _InterlockedAdd((volatile signed __int32 *)v16 + 2, 1u);
    if ( RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
    {
      _InterlockedAdd((volatile signed __int32 *)v16 + 2, 1u);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1800BD340, 1LL, -2147024882, 0x1F9u);
    }
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_22;
  }
  v14 = 481;
LABEL_6:
  v9 = HasContextualizedOpacity;
LABEL_21:
  MilInstrumentationCheckHR(0x14u, &dword_1800BD340, 1LL, v9, v14);
LABEL_22:
  if ( v16 )
    CBaseObject::Release(v16);
  return v8;
}
