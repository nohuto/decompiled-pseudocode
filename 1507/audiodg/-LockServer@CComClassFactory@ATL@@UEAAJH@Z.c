/*
 * XREFs of ?LockServer@CComClassFactory@ATL@@UEAAJH@Z @ 0x1400271F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComClassFactory::LockServer(ATL::CComClassFactory *this, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)ATL::_pAtlModule;
  if ( a2 )
    (*(void (__fastcall **)(CAudioDGModule *))(v2 + 8))(ATL::_pAtlModule);
  else
    (*(void (__fastcall **)(CAudioDGModule *))(v2 + 16))(ATL::_pAtlModule);
  return 0LL;
}
