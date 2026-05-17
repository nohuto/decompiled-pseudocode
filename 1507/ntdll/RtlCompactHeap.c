/*
 * XREFs of RtlCompactHeap @ 0x180078DE0
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlpHpCompact @ 0x1800088BC (RtlpHpCompact.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v3; // edx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v10 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpCompact((__int64)Src);
    return 16LL;
  }
  else
  {
    v3 = *((_DWORD *)Src + 29) | a2;
    if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v4 = 0LL;
      v11 = 0LL;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v10 = 1;
      }
      v5 = RtlpCoalesceHeap(Src);
      if ( v5 )
      {
        v6 = 16 * *(unsigned __int16 *)(v5 + 8);
        v4 = v6;
        v11 = v6;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
          *(_DWORD *)(v5 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v7 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v7 + 40) > v4 )
          v4 = *(_QWORD *)(v7 + 40);
        v11 = v4;
      }
      if ( !v4 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v8 = NtCurrentTeb();
        v8->LastErrorValue = RtlNtStatusToDosError(0);
        v4 = v11;
      }
      if ( v10 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v4;
    }
  }
}
