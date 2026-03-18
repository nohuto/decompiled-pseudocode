/*
 * XREFs of ?SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1C00DB200
 * Callers:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00175F0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::SetVisible(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3)
{
  __int64 v5; // rcx

  if ( (*((_BYTE *)this + 220) & 0x10) == 0 || a3 )
  {
    if ( (*((_BYTE *)this + 220) & 0x10) == 0 && a3 )
    {
      v5 = *((_QWORD *)this + 19);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(*(_QWORD *)v5 + 208LL))(
          v5,
          a2,
          this);
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 19));
      }
      *((_BYTE *)this + 220) |= 0x10u;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(**((_QWORD **)this + 19) + 216LL))(
        *((_QWORD *)this + 19),
        a2,
        this);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 19));
      *((_DWORD *)this + 4) &= ~0x20u;
    }
    *((_BYTE *)this + 220) &= ~0x10u;
  }
}
