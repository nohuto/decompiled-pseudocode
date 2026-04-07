/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007B384
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007A038 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18007AF34 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18007AFB8 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18007AFF0 (-FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18007E8B4 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct MIL_CHANNEL__ **this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // rsi
  int IsMagnifier; // eax
  unsigned int v8; // edi
  int v9; // r9d
  HWND Ancestor; // rax
  struct CWindowData *WindowByHandle; // rax
  bool v12; // dl
  CVisual *v13; // rcx
  volatile signed __int32 *v14; // rbx
  unsigned int v16; // [rsp+20h] [rbp-20h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+60h] [rbp+20h] BYREF

  if ( (dword_1800BF40C & 1) == 0 )
  {
    dword_1800BF33C = -2147023728;
    dword_1800BF40C |= 1u;
  }
  v18 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(this + 8);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 8),
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1800BF33C, 1LL, -2147024809, 0x1FEu);
    return v8;
  }
  IsMagnifier = CMagnifier::Create(a2, a3, this[2], this[6], &v18);
  v8 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v16 = 481;
LABEL_6:
    v9 = IsMagnifier;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, &dword_1800BF33C, 1LL, v9, v16);
    goto LABEL_19;
  }
  Ancestor = GetAncestor(a2, 2u);
  WindowByHandle = CMagnifierControl::FindWindowByHandle(Ancestor);
  if ( !WindowByHandle )
  {
    v8 = -2147023728;
    v16 = 499;
    v9 = -2147023728;
    goto LABEL_18;
  }
  v13 = (CVisual *)*((_QWORD *)WindowByHandle + 48);
  if ( v13 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v13, v12);
    v8 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v16 = 492;
      goto LABEL_6;
    }
  }
  else
  {
    *((_BYTE *)WindowByHandle + 571) |= 1u;
  }
  Buffer[0] = a2;
  v14 = (volatile signed __int32 *)v18;
  Buffer[1] = v18;
  if ( v18 )
  {
    _InterlockedAdd((volatile signed __int32 *)v18 + 2, 1u);
    v14 = (volatile signed __int32 *)v18;
  }
  if ( !RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800BF33C, 1LL, -2147024882, 0x1F8u);
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_20;
  }
  _InterlockedAdd(v14 + 2, 1u);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
LABEL_19:
  v14 = (volatile signed __int32 *)v18;
LABEL_20:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
  return v8;
}
