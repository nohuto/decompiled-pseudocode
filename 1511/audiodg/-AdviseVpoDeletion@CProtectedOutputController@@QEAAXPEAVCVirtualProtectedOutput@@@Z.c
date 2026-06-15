/*
 * XREFs of ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140016C90
 * Callers:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140016D30 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CProtectedOutputController::AdviseVpoDeletion(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2)
{
  __int64 (__fastcall *v4)(CProtectedOutputController *__hidden, struct CVirtualProtectedOutput *, enum EAudioConstriction); // rsi
  __int64 **v5; // r9
  __int64 *i; // rdx
  __int64 *v7; // rax
  __int64 v8; // rax

  v4 = *(__int64 (__fastcall **)(CProtectedOutputController *__hidden, struct CVirtualProtectedOutput *, enum EAudioConstriction))(*(_QWORD *)this + 48LL);
  if ( v4 == CProtectedOutputController::RequestPolicyChange )
    CProtectedOutputController::RequestPolicyChange(this, a2, eAudioConstrictionOff);
  else
    v4(this, a2, eAudioConstrictionOff);
  v5 = (__int64 **)((char *)this + 16);
  for ( i = (__int64 *)*((_QWORD *)this + 2); i && (struct CVirtualProtectedOutput *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( !i )
    ATL::AtlThrowImpl(-2147467259);
  v7 = (__int64 *)*i;
  if ( i == *v5 )
    *v5 = v7;
  else
    *(_QWORD *)i[1] = v7;
  v8 = i[1];
  if ( i == *((__int64 **)this + 3) )
    *((_QWORD *)this + 3) = v8;
  else
    *(_QWORD *)(*i + 8) = v8;
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode((char *)this + 16);
}
