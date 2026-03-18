/*
 * XREFs of MiConvertPrivateToDemandZero @ 0x14012B468
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiPfnCanBecomeDemandZero @ 0x14012B534 (MiPfnCanBecomeDemandZero.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiConvertPrivateToDemandZero(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  unsigned int v9; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-C0h]

  v6 = 0;
  if ( KeCheckForZeroPage(a2) )
    return 0LL;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiPfnCanBecomeDemandZero(a1, 48 * v8 - 0x58000000000LL) )
    return 0LL;
  v10 = a3;
  v9 = 1;
  LOBYTE(v6) = MiFreeWsleList(a1, &v9, 2u) == 0;
  return v6;
}
