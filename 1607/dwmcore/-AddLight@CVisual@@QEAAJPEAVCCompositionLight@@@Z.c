/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180137E4C
 * Callers:
 *     ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18010A5B8 (-ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800A25CC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 */

__int64 __fastcall CVisual::AddLight(CVisual *this, struct CCompositionLight *a2)
{
  CPtrArrayBase *v2; // rsi
  char v3; // bp
  __int64 v4; // r8
  unsigned __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  int v12; // eax

  v2 = (struct CCompositionLight *)((char *)a2 + 24);
  v3 = 0;
  v4 = *((_QWORD *)a2 + 3);
  if ( (v4 & 2) != 0 )
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v7 = *((_QWORD *)a2 + 3) & 1LL;
  v8 = CPtrArrayBase::InsertAt(v2, (__int64)this, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3D8u);
  }
  else
  {
    v3 = 1;
    v10 = *((_QWORD *)this + 39);
    if ( (v10 & 2) != 0 )
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v11 = *((_QWORD *)this + 39) & 1LL;
    v12 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 312), (__int64)a2, v11);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x3DBu);
    else
      CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v9 < 0 && v3 )
    CPtrArrayBase::Remove(v2, (__int64)this);
  return (unsigned int)v9;
}
