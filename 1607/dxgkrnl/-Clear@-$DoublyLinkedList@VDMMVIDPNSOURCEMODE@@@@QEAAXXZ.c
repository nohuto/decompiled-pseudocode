/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ @ 0x1C0004180
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C00059CC (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C001D5FC (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C00340E0 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C00342D0 (-Clear@-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::Clear(void (__fastcall ***a1)(_QWORD, __int64))
{
  void (__fastcall ***v1)(_QWORD, __int64); // rdi
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = a1;
  v2 = (__int64 **)(a1 + 2);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    v1[4] = (void (__fastcall **)(_QWORD, __int64))((char *)v1[4] - 1);
    *v3 = 0LL;
    v3[1] = 0LL;
    a1 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 7);
    if ( v3 != (__int64 *)-56LL )
      (**a1)(a1, 1LL);
  }
  if ( v1[4] )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
}
