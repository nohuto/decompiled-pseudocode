/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAPEAVCInteractionMarshaler@2@@Z @ 0x1C002A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E7C0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CInteractionMarshaler **a3)
{
  int v3; // edi
  int v8; // eax
  struct DirectComposition::CResourceMarshaler *v9; // rsi
  char v10; // [rsp+50h] [rbp+8h] BYREF
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0;
  if ( !*((_QWORD *)this + 22) )
  {
    v11 = 0LL;
    v8 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x58u, &v11);
    v9 = v11;
    v3 = v8;
    if ( v8 < 0
      || (v3 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 160LL))(
                 this,
                 a2,
                 19LL,
                 v11,
                 &v10),
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9),
          v3 < 0)
      || (v3 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 208LL))(v9),
          v3 < 0) )
    {
      if ( v9 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 160LL))(
          this,
          a2,
          19LL);
    }
    else
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v9);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a3 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 22);
  return (unsigned int)v3;
}
