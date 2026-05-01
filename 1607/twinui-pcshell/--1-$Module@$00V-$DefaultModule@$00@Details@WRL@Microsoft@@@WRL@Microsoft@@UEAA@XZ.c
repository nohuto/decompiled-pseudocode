/*
 * XREFs of ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180004488
 * Callers:
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180004730 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??__Fmodule@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x180031D60 (--__Fmodule@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@S.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180001674 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
        _QWORD *a1)
{
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbx
  void **v2; // rcx
  void *v3; // rdi
  PVOID v4; // rax
  __int64 result; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  for ( i = _minATLObjMap_PCShellImmersiveComponentCreator_COM;
        i < (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentrylast;
        ++i )
  {
    if ( *i && **((_QWORD **)*i + 3) )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, &Microsoft::WRL::Details::ModuleBase::moduleLock_);
      v2 = (void **)*((_QWORD *)*i + 3);
      v3 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
        v4 = DecodePointer(v3);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
      }
      else if ( SRWLock )
      {
        ReleaseSRWLockExclusive(SRWLock);
        SRWLock = 0LL;
      }
    }
  }
  result = Microsoft::WRL::Details::ModuleBase::objectCount_;
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  return result;
}
