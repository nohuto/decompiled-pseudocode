/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00436B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00408B8 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        struct DirectComposition::CInteractionMarshaler **a4)
{
  int v4; // ebx
  int v9; // eax
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  char v12; // [rsp+60h] [rbp+8h] BYREF
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v12 = 0;
  if ( !*((_QWORD *)this + 23) )
  {
    v13 = 0LL;
    v9 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x66u, &v13);
    v10 = v13;
    v4 = v9;
    if ( v9 < 0 )
      goto LABEL_9;
    v4 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 160LL))(
           this,
           a2,
           20LL,
           v13,
           &v12);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    if ( v4 < 0 )
      goto LABEL_9;
    if ( a3 )
      v4 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 232LL))(v10);
    if ( v4 < 0 )
    {
LABEL_9:
      if ( v10 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 160LL))(
          this,
          a2,
          20LL);
    }
    else
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v10);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a4 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 23);
  return (unsigned int)v4;
}
