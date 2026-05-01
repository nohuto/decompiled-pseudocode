/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800017F0
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x1800017B8 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180001730 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x1800035F0 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003610 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003620 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v4)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  const struct Microsoft::WRL::Details::CreatorMap **FirstEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v6; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v7)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  const struct Microsoft::WRL::Details::CreatorMap **LastEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **i; // rsi
  unsigned int (__fastcall *v10)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int (__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int ObjectCount; // eax
  RTL_SRWLOCK *v14; // rax
  void **v15; // rcx
  void *v16; // rbp
  PVOID v17; // rax
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

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
      if ( v10 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
        Microsoft::WRL::Details::ModuleBase::GetObjectCount(this);
      else
        v10(this);
      if ( **((_QWORD **)*v6 + 3) )
      {
        v14 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
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
