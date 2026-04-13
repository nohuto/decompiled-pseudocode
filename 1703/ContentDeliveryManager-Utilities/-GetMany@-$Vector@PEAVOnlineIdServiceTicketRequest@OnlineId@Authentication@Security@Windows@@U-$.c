/*
 * XREFs of ?GetMany@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x1800145E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  int v12; // ebx
  unsigned int v13; // ebp
  _QWORD *v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ebp
  _QWORD *v18; // r12
  __int64 v19; // rcx
  unsigned int i; // ecx
  __int64 v21; // rdi
  void *v23; // [rsp+20h] [rbp-58h]
  __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+10h]
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v26 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  v27 = 0;
  v11 = 0;
  v25 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v23 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v24, (RTL_SRWLOCK *)(a1 + 72), &v25);
  if ( !*(_DWORD *)(a1 + 48) || (v23 = operator new[](v6, (const struct std::nothrow_t *)&TLV::nothrow)) != 0LL )
  {
    v12 = v25;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( v7 > v11 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( !(_DWORD)v6 )
          goto LABEL_27;
        v13 = v7;
        v14 = v5;
        while ( v13 < v11 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v13);
          *v14 = v15;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v12 = 0;
          v16 = v27 + 1;
          v27 = v16;
          ++v13;
          ++v14;
          if ( v16 >= (unsigned int)v6 )
          {
            v10 = v16;
            goto LABEL_26;
          }
        }
      }
      else
      {
        if ( !(_DWORD)v6 )
          goto LABEL_27;
        v17 = v7;
        v18 = v5;
        do
        {
          if ( v17 >= v11 )
            break;
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v17);
          *v18 = v19;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v12 = 0;
          ++v9;
          ++v17;
          ++v18;
        }
        while ( v9 < (unsigned int)v6 );
      }
      v10 = v27;
LABEL_26:
      v7 = v26;
    }
  }
LABEL_27:
  if ( v24[0] )
  {
    if ( *(_DWORD *)v24[0] == 1 )
      --*(_DWORD *)(v24[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v24[0] + 8));
    v24[0] = 0LL;
  }
  if ( v12 < 0 )
  {
    if ( v9 )
    {
      v21 = v9;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v21;
      }
      while ( v21 );
    }
  }
  else
  {
    if ( v10 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + v7 >= v11 )
          break;
        v12 = 0;
        ++v9;
      }
    }
    *a5 = v9;
  }
  operator delete[](v23);
  return (unsigned int)v12;
}
