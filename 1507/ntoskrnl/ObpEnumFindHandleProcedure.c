/*
 * XREFs of ObpEnumFindHandleProcedure @ 0x140521E88
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 */

char __fastcall ObpEnumFindHandleProcedure(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  char v6; // bl
  _DWORD *v8; // rcx
  __int64 v9; // r8
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *a4 && *a4 != ((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    goto LABEL_4;
  v5 = a4[1];
  if ( v5 )
  {
    if ( v5 != ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                     + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*(_QWORD *)a2) & 0xFFF0) >> 8)] )
      goto LABEL_4;
  }
  v8 = (_DWORD *)a4[2];
  if ( !v8 )
    goto LABEL_11;
  v9 = (*(__int64 *)a2 >> 17) & 7;
  if ( (*(_DWORD *)(a2 + 8) & 0x2000000) != 0 )
    LOBYTE(v9) = v9 | 8;
  if ( *v8 == (v9 & 7) && v8[1] == (*(_DWORD *)(a2 + 8) & 0x1FFFFFF) )
LABEL_11:
    v6 = 1;
  else
LABEL_4:
    v6 = 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a2, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v6;
}
