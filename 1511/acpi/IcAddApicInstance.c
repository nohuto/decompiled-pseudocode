/*
 * XREFs of IcAddApicInstance @ 0x1C00868BC
 * Callers:
 *     IrqLibpParseMadt @ 0x1C00867A0 (IrqLibpParseMadt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall IcAddApicInstance(int a1)
{
  unsigned int v2; // eax
  char v3; // bl
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 **v9; // rax
  __int64 result; // rax

  v2 = (*(__int64 (**)(void))(PmHalDispatchTable + 64))();
  v3 = v2;
  if ( !v2 )
    return 3221226021LL;
  v4 = HIBYTE(v2);
  v5 = HIWORD(v2);
  v6 = 200 * (HIBYTE(v2) - 1) + 232;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x49706341u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6);
  *(_DWORD *)(v8 + 16) = a1;
  *(_DWORD *)(v8 + 24) = v4;
  *(_DWORD *)(v8 + 20) = a1 + (unsigned __int8)v5;
  if ( !(_BYTE)v5 && !v3 )
    *(_DWORD *)(v8 + 28) = 0x80000000;
  v9 = (__int64 **)qword_1C00590B8;
  *(_QWORD *)v8 = &IcListHead;
  *(_QWORD *)(v8 + 8) = v9;
  if ( *v9 != &IcListHead )
    __fastfail(3u);
  *v9 = (__int64 *)v8;
  result = 0LL;
  qword_1C00590B8 = v8;
  return result;
}
