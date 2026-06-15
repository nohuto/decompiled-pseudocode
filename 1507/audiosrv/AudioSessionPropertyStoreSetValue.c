/*
 * XREFs of AudioSessionPropertyStoreSetValue @ 0x18007E5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?PropertyStoreSetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18007D688 (-PropertyStoreSetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@.c)
 */

__int64 __fastcall AudioSessionPropertyStoreSetValue(
        CServerAudioSessionControl **a1,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  int v3; // ebx

  v3 = CServerAudioSessionControl::PropertyStoreSetValue(*a1, a2, a3);
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x56u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
