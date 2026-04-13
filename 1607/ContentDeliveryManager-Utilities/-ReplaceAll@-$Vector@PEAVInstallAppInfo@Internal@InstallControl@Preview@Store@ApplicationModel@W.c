/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x18000F080
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // r14d
  int v8; // edi
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v18[7]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0LL;
  if ( v4 )
  {
    v19 = 0;
    v10 = v3;
    v11 = a3 - (_QWORD)v3;
    v9 = v4;
    v12 = v4;
    do
    {
      v13 = *(_QWORD *)((char *)v10 + v11);
      *v10 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  XWinRT::SerializingLockPolicy::Write((__int64)v18, a1 + 72, &v19);
  v8 = v19;
  if ( v19 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v19, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v14 = *(_DWORD *)(a1 + 40);
    v8 = 0;
    *(_DWORD *)(a1 + 40) = v9;
    v9 = v14;
    *(_DWORD *)(a1 + 44) = v4;
    *(_DWORD *)(a1 + 48) = 0;
    v15 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
    v3 = v15;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( v18[0] )
  {
    if ( *(_DWORD *)v18[0] == 1 )
      *(_DWORD *)(v18[0] + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v18[0] + 8));
    v18[0] = 0LL;
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v16 = v3;
      do
      {
        if ( *v16 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 16LL))(*v16);
          *v16 = 0LL;
        }
        ++v16;
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v19,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v8;
}
