/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140010FD0
 * Callers:
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x14000F628 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140025D58 (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

unsigned int __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(__int64 a1)
{
  unsigned int result; // eax
  void *v2; // r10
  unsigned int v3; // ebx
  CAudioDGModule *v4; // rcx
  void (*v5)(void); // rax

  result = ATL::CComMultiThreadModel::SafeDecrementReference((int *)(a1 + 8));
  v3 = result;
  if ( result )
  {
    if ( result == 1 )
    {
      v4 = ATL::_pAtlModule;
      v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
      if ( (char *)v5 == (char *)CAudioDGModule::Unlock )
      {
        result = v3;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)ATL::_pAtlModule + 3, 0xFFFFFFFF) == 1 )
          *((_BYTE *)v4 + 97) = 1;
      }
      else
      {
        v5();
        return v3;
      }
    }
  }
  else if ( v2 )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v2);
    return v3;
  }
  return result;
}
