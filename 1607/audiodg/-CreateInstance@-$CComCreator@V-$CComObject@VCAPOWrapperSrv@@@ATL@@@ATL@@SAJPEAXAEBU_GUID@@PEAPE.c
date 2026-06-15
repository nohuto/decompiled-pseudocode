/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400128A0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012880 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140010FB0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400262D4 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // edi
  __int64 (__fastcall ***v7)(char *, const struct _GUID *, char **); // rax
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
    v7 = (__int64 (__fastcall ***)(char *, const struct _GUID *, char **))operator new(0x68uLL);
    v9 = v7;
    v12[5] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 6) = 0;
      v7[4] = 0LL;
      v7[5] = 0LL;
      v7[6] = 0LL;
      v7[7] = 0LL;
      v7[8] = 0LL;
      *((_BYTE *)v7 + 72) = 0;
      v7[10] = 0LL;
      v7[11] = 0LL;
      v7[12] = 0LL;
      *v7 = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
      v7[1] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
      v7[2] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 3), v8);
    v6 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 4));
    if ( v6 >= 0 )
    {
      *((_BYTE *)v9 + 72) = 1;
      v6 = 0;
    }
    CAudioDeviceGraph::InternalFinalConstructRelease((CAudioDeviceGraph *)v9);
    if ( v6
      || ((v10 = **v9, v10 != ATL::CComObject<CAPOWrapperSrv>::QueryInterface)
        ? (Interface = v10((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CAPOWrapperSrv>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(char *, const struct _GUID *, char **), __int64))(*v9)[7])(v9, 1LL);
    }
  }
  return (unsigned int)v6;
}
