/*
 * XREFs of RestartCtxtCallback @ 0x1C0006350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RestartCtxtCallback(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  __int64 v5; // rdx

  v1 = a1 - 328;
  if ( a1 == 328 )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(v1 + 408);
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v5 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C005A1F8 + 1, 1u) % (unsigned int)qword_1C005A1F8);
    *((_QWORD *)P + v5 + 1) = MEMORY[0xFFFFF78000000008];
    *((_DWORD *)P + 2 * v5) = 1381188418;
    *((_QWORD *)P + v5 + 2) = CurrentThread;
    *((_QWORD *)P + v5 + 3) = v2;
    *((_QWORD *)P + v5 + 4) = v1;
    *((_QWORD *)P + v5 + 5) = v4;
    *((_QWORD *)P + v5 + 6) = v1;
    *((_QWORD *)P + v5 + 7) = 0LL;
    *((_QWORD *)P + v5 + 8) = 0LL;
  }
  return RestartContext((PSLIST_ENTRY)v1);
}
