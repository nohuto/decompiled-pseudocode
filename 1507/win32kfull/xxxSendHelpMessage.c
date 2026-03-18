/*
 * XREFs of xxxSendHelpMessage @ 0x1C023D5FC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendHelpMessage(struct tagWND *a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  int v5; // r8d
  _DWORD v7[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+74h] [rbp-14h]

  v7[1] = a2;
  v7[0] = 40;
  v9 = a5;
  v7[2] = a3;
  v8 = a4;
  v5 = *(unsigned __int16 *)(gptiCurrent + 684LL) | (*(unsigned __int16 *)(gptiCurrent + 688LL) << 16);
  v10 = *(__int16 *)(gptiCurrent + 684LL);
  v11 = SHIWORD(v5);
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(a1, 0x53u, 0LL, (struct _LARGE_STRING *)v7, 0, 0, 0LL, 1, 1);
}
