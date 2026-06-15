/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002D384
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002D370 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@AT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002CD98 (--0-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v7; // esi
  void *v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  try
  {
    v8 = operator new(0x1E0uLL);
    if ( v8 )
      v9 = (struct _RTL_CRITICAL_SECTION *)ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::CComAggObject<CSystemAudioDeviceOffloadGraph>(
                                             (__int64)v8,
                                             a1);
    else
      v9 = 0LL;
    v10 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v7 = -2147024882;
    v9 = v10;
  }
  if ( v9 )
  {
    v7 = ATL::CComSafeDeleteCriticalSection::Init(v9 + 10);
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7 >= 0 )
      v7 = 0;
    if ( v7
      || (v7 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, _QWORD *))v9->DebugInfo->Type)(
                 v9,
                 v4,
                 v3)) != 0 )
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))v9->DebugInfo->ProcessLocksList.Blink)(v9, 1LL);
    }
  }
  return (unsigned int)v7;
}
