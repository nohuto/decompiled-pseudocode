/*
 * XREFs of BootApplicationPersistentDataInitialize @ 0x1407E1BB4
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall BootApplicationPersistentDataInitialize(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *PoolWithTag; // rsi
  PVOID v5; // rax
  __int64 **v6; // rax

  qword_14036BE70 = &qword_14036BE68;
  qword_14036BE68 = (__int64)&qword_14036BE68;
  v1 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 128LL);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 6) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1CuLL, 0x64506142u);
      if ( !PoolWithTag )
        return;
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned int *)v3 + 6), 0x64506142u);
      if ( !v5 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return;
      }
      *((_DWORD *)PoolWithTag + 6) = *((_DWORD *)v3 + 6);
      PoolWithTag[2] = v5;
      memmove(v5, (const void *)v3[2], *((unsigned int *)v3 + 6));
      v6 = (__int64 **)qword_14036BE70;
      *PoolWithTag = &qword_14036BE68;
      PoolWithTag[1] = v6;
      if ( *v6 != &qword_14036BE68 )
        __fastfail(3u);
      *v6 = PoolWithTag;
      qword_14036BE70 = PoolWithTag;
    }
  }
}
