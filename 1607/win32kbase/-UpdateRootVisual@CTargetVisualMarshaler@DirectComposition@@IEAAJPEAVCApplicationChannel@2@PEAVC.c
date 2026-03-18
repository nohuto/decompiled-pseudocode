/*
 * XREFs of ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0077C54
 * Callers:
 *     ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0077D10 (-ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0077E30 (-SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        DirectComposition::CTargetVisualMarshaler **a3,
        bool *a4)
{
  unsigned int v4; // edi
  struct DirectComposition::CVisualMarshaler *v9; // rcx
  DirectComposition::CTargetVisualMarshaler *v11; // rax

  v4 = 0;
  *a4 = 0;
  if ( a3 && (v11 = a3[20]) != 0LL && v11 != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 7);
    if ( v9 != (struct DirectComposition::CVisualMarshaler *)a3 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(*(_QWORD *)v9 + 264LL))(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 7));
        *((_QWORD *)this + 7) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)this + 7) = a3;
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)a3);
        *(_QWORD *)(*((_QWORD *)this + 7) + 160LL) = this;
      }
      *((_DWORD *)this + 4) |= 0x20u;
      *a4 = 1;
    }
  }
  return v4;
}
