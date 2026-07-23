/*
 * XREFs of SymCryptWipeAsm @ 0x140159710
 * Callers:
 *     SymCryptSha256Result @ 0x140136E50 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x140237238 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1402372C0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x14023732C (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x140237378 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x140237628 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptWipeAsm(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  unsigned __int64 i; // rdx
  unsigned int v4; // edx
  __int64 result; // rax

  result = 0LL;
  switch ( a2 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      *(_BYTE *)a1 = 0;
      return result;
    case 2uLL:
      goto SymCryptWipeAsmT2;
    case 3uLL:
      *(_BYTE *)(a1 + 2) = 0;
SymCryptWipeAsmT2:
      *(_WORD *)a1 = 0;
      return result;
    case 4uLL:
      goto SymCryptWipeAsmT4;
    case 5uLL:
      *(_BYTE *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      return result;
    case 6uLL:
      *(_DWORD *)(a1 + 2) = 0;
SymCryptWipeAsmT4:
      *(_DWORD *)a1 = 0;
      break;
    case 7uLL:
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 3) = 0;
      break;
    case 8uLL:
      *(_QWORD *)a1 = 0LL;
      break;
    case 9uLL:
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
      break;
    case 0xAuLL:
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 6) = 0;
      break;
    case 0xBuLL:
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 7) = 0;
      break;
    case 0xCuLL:
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      break;
    case 0xDuLL:
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 5) = 0LL;
      break;
    case 0xEuLL:
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 6) = 0LL;
      break;
    case 0xFuLL:
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 7) = 0LL;
      break;
    default:
      if ( (a1 & 0xF) != 0
        && (*(_QWORD *)a1 = 0LL,
            *(_QWORD *)(a1 + 8) = 0LL,
            result = -(int)a1 & 0xF,
            a1 += result,
            a2 -= result,
            a2 < 0x10) )
      {
        result = 0LL;
        *(_QWORD *)(a2 + a1 - 16) = 0LL;
        *(_QWORD *)(a2 + a1 - 8) = 0LL;
      }
      else
      {
        *(_OWORD *)a1 = 0LL;
        if ( (a2 & 0x10) != 0 )
          a1 += 16LL;
        v2 = a2 < 0x20;
        for ( i = a2 - 32; !v2; i -= 32LL )
        {
          *(_OWORD *)a1 = 0LL;
          *(_OWORD *)(a1 + 16) = 0LL;
          a1 += 32LL;
          v2 = i < 0x20;
        }
        v4 = i & 0xF;
        if ( v4 )
        {
          result = 0LL;
          *(_QWORD *)(v4 + a1 - 16) = 0LL;
          *(_QWORD *)(v4 + a1 - 8) = 0LL;
        }
      }
      break;
  }
  return result;
}
