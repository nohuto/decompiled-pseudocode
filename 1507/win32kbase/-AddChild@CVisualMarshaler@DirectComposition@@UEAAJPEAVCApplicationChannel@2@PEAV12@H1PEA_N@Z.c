/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C002A290
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( (*((_DWORD *)a3 + 4) & 0x4000) != 0 || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 19) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 18) = *((_QWORD *)a5 + 18);
        *((_QWORD *)a5 + 18) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 18) = *((_QWORD *)this + 17);
        *((_QWORD *)this + 17) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 136);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 144LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 18) = a5;
      *i = a3;
    }
    DirectComposition::CResourceMarshaler::AddRef(a3);
    *((_DWORD *)a3 + 4) |= 0x4000u;
    *((_QWORD *)a3 + 19) = this;
    *((_DWORD *)this + 4) |= 0x10000u;
    *a6 = 1;
  }
  return v6;
}
