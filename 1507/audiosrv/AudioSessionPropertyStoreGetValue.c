/*
 * XREFs of AudioSessionPropertyStoreGetValue @ 0x18007E550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?PropertyStoreGetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18007D5F4 (-PropertyStoreGetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetValue(
        CServerAudioSessionControl **a1,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  int Value; // ebx

  Value = CServerAudioSessionControl::PropertyStoreGetValue(*a1, a2, a3);
  if ( Value < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x55u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      Value);
  }
  return (unsigned int)Value;
}
