/*
 * XREFs of sub_18001E37C @ 0x18001E37C
 * Callers:
 *     sub_18001DE54 @ 0x18001DE54 (sub_18001DE54.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 */

__int64 __fastcall sub_18001E37C(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  bool v10; // zf
  __int64 result; // rax

  v4 = a1 + 8;
  *(_QWORD *)a1 = &off_18002D1C8;
  v6 = (_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = &off_18002E418;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_180002654((_QWORD *)(a1 + 72));
  *(_QWORD *)v4 = &off_18002D118;
  *v6 = &off_18002E3D0;
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_DWORD *)(v4 + 104) = 0;
  InitOnceExecuteOnce(&stru_18003AC20, sub_18001F6F0, 0LL, 0LL);
  v10 = qword_18003AC80 == 0;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)v4 = off_18002E298;
  *v6 = off_18002D1F0;
  *(_QWORD *)(v4 + 136) = off_18002DC60;
  *(_QWORD *)(v4 + 144) = off_18002DCA8;
  *(_QWORD *)(v4 + 152) = off_18002D970;
  *(_QWORD *)(v4 + 160) = off_18002E158;
  *(_QWORD *)(v4 + 168) = off_18002DBC8;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_QWORD *)(v4 + 184) = 1LL;
  if ( !v10 )
    _InterlockedIncrement(&dword_18003AC88);
  *(_QWORD *)a1 = off_18002DF28;
  *(_QWORD *)v4 = off_18002D3A0;
  *(_QWORD *)(a1 + 72) = off_18002D9A8;
  *(_QWORD *)(a1 + 144) = off_18002DC10;
  *(_QWORD *)(a1 + 152) = off_18002D318;
  *(_QWORD *)(a1 + 160) = off_18002E4B8;
  *(_QWORD *)(a1 + 168) = off_18002DC30;
  *(_QWORD *)(a1 + 176) = off_18002E0D8;
  *(_QWORD *)(a1 + 200) = a3;
  *(_DWORD *)(a1 + 208) = a4;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 2;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 2;
  *(_DWORD *)(a1 + 244) = 1;
  *(_WORD *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a2 + 8);
  result = a1;
  *(_QWORD *)(a1 + 248) = v4;
  return result;
}
