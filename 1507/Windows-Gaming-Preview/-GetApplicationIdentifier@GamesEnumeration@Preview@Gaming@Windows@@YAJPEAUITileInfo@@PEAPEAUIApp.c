/*
 * XREFs of ?GetApplicationIdentifier@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x18001E550
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetApplicationIdentifier(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        struct IApplicationIdentifier **a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = VE_MaterializeApplicationActivator(this, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 106LL;
  }
  else
  {
    v6 = 104LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v6,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tdlutility.cpp",
    (const char *)(unsigned int)v4);
LABEL_6:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
