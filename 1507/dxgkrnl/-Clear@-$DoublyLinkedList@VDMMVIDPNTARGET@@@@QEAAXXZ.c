/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ @ 0x1C0004668
 * Callers:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000A378 (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C002C490 (--_E-$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C002C690 (-Clear@-$Set@VDMMVIDPNTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNTARGET>::Clear(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rax

  v2 = (__int64 **)(a1 + 16);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    v5 = v3 - 1;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    v5[1] = 0LL;
    v5[2] = 0LL;
    if ( v5 != (__int64 *)-80LL )
      (*(void (__fastcall **)(__int64 *, __int64))v5[10])(v5 + 10, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v6);
  }
}
