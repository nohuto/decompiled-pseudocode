/*
 * XREFs of MiCopyPfnEntry @ 0x1401058C0
 * Callers:
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1401098D4 (MiSwapStackPageNoDpc.c)
 *     MiSwitchKstackPages @ 0x1401E6638 (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiSwapHardFaultPage @ 0x1401FDE6C (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCopyPfnEntry(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm0
  unsigned __int64 v4; // rdx
  char result; // al
  __int128 v6; // [rsp+0h] [rbp-30h]
  __int128 v7; // [rsp+10h] [rbp-20h]
  __int128 v8; // [rsp+20h] [rbp-10h]

  v6 = *a2;
  v7 = a2[1];
  v2 = v7;
  v3 = a2[2];
  *(_QWORD *)&v8 = v3;
  BYTE3(v8) = BYTE3(v3) & 0x7F | *(_BYTE *)(a1 + 35) & 0x80;
  v4 = *((_QWORD *)a2 + 5);
  BYTE3(v8) ^= (BYTE3(v8) ^ *(_BYTE *)(a1 + 35) & 0xC0) & 0x40;
  if ( ((*((_QWORD *)&v3 + 1) >> 54) & 7) == 3 )
    v4 = *((_QWORD *)&v3 + 1) & 0xFE3FFFFFFFFFFFFFuLL;
  BYTE2(v8) = BYTE2(v3) & 0x3F | *(_BYTE *)(a1 + 34) & 0xC0;
  result = BYTE2(v3) & 7;
  *((_QWORD *)&v8 + 1) = v4 & 0x3FC00CFFFFFFFFFLL | (*(_QWORD *)(a1 + 40) >> 58 << 58) | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (16 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))) << 36);
  if ( (BYTE2(v3) & 7) != 6 )
  {
    result = BYTE8(v7);
    *((_QWORD *)&v7 + 1) ^= (*((_QWORD *)&v7 + 1) ^ ((unsigned __int64)*(unsigned __int8 *)(a1 + 31) << 56)) & 0xF00000000000000LL;
    v2 = v7;
  }
  *(_OWORD *)a1 = v6;
  *(_OWORD *)(a1 + 16) = v2;
  *(_OWORD *)(a1 + 32) = v8;
  return result;
}
