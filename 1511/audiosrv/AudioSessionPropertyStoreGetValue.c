/*
 * XREFs of AudioSessionPropertyStoreGetValue @ 0x180079770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?PropertyStoreGetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180078854 (-PropertyStoreGetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetValue(
        CServerAudioSessionControl **a1,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  int Value; // ebx

  Value = CServerAudioSessionControl::PropertyStoreGetValue(*a1, a2, a3);
  if ( Value < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x55u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      Value);
  }
  return (unsigned int)Value;
}
