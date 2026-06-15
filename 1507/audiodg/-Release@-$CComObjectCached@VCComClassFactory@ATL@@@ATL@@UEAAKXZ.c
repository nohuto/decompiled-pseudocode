/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140013830
 * Callers:
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140013370 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

unsigned int __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(char *Block)
{
  unsigned int result; // eax
  _DWORD *v3; // rcx
  unsigned int v4; // ebx
  CAudioDGModule *v5; // rdi
  __int64 (__fastcall *v6)(CAudioDGModule *__hidden); // rsi

  result = ATL::CComMultiThreadModel::SafeDecrementReference((int *)Block + 2);
  v4 = result;
  if ( result )
  {
    if ( result == 1 )
    {
      v5 = ATL::_pAtlModule;
      v6 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
      if ( v6 == CAudioDGModule::Unlock )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)ATL::_pAtlModule + 3, 0xFFFFFFFF) == 1 )
          *((_BYTE *)v5 + 97) = 1;
      }
      else
      {
        v6(ATL::_pAtlModule);
        return v4;
      }
    }
  }
  else if ( Block )
  {
    *v3 = -1073741823;
    *(_QWORD *)Block = &ATL::CComClassFactory::`vftable';
    if ( Block[56] != (_BYTE)result )
    {
      Block[56] = result;
      DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 16));
    }
    operator delete(Block);
    return v4;
  }
  return result;
}
