/*
 * XREFs of RtlCompactHeap @ 0x180090A00
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpHpCompact @ 0x18004E444 (RtlpHpCompact.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpCoalesceHeap @ 0x180090B44 (RtlpCoalesceHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  struct _TEB *v10; // rbx
  char v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v12 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpCompact((__int64)Src, a2, a3, a4);
    return 16LL;
  }
  else
  {
    v5 = *((_DWORD *)Src + 29) | a2;
    if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v6 = 0LL;
      v13 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v12 = 1;
      }
      v7 = RtlpCoalesceHeap(Src);
      if ( v7 )
      {
        v8 = 16 * *(unsigned __int16 *)(v7 + 8);
        v6 = v8;
        v13 = v8;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v9 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v9 + 40) > v6 )
          v6 = *(_QWORD *)(v9 + 40);
        v13 = v6;
      }
      if ( !v6 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v10 = NtCurrentTeb();
        v10->LastErrorValue = RtlNtStatusToDosError(0);
        v6 = v13;
      }
      if ( v12 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v6;
    }
  }
}
