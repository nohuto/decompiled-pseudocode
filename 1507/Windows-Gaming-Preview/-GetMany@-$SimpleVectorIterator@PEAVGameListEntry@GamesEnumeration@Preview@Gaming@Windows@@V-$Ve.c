/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x1800050E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_::operator() @ 0x1800058E8 (_lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_--operator().c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     memset @ 0x1800269AC (memset.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int v3; // r14d
  int v4; // ebx
  __int64 v5; // r13
  unsigned __int32 v6; // r15d
  bool v7; // zf
  signed __int32 v8; // eax
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v12; // [rsp+90h] [rbp+50h] BYREF
  va_list va; // [rsp+90h] [rbp+50h]
  _DWORD *v14; // [rsp+98h] [rbp+58h] BYREF
  va_list va1; // [rsp+98h] [rbp+58h]
  va_list va2; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, void *);
  va_copy(va2, va1);
  v14 = va_arg(va2, _DWORD *);
  *v14 = 0;
  v3 = a2;
  if ( a2 )
    memset(v12, 0, 8LL * a2);
  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 56);
  va_copy((va_list)v10, va1);
  va_copy((va_list)&v10[1], va);
  if ( v4 >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 64);
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 56) + 128LL))(
             *(_QWORD *)(a1 + 56),
             v6,
             v3,
             v12,
             v14);
      if ( v4 < 0 )
        break;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v6 + *v14, v6);
      v7 = v6 == v8;
      v6 = v8;
      if ( v7 )
        break;
      lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_::operator()(v10);
      v3 = a2;
    }
    if ( *(_DWORD *)(a1 + 76) != *(_DWORD *)(v5 + 112) )
    {
      *(_DWORD *)(a1 + 72) = -2147483636;
      if ( v4 < 0 )
      {
        RoTransformError((unsigned int)v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_43e11ee0e7cf0a8bfe1b6af012b4e817_::operator()(v10);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
