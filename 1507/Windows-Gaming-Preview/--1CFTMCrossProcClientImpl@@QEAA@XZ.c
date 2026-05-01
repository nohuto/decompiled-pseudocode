/*
 * XREFs of ??1CFTMCrossProcClientImpl@@QEAA@XZ @ 0x18001D1B8
 * Callers:
 *     ??_GGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800170F0 (--_GGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

void __fastcall CFTMCrossProcClientImpl::~CFTMCrossProcClientImpl(CFTMCrossProcClientImpl *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
