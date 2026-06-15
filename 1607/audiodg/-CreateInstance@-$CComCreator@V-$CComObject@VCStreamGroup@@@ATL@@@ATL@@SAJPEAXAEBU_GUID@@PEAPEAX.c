/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012CF0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012B60 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140003050 (--0CStreamGroup@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011200 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x1400262E4 (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // esi
  CStreamGroup *v7; // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(char *, const struct _GUID *, char **); // rbx
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **); // rax
  int Interface; // eax
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v15)(char *, const struct _GUID *, char **); // [rsp+88h] [rbp+20h]

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
    v9 = (__int64 (__fastcall ***)(char *, const struct _GUID *, char **))v7;
    v12[5] = v7;
    if ( v7 )
    {
      CStreamGroup::CStreamGroup(v7);
      *v9 = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
      v9[1] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 2), v8);
    v6 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 3));
    if ( v6 >= 0 )
    {
      *((_BYTE *)v9 + 64) = 1;
      v6 = 0;
    }
    CStreamGroup::InternalFinalConstructRelease((CStreamGroup *)v9);
    if ( v6
      || ((v10 = **v9, v10 != ATL::CComObject<CStreamGroup>::QueryInterface)
        ? (Interface = v10((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CStreamGroup>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(char *, const struct _GUID *, char **), __int64))(*v9)[12])(
        v9,
        1LL);
    }
  }
  return (unsigned int)v6;
}
