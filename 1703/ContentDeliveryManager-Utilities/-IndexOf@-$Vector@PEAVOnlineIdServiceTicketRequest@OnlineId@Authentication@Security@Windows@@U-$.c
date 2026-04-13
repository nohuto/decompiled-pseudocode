/*
 * XREFs of ?IndexOf@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x1800141C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x1800176A0 (-IndexOfInternal@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wind.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _QWORD *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // edi
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rcx
  int v17; // ecx
  _QWORD *v18; // rbx
  _QWORD v20[3]; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v20, (RTL_SRWLOCK *)(a1 + 72), &v21);
  v12 = -1LL;
  v13 = v21;
  if ( v21 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v14 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v14 = -1LL;
      v8 = operator new[](v14, (const struct std::nothrow_t *)&TLV::nothrow);
      if ( v8 )
      {
        v15 = 0LL;
        if ( *(_DWORD *)(a1 + 40) )
        {
          v13 = 0;
          do
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v15);
            v8[v15] = v16;
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            v9 = (unsigned int)(v9 + 1);
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < *(_DWORD *)(a1 + 40) );
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
              v11,
              *(_QWORD *)(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
    v12 = -1LL;
  }
  v17 = v20[0];
  if ( v20[0] )
  {
    if ( *(_DWORD *)v20[0] == 1 )
      --*(_DWORD *)(v20[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v20[0] + 8LL));
    v20[0] = 0LL;
  }
  if ( v13 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_27;
    v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
            v17,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( (_DWORD)v9 )
  {
    v18 = v8;
    do
    {
      if ( *v18 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v18 + 16LL))(*v18, v10, v12);
        *v18 = 0LL;
      }
      ++v18;
      --v9;
    }
    while ( v9 );
  }
LABEL_27:
  operator delete[](v8);
  return (unsigned int)v13;
}
