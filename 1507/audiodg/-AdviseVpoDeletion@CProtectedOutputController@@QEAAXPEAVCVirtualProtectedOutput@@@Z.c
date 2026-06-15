/*
 * XREFs of ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140030C60
 * Callers:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140031250 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CProtectedOutputController::AdviseVpoDeletion(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2)
{
  _QWORD *i; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rax

  (*(void (__fastcall **)(CProtectedOutputController *, struct CVirtualProtectedOutput *, _QWORD))(*(_QWORD *)this + 48LL))(
    this,
    a2,
    0LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 2); i && (struct CVirtualProtectedOutput *)i[2] != a2; i = (_QWORD *)*i )
    ;
  if ( !i )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (_QWORD *)*i;
  if ( i == *((_QWORD **)this + 2) )
    *((_QWORD *)this + 2) = v5;
  else
    *(_QWORD *)i[1] = v5;
  v6 = i[1];
  if ( i == *((_QWORD **)this + 3) )
    *((_QWORD *)this + 3) = v6;
  else
    *(_QWORD *)(*i + 8LL) = v6;
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(
    (__int64)this + 16,
    i);
}
