/*
 * XREFs of ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x180015E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000A734 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x180017E24 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        unsigned int **a3)
{
  int v5; // ebx
  unsigned int *v6; // rdi
  char v7; // si
  unsigned int *Block; // [rsp+30h] [rbp-30h]
  __m128i v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF

  v13 = a2;
  if ( *(_BYTE *)(a1 + 176) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  v6 = 0LL;
  v12 = v5;
  v7 = 0;
  Block = 0LL;
  if ( v5 < 0 )
    goto LABEL_28;
  XWinRT::SerializingLockPolicy::Read((__int64)&v11, (RTL_SRWLOCK *)(a1 + 152), &v12);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v12 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
            a1 + 64,
            &v13,
            &v14);
    v5 = v12;
    if ( v12 >= 0 )
    {
      if ( v14 )
      {
        v10 = *(__m128i *)(v14 + 8);
        v7 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
        if ( v7 )
        {
          Block = *(unsigned int **)(v14 + 8);
          _InterlockedIncrement((volatile signed __int32 *)v10.m128i_i64[0]);
          v6 = (unsigned int *)v10.m128i_i64[0];
        }
        else
        {
          v6 = *(unsigned int **)(v14 + 8);
          Block = v6;
          if ( v10.m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10.m128i_i64[0] + 8LL))(v10.m128i_i64[0]);
        }
        v5 = 0;
      }
      else
      {
        v5 = -2147483637;
      }
      v12 = v5;
    }
  }
  if ( v11 )
  {
    if ( *(_DWORD *)v11 == 1 )
      --*(_DWORD *)(v11 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v11 + 8));
  }
  if ( v5 < 0 )
    goto LABEL_28;
  *a3 = 0LL;
  v5 = 0;
  if ( v7 )
  {
    *a3 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, unsigned int **))(*(_QWORD *)qword_180038A18 + 40LL))(
           qword_180038A18,
           v6[1],
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a3);
    if ( v5 >= 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    {
      if ( v6[1] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180038A18 + 32LL))(qword_180038A18);
      operator delete(Block);
    }
  }
  else
  {
    *a3 = v6;
  }
  if ( v5 < 0 )
LABEL_28:
    *a3 = 0LL;
  return (unsigned int)v5;
}
