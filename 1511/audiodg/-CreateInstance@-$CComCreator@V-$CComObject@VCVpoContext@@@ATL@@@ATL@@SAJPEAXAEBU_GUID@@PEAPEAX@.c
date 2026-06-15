/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400017C4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400018A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140001200 (-QueryInterface@-$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140001348 (--0-$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400013C8 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CVpoContext>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r14
  const struct _GUID *v4; // r15
  int v5; // esi
  void *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 (__fastcall *v8)(void *, const struct _GUID *, void **); // rsi
  int Interface; // eax
  volatile signed __int32 *v13; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = operator new(0x58uLL);
    if ( v6 )
      v7 = (volatile signed __int32 *)ATL::CComObject<CVpoContext>::CComObject<CVpoContext>((__int64)v6);
    else
      v7 = 0LL;
    v13 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v13;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v5 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 4));
    if ( v5 >= 0 )
      v5 = 0;
    _InterlockedDecrement(v7 + 2);
    if ( v5
      || ((v8 = **(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v7,
           v8 != ATL::CComObject<CVpoContext>::QueryInterface)
        ? (Interface = v8((void *)v7, v4, v3))
        : (Interface = ATL::CComObject<CVpoContext>::QueryInterface((void *)v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
