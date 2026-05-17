/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180019B98
 * Callers:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlSetCriticalSectionSpinCount @ 0x180019D40 (RtlSetCriticalSectionSpinCount.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180087474 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, unsigned __int64 j)
{
  unsigned __int64 v4; // rbx
  bool v5; // si
  char v6; // bp
  char i; // al
  signed __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ecx
  signed __int32 v11; // ett
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v4 = 0LL;
  v5 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
    v4 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
  }
  v6 = 0;
  while ( 2 )
  {
    for ( i = 1; ; i = 0 )
    {
      if ( i )
      {
        for ( j = v4; j; --j )
        {
          v8 = *(_DWORD *)(a1 + 8);
          while ( (v8 & 1) != 0 )
          {
            v11 = v8;
            v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), (v6 != 0 ? 3 : 1) ^ v8, v8);
            if ( v11 == v8 )
              goto LABEL_23;
          }
          _mm_pause();
        }
      }
      v9 = *(unsigned int *)(a1 + 8);
      LOBYTE(j) = 0;
      if ( v6 )
      {
        if ( (v9 & 2) != 0 )
        {
          v10 = *(_DWORD *)(a1 + 8);
          goto LABEL_15;
        }
        if ( (v9 & 1) == 0 )
        {
          v10 = v9 - 2;
          goto LABEL_15;
        }
        v10 = v9 ^ 3;
        goto LABEL_36;
      }
      if ( (v9 & 1) != 0 )
      {
        v10 = v9 ^ 1;
LABEL_36:
        LOBYTE(j) = 1;
        goto LABEL_15;
      }
      v10 = v9 - 4;
      if ( (((_BYTE)v9 - 4) & 2) == 0 )
        v10 = v9 - 6;
LABEL_15:
      if ( v10 == (_DWORD)v9 )
        goto LABEL_19;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v10, v9) == (_DWORD)v9 )
        break;
    }
    if ( !(_BYTE)j )
    {
      v6 = 1;
      v9 = v10;
LABEL_19:
      RtlpWaitOnCriticalSection(a1, v9, j);
      if ( v5 && v4 > 0x64 )
        --v4;
      continue;
    }
    break;
  }
LABEL_23:
  if ( v5 )
  {
    if ( v4 < 0x7D0 )
      LODWORD(v4) = v4 + 1;
    RtlSetCriticalSectionSpinCount(a1, (unsigned int)v4);
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
