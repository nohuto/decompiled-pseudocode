/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00171D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C0017C50 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi
  _QWORD *i; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( *((DirectComposition::CVisualMarshaler **)a3 + 19) == this )
  {
    for ( i = (_QWORD *)((char *)this + 136);
          (struct DirectComposition::CVisualMarshaler *)*i != a3;
          i = (_QWORD *)(*i + 144LL) )
    {
      ;
    }
    *i = *((_QWORD *)a3 + 18);
    v10 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 18) = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(v10 + 272))(a3) )
    {
      DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(this, a2, a3);
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
