/*
 * XREFs of ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18006BFDC
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x18006B4C8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18006CF48 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18006DA2C (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSessionStore::IsEqual(PCNZWCH *this, const unsigned __int16 *a2)
{
  return CompareStringW(0x7Fu, 1u, a2, -1, this[2], -1) == 2;
}
