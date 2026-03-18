/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x1C0023D98
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C00267C4 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiCancelIndependentFlips(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // r8

  v4 = a2;
  result = a3;
  v7 = *(_QWORD *)(a1 + 8LL * a2 + 2968);
  v8 = *(_QWORD *)(v7 + 8LL * a3 + 24);
  if ( v8 )
  {
    result = VidSchiCompleteFlipEntry(
               a1,
               a2,
               a3,
               *(_DWORD *)(v8 + 40),
               ((unsigned __int8)*(_DWORD *)(v8 + 40) - 1) & 0x3F,
               12,
               a4);
    v9 = result;
    if ( (_DWORD)result )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL) + 4LL))
                      + 8 * v4
                      + 520);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8 * v4 + 5504) + 8LL), -(int)result);
      result = *(_QWORD *)(a1 + 8 * v4 + 5504);
      *(_DWORD *)(result + 4) += v9;
      *(_DWORD *)(v10 + 4) += v9;
    }
  }
  return result;
}
