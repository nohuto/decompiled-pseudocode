/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@IPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x180004D04
 * Callers:
 *     ?IndexOf@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x180002EB0 (-IndexOf@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityP.c)
 * Callees:
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@@Z @ 0x1800056EC (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int128 *),
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int128 *); // r15
  __int128 *v7; // r12
  int v8; // r14d
  unsigned int v9; // r13d
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  bool v15; // al
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]
  bool v22; // [rsp+B0h] [rbp+48h]
  __int128 *v23; // [rsp+B8h] [rbp+50h]

  v23 = a2;
  v21 = -2LL;
  v6 = a4;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    while ( v8 >= 0 )
    {
      v20 = 0LL;
      v18 = *v7;
      v10 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
              &v19,
              &v18);
      v8 = v10;
      v11 = 0LL;
      if ( v10 >= 0 )
        v11 = v19;
      v20 = v11;
      if ( v10 >= 0 )
      {
        v22 = 0;
        v8 = 0;
        if ( v6 == (__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))v11 )
          goto LABEL_27;
        if ( v6 && v11 )
        {
          *(_QWORD *)&v18 = 0LL;
          v17 = 0LL;
          v8 = (**v6)(v6, &GUID_00000000_0000_0000_c000_000000000046, &v18);
          if ( v8 < 0 )
            goto LABEL_14;
          v12 = v17;
          if ( v17 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          v8 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, &v17);
          if ( v8 < 0 )
          {
LABEL_14:
            v13 = v18;
            v14 = v17;
          }
          else
          {
            v13 = v18;
            v14 = v17;
            v22 = (_QWORD)v18 == v17;
          }
          if ( v14 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            v13 = v18;
          }
          if ( v13 )
          {
            *(_QWORD *)&v18 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          v7 = v23;
          v6 = a4;
          v15 = v22;
        }
        else
        {
          v15 = 0;
        }
        if ( v8 >= 0 && v15 )
        {
LABEL_27:
          *a6 = 1;
          *a5 = v9;
          if ( v11 )
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
          return (unsigned int)v8;
        }
      }
      if ( v11 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
      ++v9;
      v23 = ++v7;
      if ( v9 >= a3 )
        return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}
