/*
 * XREFs of ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800948E0
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180094760 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::ClearResources(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 v4; // rcx
  __int64 k; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 16) = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 24); j = (unsigned int)(j + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * j);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(*((_QWORD *)this + 9) + 8 * j) = 0LL;
    }
  }
  *((_DWORD *)this + 24) = 0;
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 32); k = (unsigned int)(k + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * k);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * k) = 0LL;
    }
  }
  *((_DWORD *)this + 32) = 0;
}
