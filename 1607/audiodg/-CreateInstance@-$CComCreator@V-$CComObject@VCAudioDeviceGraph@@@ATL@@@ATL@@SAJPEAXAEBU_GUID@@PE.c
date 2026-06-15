/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012B94
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012B80 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140005F80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x140007874 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400262D4 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400289AC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r14
  const struct _GUID *v4; // r15
  int v6; // esi
  CAudioDeviceGraph *v7; // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(void *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v10)(void *, const struct _GUID *, void **); // rax
  int Interface; // eax
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v15)(void *, const struct _GUID *, void **); // [rsp+88h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CAudioDeviceGraph *)operator new(0x180uLL);
    v9 = (__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v7;
    v12[5] = v7;
    if ( v7 )
    {
      CAudioDeviceGraph::CAudioDeviceGraph(v7);
      *v9 = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
      v9[1] = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
      v9[2] = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
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
      || ((v10 = **v9, v10 != ATL::CComObject<CAudioDeviceGraph>::QueryInterface)
        ? (Interface = v10(v9, v4, v3))
        : (Interface = ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(void *, const struct _GUID *, void **), __int64))(*v9)[21])(
        v9,
        1LL);
    }
  }
  return (unsigned int)v6;
}
