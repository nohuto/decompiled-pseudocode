/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007C094
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007BDE8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007B114 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18007BCC0 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18007BD34 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18007F3A8 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct IDwmChannel **this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // rsi
  int IsMagnifier; // eax
  unsigned int v8; // edi
  int v9; // r9d
  HWND Ancestor; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // dl
  CVisual *v14; // rcx
  volatile signed __int32 *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-20h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+20h] BYREF

  if ( (dword_1800BB448 & 1) == 0 )
  {
    dword_1800BB374 = -2147023728;
    dword_1800BB448 |= 1u;
  }
  v19 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(this + 8);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 8),
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1800BB374, 1LL, -2147024809, 0x1FEu);
    return v8;
  }
  IsMagnifier = CMagnifier::Create(a2, a3, this[2], this[6], &v19);
  v8 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v17 = 481;
LABEL_6:
    v9 = IsMagnifier;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, &dword_1800BB374, 1LL, v9, v17);
    goto LABEL_20;
  }
  Ancestor = GetAncestor(a2, 2u);
  v11 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          Ancestor);
  if ( !v11 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) == 0 )
  {
    v8 = -2147023728;
    v17 = 499;
    v9 = -2147023728;
    goto LABEL_19;
  }
  v14 = *(CVisual **)(v12 + 384);
  if ( v14 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v14, v13);
    v8 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v17 = 492;
      goto LABEL_6;
    }
  }
  else
  {
    *(_BYTE *)(v12 + 579) |= 1u;
  }
  Buffer[0] = a2;
  v15 = (volatile signed __int32 *)v19;
  Buffer[1] = v19;
  if ( v19 )
  {
    _InterlockedAdd((volatile signed __int32 *)v19 + 2, 1u);
    v15 = (volatile signed __int32 *)v19;
  }
  if ( !RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800BB374, 1LL, -2147024882, 0x1F8u);
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_21;
  }
  _InterlockedAdd(v15 + 2, 1u);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
LABEL_20:
  v15 = (volatile signed __int32 *)v19;
LABEL_21:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v8;
}
