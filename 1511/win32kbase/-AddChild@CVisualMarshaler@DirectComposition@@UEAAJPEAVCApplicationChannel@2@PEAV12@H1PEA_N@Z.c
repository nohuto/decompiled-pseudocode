/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C0017120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // r10d
  bool v7; // zf
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 19) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 19) != this )
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
    ++*((_DWORD *)a3 + 5);
    v7 = (*((_BYTE *)a3 + 220) & 0x10) == 0;
    *((_QWORD *)a3 + 19) = this;
    if ( !v7 )
    {
      *((_DWORD *)this + 4) |= 0x8000u;
      *a6 = 1;
    }
  }
  return v6;
}
