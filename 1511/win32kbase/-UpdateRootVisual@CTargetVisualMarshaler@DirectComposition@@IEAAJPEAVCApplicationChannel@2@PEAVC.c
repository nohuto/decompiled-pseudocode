/*
 * XREFs of ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0073B18
 * Callers:
 *     ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0073BD0 (-ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0073D30 (-SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  struct DirectComposition::CVisualMarshaler *v9; // rcx
  DirectComposition::CTargetVisualMarshaler *v11; // rax

  v4 = 0;
  *a4 = 0;
  if ( a3 && (v11 = (DirectComposition::CTargetVisualMarshaler *)*((_QWORD *)a3 + 19)) != 0LL && v11 != this )
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
        (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(*(_QWORD *)v9 + 272LL))(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 7));
        *((_QWORD *)this + 7) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)this + 7) = a3;
        ++*((_DWORD *)a3 + 5);
        *(_QWORD *)(*((_QWORD *)this + 7) + 152LL) = this;
      }
      *((_DWORD *)this + 4) |= 0x40u;
      *a4 = 1;
    }
  }
  return v4;
}
