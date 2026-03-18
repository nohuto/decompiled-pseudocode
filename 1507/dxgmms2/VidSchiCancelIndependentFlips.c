/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x1C00156AC
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C001C7D4 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiCancelIndependentFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // r8

  v4 = a2;
  result = a3;
  v7 = *((_QWORD *)a1 + a2 + 330);
  v8 = *(_QWORD *)(v7 + 8LL * a3 + 16);
  if ( v8 )
  {
    result = VidSchiCompleteFlipEntry(a1, ((unsigned __int8)*(_DWORD *)(v8 + 40) - 1) & 0x3F, 12, a4);
    v9 = result;
    if ( (_DWORD)result )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 32LL) + 4LL))
                      + 8 * v4
                      + 520);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + v4 + 647) + 8LL), -(int)result);
      result = *((_QWORD *)a1 + v4 + 647);
      *(_DWORD *)(result + 4) += v9;
      *(_DWORD *)(v10 + 4) += v9;
    }
  }
  return result;
}
