/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x140237628
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140237160 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x140159710 (SymCryptWipeAsm.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rdx

  result = 56 * a3 + 2432;
  if ( result > 0xB6E )
    KeBugCheckEx(0x171u, 0x70733273uLL, 0LL, 0LL, 0LL);
  if ( result <= 0x40 )
  {
    if ( (result & 1) != 0 )
    {
      result = 56 * a3 + 2431;
      *(_BYTE *)(result + a6) = 0;
    }
    if ( (result & 2) != 0 )
    {
      result -= 2LL;
      *(_WORD *)(result + a6) = 0;
    }
    if ( (result & 4) != 0 )
    {
      result -= 4LL;
      *(_DWORD *)(result + a6) = 0;
    }
    if ( (result & 8) != 0 )
    {
      result -= 8LL;
      *(_QWORD *)(result + a6) = 0LL;
    }
    if ( (result & 0x10) != 0 )
    {
      result -= 16LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
    }
    if ( (result & 0x20) != 0 )
    {
      result -= 32LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
      *(_QWORD *)(result + a6 + 16) = 0LL;
      *(_QWORD *)(result + a6 + 24) = 0LL;
    }
    if ( (result & 0x40) != 0 )
    {
      *(_QWORD *)(result + a6 - 64) = 0LL;
      *(_QWORD *)(result + a6 - 56) = 0LL;
      *(_QWORD *)(result + a6 - 48) = 0LL;
      *(_QWORD *)(result + a6 - 40) = 0LL;
      *(_QWORD *)(result + a6 - 32) = 0LL;
      *(_QWORD *)(result + a6 - 24) = 0LL;
      *(_QWORD *)(result + a6 - 16) = 0LL;
      *(_QWORD *)(result + a6 - 8) = 0LL;
    }
  }
  else
  {
    result = SymCryptWipeAsm(a6, 56 * a3 + 2432);
  }
  v10 = 0LL;
  if ( a5 )
  {
    v11 = (_QWORD *)(a4 + 24);
    do
    {
      v12 = *(v11 - 3);
      if ( v12 >= a3 )
        KeBugCheckEx(0x171u, 0x70733269uLL, 0LL, 0LL, 0LL);
      if ( *((_DWORD *)v11 - 4) == 1 )
      {
        result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD))SymCryptParallelSha256Algorithm_default[1])(
                   a2 + v12 * *((unsigned int *)SymCryptParallelSha256Algorithm_default + 8),
                   *(v11 - 1),
                   *v11);
      }
      else
      {
        if ( *((_DWORD *)v11 - 4) != 2 )
          KeBugCheckEx(0x171u, 0x7073326FuLL, 0LL, 0LL, 0LL);
        if ( *v11 != *((_DWORD *)SymCryptParallelSha256Algorithm_default + 9) )
          KeBugCheckEx(0x171u, 0x70733272uLL, 0LL, 0LL, 0LL);
        result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SymCryptParallelSha256Algorithm_default[2])(
                   a2 + v12 * *((unsigned int *)SymCryptParallelSha256Algorithm_default + 8),
                   *(v11 - 1));
      }
      v11 += 5;
      ++v10;
    }
    while ( v10 < a5 );
  }
  return result;
}
