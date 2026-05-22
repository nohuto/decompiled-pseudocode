/*
 * XREFs of ??$MakeAndInitialize@VInputAcknowledge@@V1@AEAIQEAVInputQueue@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@012@AEAI$$QEBQEAVInputQueue@@@Z @ 0x18006C868
 * Callers:
 *     ?OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z @ 0x18006C590 (-OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputAcknowledge,InputAcknowledge,unsigned int &,InputQueue * const>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // esi

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &InputAcknowledge::`vftable';
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    v8 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))*(&InputAcknowledge::`vftable' + 4))(
           v7,
           InputQueue::s_nextEventId,
           *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      *a1 = (__int64)v7;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
