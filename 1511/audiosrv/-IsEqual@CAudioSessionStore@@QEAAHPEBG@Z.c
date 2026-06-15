/*
 * XREFs of ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180036CA8
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x18001AE40 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18001AFB4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003644C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSessionStore::IsEqual(PCNZWCH *this, const unsigned __int16 *a2)
{
  return CompareStringW(0x7Fu, 1u, a2, -1, this[2], -1) == 2;
}
