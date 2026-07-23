/*
 * XREFs of MiConvertPrivateToDemandZero @ 0x1401F8668
 * Callers:
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     MiPfnCanBecomeDemandZero @ 0x1401E2874 (MiPfnCanBecomeDemandZero.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiConvertPrivateToDemandZero(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rax
  unsigned int v9; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-C0h]

  v6 = 0;
  if ( KeCheckForZeroPage((_QWORD *)a2) )
    return 0LL;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiPfnCanBecomeDemandZero(a1, 48 * v8 - 0x58000000000LL) )
    return 0LL;
  v10 = a3;
  v9 = 1;
  LOBYTE(v6) = MiFreeWsleList(a1, &v9, 2u) == 0;
  return v6;
}
