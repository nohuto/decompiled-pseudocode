/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180035210
 * Callers:
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x1800770E4 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  bool v5; // si
  char v6; // bp
  char i; // al
  unsigned __int64 v8; // rcx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  unsigned __int32 v11; // ecx
  signed __int32 v12; // ett
  unsigned int v13; // edi
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
        a3 = 1LL;
        v8 = v4;
        if ( v6 )
          a3 = 3LL;
        if ( v4 )
        {
          do
          {
            v9 = *(_DWORD *)(a1 + 8);
            while ( (v9 & 1) != 0 )
            {
              v12 = v9;
              v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), a3 ^ v9, v9);
              if ( v12 == v9 )
                goto LABEL_25;
            }
            _mm_pause();
            --v8;
          }
          while ( v8 );
        }
      }
      v10 = *(unsigned int *)(a1 + 8);
      LOBYTE(a3) = 0;
      if ( v6 )
      {
        if ( (v10 & 2) != 0 )
          goto LABEL_21;
        if ( (v10 & 1) != 0 )
        {
          a3 = 1LL;
          v11 = v10 ^ 3;
        }
        else
        {
          v11 = v10 - 2;
        }
      }
      else if ( (v10 & 1) != 0 )
      {
        a3 = 1LL;
        v11 = v10 ^ 1;
      }
      else
      {
        v11 = v10 - 4;
        if ( (((_BYTE)v10 - 4) & 2) == 0 )
          v11 = v10 - 6;
      }
      if ( v11 == (_DWORD)v10 )
        goto LABEL_21;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v11, v10) == (_DWORD)v10 )
        break;
    }
    if ( !(_BYTE)a3 )
    {
      v6 = 1;
      v10 = v11;
LABEL_21:
      RtlpWaitOnCriticalSection(a1, v10, a3);
      if ( v5 && v4 > 0x64 )
        --v4;
      continue;
    }
    break;
  }
LABEL_25:
  if ( v5 )
  {
    if ( v4 < 0x7D0 )
      LODWORD(v4) = v4 + 1;
    v13 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v4) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v13 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v13;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
