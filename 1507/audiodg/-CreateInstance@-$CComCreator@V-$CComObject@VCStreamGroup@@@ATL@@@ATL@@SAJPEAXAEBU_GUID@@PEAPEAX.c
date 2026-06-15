/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400131F4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400131E0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140012990 (--0CStreamGroup@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140013590 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013A30 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14002738C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x14002A2BC (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  __int64 v4; // r13
  int v6; // r15d
  CStreamGroup *v7; // rax
  volatile int *v8; // rdx
  CStreamGroup *v9; // rsi
  __int64 (__fastcall *v10)(CStreamGroup *, __int64, _QWORD *); // rbx
  int Interface; // eax
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF
  CStreamGroup *v15; // [rsp+88h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CStreamGroup *)operator new(0x130uLL);
    v9 = v7;
    v12[5] = v7;
    if ( v7 )
    {
      CStreamGroup::CStreamGroup(v7);
      *(_QWORD *)v9 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
      *((_QWORD *)v9 + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v9 = 0LL;
    }
    v15 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v12;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v15;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CStreamGroup *)((char *)v9 + 16), v8);
    v6 = ATL::CComCriticalSection::Init((CStreamGroup *)((char *)v9 + 24));
    if ( v6 >= 0 )
    {
      *((_BYTE *)v9 + 64) = 1;
      v6 = 0;
    }
    CStreamGroup::InternalFinalConstructRelease(v9);
    if ( v6
      || ((v10 = **(__int64 (__fastcall ***)(CStreamGroup *, __int64, _QWORD *))v9,
           (char *)v10 != (char *)ATL::CComObject<CStreamGroup>::QueryInterface)
        ? (Interface = v10(v9, v4, v3))
        : (Interface = ATL::CComObject<CStreamGroup>::QueryInterface(v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      (*(void (__fastcall **)(CStreamGroup *, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
