/*
 * XREFs of ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C002A0D8
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C002A880 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEAX_K@Z @ 0x1C002E38C (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E7C0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // r14
  int v11; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  unsigned int v13; // esi
  int v14; // eax
  bool *v15; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *((_QWORD *)this + 12);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 28LL)
    || (v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12),
        DirectComposition::CResourceMarshaler::AddRef(v12),
        --*((_DWORD *)v12 + 5),
        *((_DWORD *)v12 + 5) != 1) )
  {
    v7 = 1;
    v11 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x1Cu, &v17);
    v12 = v17;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_7;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v13 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 12));
      v15 = a5;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_QWORD *)this + 12) = v12;
      *v15 = 1;
      return v13;
    }
LABEL_7:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  }
  return v13;
}
