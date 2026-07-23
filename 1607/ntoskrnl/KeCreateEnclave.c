/*
 * XREFs of KeCreateEnclave @ 0x1406E5E1C
 * Callers:
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiEncls @ 0x14015EA70 (KiEncls.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int *a7,
        _DWORD *a8)
{
  _QWORD *v8; // rbp
  int v11; // eax
  __int64 v12; // [rsp+60h] [rbp+0h] BYREF

  v8 = (_QWORD *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (KeFeatureBits & 0x10000000000LL) != 0 )
  {
    *a8 = 0;
    if ( *(_QWORD *)a4 != a3 )
      return 3221225485LL;
    if ( (a6 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a4 + 48) & 4) == 0 )
        return 3221225485LL;
    }
    else if ( (*(_BYTE *)(a4 + 48) & 4) != 0 )
    {
      return 3221225485LL;
    }
    *(_QWORD *)(a4 + 8) = a2;
    *a7 = 0;
    v11 = *a7;
    if ( (*(_BYTE *)(a4 + 48) & 2) != 0 )
      v11 = 2;
    *a7 = v11;
    memset(v8 + 8, 0, 0x40uLL);
    *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) &= 0xFFFF00FF;
    *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 64;
    *v8 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4;
    *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    KiEncls(0);
    return 0LL;
  }
  else
  {
    *a8 = 0;
    return 3221225659LL;
  }
}
