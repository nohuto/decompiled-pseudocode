/*
 * XREFs of KeAddEnclavePage @ 0x1406E5CDC
 * Callers:
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiEncls @ 0x14015EA70 (KiEncls.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeAddEnclavePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rbp
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ebx
  bool v15; // zf
  int v16; // [rsp+60h] [rbp+0h] BYREF

  v6 = (_DWORD *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (KeFeatureBits & 0x10000000000LL) != 0 )
  {
    *a6 = 0;
    if ( (a5 & 0x40) != 0 )
    {
      return 3221225496LL;
    }
    else
    {
      memset(v6 + 16, 0, 0x40uLL);
      v12 = *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      if ( (a5 & 1) != 0 )
        v12 |= 1u;
      if ( (a5 & 2) != 0 )
        v12 |= 2u;
      if ( (a5 & 4) != 0 )
        v12 |= 4u;
      if ( (a5 & 8) != 0 )
        v13 = v12 & 0xFFFF00FF | 0x100;
      else
        v13 = v12 & 0xFFFF00FF | 0x200;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v13;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 64;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a4;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a2;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a1;
      KiEncls(1u);
      if ( (a5 & 0x10) == 0 )
      {
        v14 = 4096;
        *v6 = 4096;
        do
        {
          KiEncls(6u);
          a3 += 256LL;
          *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a3;
          v15 = v14 == 256;
          v14 -= 256;
          *v6 = v14;
        }
        while ( !v15 );
      }
      return 0LL;
    }
  }
  else
  {
    *a6 = 0;
    return 3221225659LL;
  }
}
