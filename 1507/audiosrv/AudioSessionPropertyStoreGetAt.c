/*
 * XREFs of AudioSessionPropertyStoreGetAt @ 0x18007E420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?PropertyStoreGetAt@CServerAudioSessionControl@@QEAAJKPEAU_tagpropertykey@@@Z @ 0x18007D560 (-PropertyStoreGetAt@CServerAudioSessionControl@@QEAAJKPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetAt(
        CServerAudioSessionControl **a1,
        unsigned int a2,
        struct _tagpropertykey *a3)
{
  int v3; // ebx

  v3 = CServerAudioSessionControl::PropertyStoreGetAt(*a1, a2, a3);
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x54u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
