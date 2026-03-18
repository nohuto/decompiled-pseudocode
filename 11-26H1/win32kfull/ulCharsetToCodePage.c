/*
 * XREFs of ulCharsetToCodePage @ 0x1401B4FA4
 * Callers:
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400C85B0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(__int64 a1, __int64 a2)
{
  __int64 i; // rax

  if ( (_DWORD)a1 == 255 )
    return 1LL;
  for ( i = 0LL; (unsigned int)i < 0x11; i = (unsigned int)(i + 1) )
  {
    if ( charsets[i] == (_DWORD)a1 )
      return (unsigned int)codepages[i];
  }
  return *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, 0x140000000uLL) + 96) + 20340LL) != 0 ? 0x4E4 : 0;
}
