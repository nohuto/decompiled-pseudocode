/*
 * XREFs of MiRemoveSingleWsle @ 0x1401224EC
 * Callers:
 *     MiTrimSingleWsle @ 0x140122378 (MiTrimSingleWsle.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveSingleWsle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-B0h]

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 184);
  if ( dword_14034F248 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 496) + a2 * *(unsigned int *)(v5 + 64));
    if ( (v6 & 0x800000000000LL) != 0 )
      v7 = v6 | 0xFFFF000000000000uLL;
    else
      v7 = v6 & 0xFFFFFFFFFFFFLL;
    v9 = 3584LL;
    v8 = (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v9) = (v6 & 0xE00) != 3584;
    if ( ((unsigned __int8)v9 & ((*v8 & 0x20) != 0)) != 0 )
      MiLogPageAccess(a1, (unsigned __int64)v8, v9);
  }
  v11 = 1;
  v12 = a2;
  LOBYTE(v2) = MiFreeWsleList(a1, &v11, 0) == 0;
  return v2;
}
