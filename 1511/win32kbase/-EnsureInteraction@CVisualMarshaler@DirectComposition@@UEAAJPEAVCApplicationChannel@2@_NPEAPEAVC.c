/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0017030
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B9E4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        struct DirectComposition::CInteractionMarshaler **a4)
{
  int v4; // ebx
  int v10; // eax
  struct DirectComposition::CResourceMarshaler *v11; // rsi
  char v12; // [rsp+60h] [rbp+8h] BYREF
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v12 = 0;
  if ( !*((_QWORD *)this + 21) )
  {
    v13 = 0LL;
    v10 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x60u, &v13);
    v11 = v13;
    v4 = v10;
    if ( v10 < 0 )
      goto LABEL_9;
    v4 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 160LL))(
           this,
           a2,
           20LL,
           v13,
           &v12);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
    if ( v4 < 0 )
      goto LABEL_9;
    if ( a3 )
      v4 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v11 + 224LL))(v11);
    if ( v4 < 0 )
    {
LABEL_9:
      if ( v11 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 160LL))(
          this,
          a2,
          20LL);
    }
    else
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v11);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a4 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 21);
  return (unsigned int)v4;
}
