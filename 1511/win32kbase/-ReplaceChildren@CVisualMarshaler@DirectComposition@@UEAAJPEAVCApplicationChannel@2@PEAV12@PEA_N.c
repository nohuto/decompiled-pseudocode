/*
 * XREFs of ?ReplaceChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00DAFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::ReplaceChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  DirectComposition::CVisualMarshaler *v8; // rax
  bool v9; // zf

  v4 = 0;
  *a4 = 0;
  if ( *((struct DirectComposition::CVisualMarshaler **)this + 17) != a3 || *((_QWORD *)a3 + 18) )
  {
    v8 = (DirectComposition::CVisualMarshaler *)*((_QWORD *)a3 + 19);
    if ( !v8 || v8 == this )
    {
      ++*((_DWORD *)a3 + 5);
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, bool *))(*(_QWORD *)this + 248LL))(
        this,
        a2,
        a4);
      *((_QWORD *)this + 17) = a3;
      v9 = (*((_BYTE *)a3 + 220) & 0x10) == 0;
      *((_QWORD *)a3 + 19) = this;
      if ( !v9 )
      {
        *((_DWORD *)this + 4) |= 0x8000u;
        *a4 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v4;
}
