/*
 * XREFs of EtwpGetUmLoggerInfoFromContext @ 0x180045078
 * Callers:
 *     EtwpQueryUmLogger @ 0x1800448A8 (EtwpQueryUmLogger.c)
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetUmLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 332);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 328);
  *(_DWORD *)(a1 + 68) = *(_QWORD *)(a2 + 352) / EtwpOneSecond;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 208) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 400);
  v2 = *(_DWORD *)(a2 + 396);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = v2;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 376);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 16);
  result = *(unsigned __int16 *)(a2 + 20);
  *(_WORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 11) = 1;
  return result;
}
