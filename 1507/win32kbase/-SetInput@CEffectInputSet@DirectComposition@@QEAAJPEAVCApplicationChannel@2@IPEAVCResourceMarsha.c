/*
 * XREFs of ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C00D94F0
 * Callers:
 *     ?SetReferenceProperty@CCompiledEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D89E0 (-SetReferenceProperty@CCompiledEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D8C50 (-SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::SetInput(
        DirectComposition::CEffectInputSet *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  __int64 v7; // rdi
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  DirectComposition::CResourceMarshaler *v9; // rcx

  if ( a3 >= *(_DWORD *)this )
    return 3221225485LL;
  v7 = a3;
  v8 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8LL * a3);
  if ( v8 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
  *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7) = a4;
  v9 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * v7);
  if ( v9 )
    DirectComposition::CResourceMarshaler::AddRef(v9);
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
