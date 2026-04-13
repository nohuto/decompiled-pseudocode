/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180006238
 * Callers:
 *     DllCanUnloadNow @ 0x180006750 (DllCanUnloadNow.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180007260 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??__Fmodule@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x180029CC0 (--__Fmodule@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@S.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800061D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  char v3; // bp
  char *i; // rsi
  void **v5; // rcx
  void *v6; // rbx
  PVOID v7; // rdi
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  SRWLock = a2;
  v3 = (char)a3;
  for ( i = (char *)&_pobjectentrymid; i < _pobjectentrylast; i += 8 )
  {
    if ( *(_QWORD *)i )
    {
      if ( Microsoft::WRL::Details::ModuleBase::objectCount_ && !v3 )
        return 0;
      if ( **(_QWORD **)(*(_QWORD *)i + 24LL) )
      {
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, &Microsoft::WRL::Details::ModuleBase::moduleLock_);
        v5 = *(void ***)(*(_QWORD *)i + 24LL);
        v6 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v7 = DecodePointer(v6);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
  }
  return Microsoft::WRL::Details::ModuleBase::objectCount_ == 0;
}
