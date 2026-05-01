/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180003650
 * Callers:
 *     ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x180003620 (--1-$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180003398 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180003EF0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003F00 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003F20 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003F30 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180004290 (-Release@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v4)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  const struct Microsoft::WRL::Details::CreatorMap **FirstEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v6; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v7)(Microsoft::WRL::Details::ModuleBase *__hidden); // rsi
  const struct Microsoft::WRL::Details::CreatorMap **LastEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **i; // rsi
  unsigned int (__fastcall *v10)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbp
  unsigned int (__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  unsigned int ObjectCount; // eax
  struct _RTL_SRWLOCK *(__fastcall *v14)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbp
  RTL_SRWLOCK *Lock; // rax
  void **v16; // rcx
  void *v17; // rbp
  Windows::System::CMemoryManager *v18; // rax
  unsigned int (__fastcall *v19)(Windows::System::CMemoryManager *__hidden); // rbp
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  SRWLock = a2;
  v4 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 32LL);
  if ( v4 == Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer )
    FirstEntryPointer = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(this);
  else
    FirstEntryPointer = (const struct Microsoft::WRL::Details::CreatorMap **)((__int64 (__fastcall *)(Microsoft::WRL::Details *, RTL_SRWLOCK *, const unsigned __int16 *))v4)(
                                                                               this,
                                                                               a2,
                                                                               a3);
  v6 = FirstEntryPointer + 1;
  v7 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 48LL);
  if ( v7 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
    LastEntryPointer = Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(this);
  else
    LastEntryPointer = v7(this);
  for ( i = LastEntryPointer; v6 < i; ++v6 )
  {
    if ( *v6 )
    {
      v10 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 24LL);
      if ( v10 != Microsoft::WRL::Details::ModuleBase::GetObjectCount )
        v10(this);
      if ( **((_QWORD **)*v6 + 3) )
      {
        v14 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v14 == Microsoft::WRL::Details::ModuleBase::GetLock )
          Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
        else
          Lock = v14(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, Lock);
        v16 = (void **)*((_QWORD *)*v6 + 3);
        v17 = *v16;
        if ( *v16 )
        {
          *v16 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v18 = (Windows::System::CMemoryManager *)DecodePointer(v17);
          v19 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v18 + 16LL);
          if ( v19 == Windows::System::CMemoryManager::Release )
            Windows::System::CMemoryManager::Release(v18);
          else
            v19(v18);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
  }
  v11 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 24LL);
  if ( v11 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    ObjectCount = Microsoft::WRL::Details::ModuleBase::GetObjectCount(this);
  else
    ObjectCount = v11(this);
  return ObjectCount == 0;
}
