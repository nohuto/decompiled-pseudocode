/*
 * XREFs of VidSchiComputePriority @ 0x1C003ADE4
 * Callers:
 *     VidSchSetPriorityContext @ 0x1C003AD60 (VidSchSetPriorityContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiComputePriority(__int64 a1, int a2, int a3, char a4, _DWORD *a5)
{
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rax

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 2096) & 2) != 0 )
  {
    *a5 = KeQueryPriorityThread(KeGetCurrentThread());
    return 0LL;
  }
  v9 = 7;
  if ( a2 <= 7 )
  {
    v9 = a2;
    if ( a2 < -7 )
      v9 = -7;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  v11 = dword_1C002549C[15 * *(int *)(v10 + 16) + v9];
  *a5 = v11;
  if ( v11 < 0x10
    || a3
    || (v13 = *(_QWORD *)(v10 + 8), *(_BYTE *)(v13 + 313))
    || (v14 = *(_QWORD *)(v13 + 80)) != 0 && (*(unsigned int (**)(void))(v14 + 216))()
    || SeSinglePrivilegeCheck((LUID)14LL, 1) )
  {
    if ( (_bittest((const signed __int32 *)(v8 + 2096), 0x10u) & ((a4 & 1) != 0)) != 0 && *a5 < 0x10u )
      *a5 = 16;
    return 0LL;
  }
  return 3221225506LL;
}
