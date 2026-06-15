/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140008440
 * Callers:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x140004F40 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140026F78 (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  __int64 (__fastcall *v2)(CAudioDGModule *__hidden); // rsi

  v1 = _InterlockedDecrement(a1 + 2);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v2 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
      if ( v2 == CAudioDGModule::Unlock )
        CAudioDGModule::Unlock(ATL::_pAtlModule);
      else
        v2(ATL::_pAtlModule);
    }
  }
  else if ( a1 )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'((void *)a1);
  }
  return v1;
}
