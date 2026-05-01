/*
 * XREFs of RmpActivityHostRemoveResourceSet @ 0x18002F580
 * Callers:
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostRemoveResourceSet(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v4 = 3LL * a3;
  v5 = a2 + 172;
  v6 = a2[172];
  v7 = (_QWORD *)a2[173];
  if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = 0LL;
  v5[1] = 0LL;
  --*(_DWORD *)(a1 + 8 * v4 + 632);
  v8 = *a2;
  *((_DWORD *)a2 + 352) = 2;
  (*(void (__fastcall **)(__int64 *))(v8 + 16))(a2);
  return (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
}
