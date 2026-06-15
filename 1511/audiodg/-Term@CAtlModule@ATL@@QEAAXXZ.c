/*
 * XREFs of ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x140027B84
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140018940 (--1CAudioDGModule@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x1400270C8 (-AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z.c)
 */

void __fastcall ATL::CAtlModule::Term(ATL::CAtlModule *this)
{
  _DWORD *v1; // rsi
  __int64 v3; // r14

  v1 = (_DWORD *)((char *)this + 8);
  if ( *((_DWORD *)this + 2) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      ATL::AtlCallTermFunc((ATL::CAtlModule *)((char *)this + 8));
      *((_QWORD *)this + 2) = 0LL;
    }
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 8));
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    *v1 = 0;
  }
}
