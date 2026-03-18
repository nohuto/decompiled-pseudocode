/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x1C0019F38
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiRestartQueuedFlip(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  struct _VIDSCH_GLOBAL *v4; // rbp
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax

  v4 = *(struct _VIDSCH_GLOBAL **)(a1 + 32);
  v6 = a2;
  v8 = a3;
  v9 = *((_QWORD *)v4 + a2 + 330);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 8LL * a3 + 16) + 40LL);
  if ( (_DWORD)v10 != a4 )
  {
    v11 = VidSchiCompleteFlipEntry(v4, a2, a3, v10, ((_BYTE)a4 - 1) & 0x3F, 6, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 32) + 4LL))
                      + 8 * v6
                      + 520);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v4 + v6 + 647) + 8LL), -v11);
      *(_DWORD *)(*((_QWORD *)v4 + v6 + 647) + 4LL) += v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  result = *(_QWORD *)(v9 + 8 * v8 + 16);
  *(_DWORD *)(result + 40) = a4;
  return result;
}
