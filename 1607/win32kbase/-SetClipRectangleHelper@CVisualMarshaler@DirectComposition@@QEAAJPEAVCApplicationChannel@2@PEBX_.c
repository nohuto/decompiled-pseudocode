/*
 * XREFs of ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C004349C
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0043E70 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0040334 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00408B8 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  int v11; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  struct DirectComposition::CResourceMarshaler *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v6 = *((_QWORD *)this + 16);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 68LL)
    || (v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16),
        DirectComposition::CResourceMarshaler::AddRef(v12),
        --*((_DWORD *)v12 + 5),
        *((_DWORD *)v12 + 5) != 1) )
  {
    v7 = 1;
    v11 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x44u, &v16);
    v12 = v16;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_6;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 13LL, a3, a4);
  v13 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 160LL))(
        this,
        a2,
        6LL,
        v12,
        a5);
LABEL_6:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  }
  return v13;
}
