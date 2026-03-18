/*
 * XREFs of _WindowFromDC @ 0x1401A7A68
 * Callers:
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401E8830 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINPAINTCLIPBRD @ 0x1402D6840 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowFromDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *i; // rbx

  GreLockVisRgnShared(a1, a2, a3, a4);
  v5 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968);
  for ( i = *(__int64 **)(v8 + 24); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968) + 24LL;
    if ( i == (__int64 *)v8 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x80C01000) == 0x1000 )
        v5 = i[10];
      break;
    }
  }
  GreUnlockVisRgn(v9);
  return v5;
}
