/*
 * XREFs of ?GetMany@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18000EE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058D74 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // r15d
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  int v12; // edi
  _QWORD *v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // eax
  _QWORD *v16; // r12
  __int64 v17; // rcx
  unsigned int i; // ecx
  __int64 v19; // rbx
  void *v21; // [rsp+20h] [rbp-58h]
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]

  v24 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  v25 = 0;
  v23 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v21 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v22, (RTL_SRWLOCK *)(a1 + 72), &v23);
  if ( *(_DWORD *)(a1 + 48) )
    v21 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v11 = *(_DWORD *)(a1 + 40);
  if ( v7 <= v11 )
  {
    v12 = v23;
  }
  else
  {
    v12 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( !(_DWORD)v6 )
        goto LABEL_25;
      v13 = v5;
      while ( v7 < v11 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v7);
        *v13 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v12 = 0;
        v15 = v25 + 1;
        v25 = v15;
        ++v7;
        ++v13;
        if ( v15 >= (unsigned int)v6 )
        {
          v10 = v15;
          goto LABEL_24;
        }
      }
    }
    else
    {
      if ( !(_DWORD)v6 )
        goto LABEL_25;
      v16 = v5;
      do
      {
        if ( v7 >= v11 )
          break;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v7);
        *v16 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v12 = 0;
        ++v9;
        ++v7;
        ++v16;
      }
      while ( v9 < (unsigned int)v6 );
    }
    v10 = v25;
LABEL_24:
    v7 = v24;
  }
LABEL_25:
  if ( v22[0] )
  {
    if ( *(_DWORD *)v22[0] == 1 )
      --*(_DWORD *)(v22[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v22[0] + 8));
    v22[0] = 0LL;
  }
  if ( v12 < 0 )
  {
    if ( v9 )
    {
      v19 = v9;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v19;
      }
      while ( v19 );
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
  operator delete[](v21);
  return (unsigned int)v12;
}
