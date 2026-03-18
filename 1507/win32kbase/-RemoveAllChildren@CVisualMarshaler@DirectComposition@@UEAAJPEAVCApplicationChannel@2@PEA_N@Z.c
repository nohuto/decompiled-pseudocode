/*
 * XREFs of ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C002A430
 * Callers:
 *     <none>
 * Callees:
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002A6A8 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveAllChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        bool *a3)
{
  __int64 v3; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rbx
  __int64 v8; // rax

  v3 = *((_QWORD *)this + 17);
  if ( v3 || *((_QWORD *)this + 20) )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
    if ( v3 )
    {
      do
      {
        v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
        *((_QWORD *)this + 17) = *((_QWORD *)v7 + 18);
        v8 = *(_QWORD *)v7;
        *((_QWORD *)v7 + 18) = 0LL;
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *))(v8 + 248))(
          v7,
          a2);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
      }
      while ( *((_QWORD *)this + 17) );
    }
    DirectComposition::CVisualMarshaler::DiscardPendingChildRemoves(this, a2);
    *a3 = 1;
  }
  return 0LL;
}
