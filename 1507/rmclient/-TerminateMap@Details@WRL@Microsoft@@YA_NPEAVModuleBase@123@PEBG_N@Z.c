/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180003500
 * Callers:
 *     ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800034C4 (--1-$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003610 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003630 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003640 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000BC84 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AV-$SyncLockT@USRWLockExclusiveTraits@HandleTr.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v3)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  const struct Microsoft::WRL::Details::CreatorMap **FirstEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v6; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v7)(Microsoft::WRL::Details::ModuleBase *__hidden); // rdi
  const struct Microsoft::WRL::Details::CreatorMap **LastEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbp
  unsigned int (__fastcall *v10)(Microsoft::WRL::Details::ModuleBase *__hidden); // rdi
  unsigned int (__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  unsigned int ObjectCount; // eax
  __int64 v14; // rax
  void **v15; // rcx
  void *v16; // rdi
  PVOID v17; // rsi
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  SRWLock = a2;
  v3 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 32LL);
  if ( v3 == Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer )
    FirstEntryPointer = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(this);
  else
    FirstEntryPointer = (const struct Microsoft::WRL::Details::CreatorMap **)((__int64 (__fastcall *)(Microsoft::WRL::Details *, RTL_SRWLOCK *, const unsigned __int16 *))v3)(
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
        v14 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v14);
        v15 = (void **)*((_QWORD *)*v6 + 3);
        v16 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v17 = DecodePointer(v16);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 16LL))(v17);
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
