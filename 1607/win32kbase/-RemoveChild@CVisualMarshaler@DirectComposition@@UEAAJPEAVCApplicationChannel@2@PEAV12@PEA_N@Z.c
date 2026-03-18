/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00437C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // esi
  _QWORD *i; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( *((DirectComposition::CVisualMarshaler **)a3 + 20) == this )
  {
    for ( i = (_QWORD *)((char *)this + 144);
          (struct DirectComposition::CVisualMarshaler *)*i != a3;
          i = (_QWORD *)(*i + 152LL) )
    {
      ;
    }
    *i = *((_QWORD *)a3 + 19);
    v10 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 19) = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(v10 + 264))(a3) )
    {
      *((_DWORD *)a3 + 4) |= 8u;
      *((_QWORD *)a3 + 22) = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a3;
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
