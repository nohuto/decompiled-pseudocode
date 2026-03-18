/*
 * XREFs of ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0013208
 * Callers:
 *     ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00132C0 (-ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0013410 (-SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi
  struct DirectComposition::CVisualMarshaler *v9; // rcx
  __int64 v10; // rcx

  v4 = 0;
  *a4 = 0;
  if ( a3 && (*((_DWORD *)a3 + 4) & 0x4000) != 0 && *((DirectComposition::CTargetVisualMarshaler **)a3 + 19) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 7);
    if ( v9 != a3 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(*(_QWORD *)v9 + 248LL))(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 7));
        *((_QWORD *)this + 7) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)this + 7) = a3;
        DirectComposition::CResourceMarshaler::AddRef(a3);
        v10 = *((_QWORD *)this + 7);
        *(_DWORD *)(v10 + 16) |= 0x4000u;
        *(_QWORD *)(v10 + 152) = this;
      }
      *((_DWORD *)this + 4) |= 0x40u;
      *a4 = 1;
    }
  }
  return v4;
}
