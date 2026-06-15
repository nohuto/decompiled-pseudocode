/*
 * XREFs of AudioSessionPropertyStoreGetAt @ 0x180079640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?PropertyStoreGetAt@CServerAudioSessionControl@@QEAAJKPEAU_tagpropertykey@@@Z @ 0x1800787C0 (-PropertyStoreGetAt@CServerAudioSessionControl@@QEAAJKPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetAt(
        CServerAudioSessionControl **a1,
        unsigned int a2,
        struct _tagpropertykey *a3)
{
  int v3; // ebx

  v3 = CServerAudioSessionControl::PropertyStoreGetAt(*a1, a2, a3);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x54u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v3);
  }
  return (unsigned int)v3;
}
