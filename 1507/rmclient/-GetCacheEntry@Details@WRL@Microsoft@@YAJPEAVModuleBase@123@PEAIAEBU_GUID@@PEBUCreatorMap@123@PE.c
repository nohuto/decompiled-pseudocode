/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180003340
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003170 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18000B9FC (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800028F0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180003600 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003A50 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct Microsoft::WRL::Details::CreatorMap *Ptr)
{
  void **v5; // r14
  const struct Microsoft::WRL::Details::CreatorMap *v6; // rsi
  struct _RTL_SRWLOCK *(__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbp
  RTL_SRWLOCK *Lock; // rax
  RTL_SRWLOCK *v13; // rbp
  void *v14; // rcx
  int (*v15)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  unsigned int v17; // ebx
  __int64 result; // rax
  struct _RTL_SRWLOCK *(__fastcall *v19)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbp
  RTL_SRWLOCK *v20; // rax
  RTL_SRWLOCK *v21; // rdi
  void *v22; // rcx

  v5 = (void **)Ptr;
  v6 = 0LL;
  Ptr = 0LL;
  *v5 = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    v11 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
    if ( v11 == Microsoft::WRL::Details::ModuleBase::GetLock )
      Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
    else
      Lock = v11(this);
    v13 = Lock;
    AcquireSRWLockShared(Lock);
    v14 = **(void ***)a4[1].Data4;
    if ( v14 )
    {
      Ptr = (const struct Microsoft::WRL::Details::CreatorMap *)DecodePointer(v14);
      v15 = **(int (***)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **))Ptr;
      if ( v15 == Windows::System::CMemoryManager::QueryInterface )
        Interface = Windows::System::CMemoryManager::QueryInterface(Ptr, a3, v5);
      else
        Interface = ((__int64 (__fastcall *)(const struct Microsoft::WRL::Details::CreatorMap *, const struct _GUID *, void **))v15)(
                      Ptr,
                      a3,
                      v5);
      v17 = Interface;
      if ( v13 )
        ReleaseSRWLockShared(v13);
      return v17;
    }
    if ( v13 )
      ReleaseSRWLockShared(v13);
  }
  if ( *(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))&a4->Data1 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
    result = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
               a2,
               (__int64)a4,
               (__int64)a3,
               (__int64)&Ptr);
  else
    result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, const struct _GUID *, const struct Microsoft::WRL::Details::CreatorMap **))&a4->Data1)(
               a2,
               a4,
               a3,
               &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_22;
    v19 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
    if ( v19 == Microsoft::WRL::Details::ModuleBase::GetLock )
      v20 = Microsoft::WRL::Details::ModuleBase::GetLock(this);
    else
      v20 = v19(this);
    v21 = v20;
    AcquireSRWLockExclusive(v20);
    v22 = **(void ***)a4[1].Data4;
    if ( v22 )
    {
      v6 = (const struct Microsoft::WRL::Details::CreatorMap *)DecodePointer(v22);
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    if ( v21 )
      ReleaseSRWLockExclusive(v21);
    if ( v6 )
    {
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    else
    {
LABEL_22:
      v6 = Ptr;
    }
    *v5 = v6;
    return 0LL;
  }
  return result;
}
