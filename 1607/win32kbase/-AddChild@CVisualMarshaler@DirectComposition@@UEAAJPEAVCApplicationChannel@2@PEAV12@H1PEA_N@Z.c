/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C0043940
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // esi
  bool v9; // zf
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 20) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 20) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 19) = *((_QWORD *)a5 + 19);
        *((_QWORD *)a5 + 19) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 19) = *((_QWORD *)this + 18);
        *((_QWORD *)this + 18) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 144);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 152LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 19) = a5;
      *i = a3;
    }
    DirectComposition::CResourceMarshaler::AddRef(a3);
    v9 = (*((_BYTE *)a3 + 232) & 0x10) == 0;
    *((_QWORD *)a3 + 20) = this;
    if ( !v9 )
    {
      *((_DWORD *)this + 4) |= 0x4000u;
      *a6 = 1;
    }
  }
  return v6;
}
