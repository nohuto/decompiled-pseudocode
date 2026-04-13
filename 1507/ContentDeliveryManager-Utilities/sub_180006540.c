/*
 * XREFs of sub_180006540 @ 0x180006540
 * Callers:
 *     DllGetClassObject @ 0x180006A20 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x180006B20 (DllGetActivationFactory.c)
 * Callees:
 *     sub_1800063E0 @ 0x1800063E0 (sub_1800063E0.c)
 *     sub_180006410 @ 0x180006410 (sub_180006410.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180006540(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, PSRWLOCK SRWLock)
{
  PSRWLOCK v6; // r14
  void *v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  PVOID v12; // rsi
  void *v13; // rcx
  PVOID Ptr; // [rsp+50h] [rbp+30h] BYREF
  PSRWLOCK v15; // [rsp+68h] [rbp+48h] BYREF

  Ptr = 0LL;
  v6 = SRWLock;
  SRWLock->Ptr = 0LL;
  if ( **(_QWORD **)(a4 + 24) )
  {
    sub_180006410(&SRWLock, &stru_18003AC78);
    v9 = **(void ***)(a4 + 24);
    if ( v9 )
    {
      Ptr = DecodePointer(v9);
      v10 = (**(__int64 (__fastcall ***)(PVOID, __int64, PSRWLOCK))Ptr)(Ptr, a3, v6);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return v10;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, PVOID *))a4)(a2, a4, a3, &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*a2 & 4) != 0 )
      goto LABEL_17;
    v12 = 0LL;
    sub_1800063E0(&v15, &stru_18003AC78);
    v13 = **(void ***)(a4 + 24);
    if ( v13 )
    {
      v12 = DecodePointer(v13);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      **(_QWORD **)(a4 + 24) = EncodePointer(Ptr);
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
