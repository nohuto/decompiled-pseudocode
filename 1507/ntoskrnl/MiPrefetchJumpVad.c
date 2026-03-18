/*
 * XREFs of MiPrefetchJumpVad @ 0x140219414
 * Callers:
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 * Callees:
 *     MiUpdatePrefetchPriority @ 0x140124004 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r15
  unsigned __int64 PteShadow; // rax
  __int16 v16; // ax

  v4 = *(unsigned __int8 *)(a2 + 33);
  v6 = *(unsigned int *)(a2 + 28);
  v7 = a3;
  v8 = *(unsigned int *)(a2 + 48);
  v10 = ((v6 | (v4 << 32)) << 12) + 4096;
  if ( (int)v8 >= 0 )
  {
    result = v8 & 7;
    if ( (_DWORD)result != 1 )
    {
      if ( (v8 & 0x8000) != 0 )
      {
        if ( (((_DWORD)result - 3) & 0xFFFFFFFD) != 0 )
        {
          v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v12 > (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v12 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          if ( v13 < v12 )
          {
            v14 = v13 + 0x90482413000LL;
            do
            {
              PteShadow = *(_QWORD *)v13;
              if ( v14 <= 0x7F8 )
                PteShadow = MiReadPteShadow(v13, *(_QWORD *)v13);
              v13 += 8LL;
              v14 += 8LL;
              if ( PteShadow )
              {
                if ( (PteShadow & 1) != 0 )
                  goto LABEL_13;
                if ( (PteShadow & 0x400) != 0 )
                  break;
                if ( (PteShadow & 0x800) != 0 )
                {
LABEL_13:
                  MiUpdatePrefetchPriority(a1, v7, PteShadow, a2);
                }
                else
                {
                  v16 = MiReverseSwizzleInvalidPte(PteShadow, v8, a3, a4);
                  if ( (v16 & 0x400) != 0 || (v16 & 0x800) != 0 || (v16 & 4) != 0 )
                    break;
                }
              }
              v7 += 4096LL;
            }
            while ( v13 < v12 );
          }
          v10 = (__int64)(v13 << 25) >> 16;
        }
      }
      else if ( (*(_BYTE *)(a2 + 67) & 1) == 0 )
      {
        return result;
      }
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v10, a3, a4);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
