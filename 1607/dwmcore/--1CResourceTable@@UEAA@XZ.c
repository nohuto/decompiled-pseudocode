/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x18003AAF8
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18003AA00 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResourceTable::~CResourceTable(CResourceTable *this)
{
  __int64 **v2; // rbx
  WPF::ProcessHeapImpl *v3; // rcx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rcx
  _QWORD *v8; // rax

  *(_QWORD *)this = &CResourceTable::`vftable';
  v2 = (__int64 **)((char *)this + 56);
  while ( *v2 != (__int64 *)v2 )
  {
    v5 = *v2;
    v6 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v2 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v2;
    v7 = v5 - 1;
    if ( v7 )
      v8 = v7 + 1;
    else
      v8 = 0LL;
    v7[1] = (__int64)v8;
    v7[2] = (__int64)v8;
    (*(void (__fastcall **)(__int64 *))(*v7 + 8))(v7);
  }
  v3 = WPF::g_pProcessHeap;
  v4 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)v3 + 32LL))(v3, v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
