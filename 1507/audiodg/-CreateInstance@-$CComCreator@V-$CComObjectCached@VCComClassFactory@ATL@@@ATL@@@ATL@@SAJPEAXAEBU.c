/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400134A0
 * Callers:
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140013370 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140013590 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013900 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002598C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  int v6; // esi
  char *v7; // rax
  _BYTE *v8; // rbx
  __int64 (__fastcall *v9)(_BYTE *, __int64, _QWORD *); // rdi
  int Interface; // eax
  _BYTE *v12; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (char *)operator new(0x48uLL);
    v8 = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 0;
      memset_0(v7 + 16, 0, 0x28uLL);
      v8[56] = 0;
      *(_QWORD *)v8 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v12 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = a1;
    v6 = -2147024882;
    v8 = v12;
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = v5;
    v6 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v8 + 16));
    if ( v6 < 0
      || ((v8[56] = 1,
           v9 = **(__int64 (__fastcall ***)(_BYTE *, __int64, _QWORD *))v8,
           (char *)v9 != (char *)ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface)
        ? (Interface = v9(v8, v4, v3))
        : (Interface = ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface(v8, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v8);
    }
  }
  return (unsigned int)v6;
}
