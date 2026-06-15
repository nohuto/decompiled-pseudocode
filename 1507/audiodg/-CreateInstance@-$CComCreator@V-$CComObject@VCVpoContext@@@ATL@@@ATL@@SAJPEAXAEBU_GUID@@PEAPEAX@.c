/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017A54
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017A40 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x1400166F4 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016790 (-QueryInterface@-$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x1400168D8 (--0-$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14002738C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140034818 (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CVpoContext>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // esi
  void *v7; // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(char *, const struct _GUID *, char **); // rdi
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **); // rsi
  int Interface; // eax
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v15)(char *, const struct _GUID *, char **); // [rsp+78h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = operator new(0x58uLL);
    v12[5] = v7;
    if ( v7 )
      v9 = (__int64 (__fastcall ***)(char *, const struct _GUID *, char **))ATL::CComObject<CVpoContext>::CComObject<CVpoContext>((__int64)v7);
    else
      v9 = 0LL;
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 1), v8);
    v6 = ATL::CComSafeDeleteCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 2));
    if ( v6 >= 0 )
      v6 = 0;
    CVpoContext::InternalFinalConstructRelease((CVpoContext *)v9);
    if ( v6
      || ((v10 = **v9, v10 != ATL::CComObject<CVpoContext>::QueryInterface)
        ? (Interface = v10((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CVpoContext>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(char *, const struct _GUID *, char **), __int64))(*v9)[5])(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
