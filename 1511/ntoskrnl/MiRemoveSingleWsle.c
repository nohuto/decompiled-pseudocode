/*
 * XREFs of MiRemoveSingleWsle @ 0x1400E47D4
 * Callers:
 *     MiTrimSingleWsle @ 0x1400E4694 (MiTrimSingleWsle.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveSingleWsle(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-B0h]

  v2 = 0;
  if ( dword_1402FED88 )
  {
    v5 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 496LL) + a2 * *(unsigned int *)(*(_QWORD *)(a1 + 184) + 64LL));
    v6 = *(_QWORD *)v5;
    if ( (*(_QWORD *)v5 & 0x800000000000LL) != 0 )
      v7 = v6 | 0xFFFF000000000000uLL;
    else
      v7 = v6 & 0xFFFFFFFFFFFFLL;
    MI_WSLE_LOG_ACCESS(a1, v5, (_BYTE *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  }
  v9 = 1;
  v10 = a2;
  LOBYTE(v2) = MiFreeWsleList(a1, &v9, 0) == 0;
  return v2;
}
