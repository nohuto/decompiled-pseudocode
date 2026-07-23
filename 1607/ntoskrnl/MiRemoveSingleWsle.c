/*
 * XREFs of MiRemoveSingleWsle @ 0x1400FF0BC
 * Callers:
 *     MiTrimSingleWsle @ 0x1400FEF74 (MiTrimSingleWsle.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveSingleWsle(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-B0h]

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v6 = 0;
  if ( dword_1403271C8 )
  {
    v7 = (_DWORD *)(SharedWorkingSetList[10] + a2 * *((unsigned int *)SharedWorkingSetList + 8));
    v8 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 0x800000000000LL) != 0 )
      v9 = v8 | 0xFFFF000000000000uLL;
    else
      v9 = v8 & 0xFFFFFFFFFFFFLL;
    MI_WSLE_LOG_ACCESS(v5, v7, (_BYTE *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  }
  v11 = 1;
  v12 = a2;
  LOBYTE(v6) = MiFreeWsleList(a1, &v11, 0) == 0;
  return v6;
}
