/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18001F828
 * Callers:
 *     DllGetClassObject @ 0x18001FFA0 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x1800200A0 (DllGetActivationFactory.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180002E94 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180002ED8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        PSRWLOCK SRWLock)
{
  PSRWLOCK v6; // rsi
  void *v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  PVOID v12; // rbx
  void *v13; // rcx
  PVOID Ptr; // [rsp+50h] [rbp+20h] BYREF
  PSRWLOCK v15; // [rsp+68h] [rbp+38h] BYREF

  Ptr = 0LL;
  v6 = SRWLock;
  SRWLock->Ptr = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, &Microsoft::WRL::Details::ModuleBase::moduleLock_);
    v9 = **(void ***)a4[1].Data4;
    if ( v9 )
    {
      Ptr = DecodePointer(v9);
      v10 = (**(__int64 (__fastcall ***)(PVOID, unsigned int *, PSRWLOCK))Ptr)(Ptr, a3, v6);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return v10;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
  }
  result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, PVOID *))&a4->Data1)(
             a2,
             a4,
             a3,
             &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_17;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v15, &Microsoft::WRL::Details::ModuleBase::moduleLock_);
    v13 = **(void ***)a4[1].Data4;
    if ( v13 )
    {
      v12 = DecodePointer(v13);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    if ( !v12 )
    {
LABEL_17:
      v12 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v6->Ptr = v12;
    return 0LL;
  }
  return result;
}
