/*
 * XREFs of ?ReplaceChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00D9BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::ReplaceChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi

  v4 = 0;
  *a4 = 0;
  if ( *((struct DirectComposition::CVisualMarshaler **)this + 17) != a3 || *((_QWORD *)a3 + 18) )
  {
    if ( (*((_DWORD *)a3 + 4) & 0x4000) == 0 || *((DirectComposition::CVisualMarshaler **)a3 + 19) == this )
    {
      DirectComposition::CResourceMarshaler::AddRef(a3);
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, bool *))(*(_QWORD *)this + 232LL))(
        this,
        a2,
        a4);
      *((_QWORD *)this + 17) = a3;
      *((_DWORD *)a3 + 4) |= 0x4000u;
      *((_QWORD *)a3 + 19) = this;
      *((_DWORD *)this + 4) |= 0x10000u;
      *a4 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v4;
}
