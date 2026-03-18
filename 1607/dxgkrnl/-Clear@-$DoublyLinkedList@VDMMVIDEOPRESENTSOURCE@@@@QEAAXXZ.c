/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ @ 0x1C001D35C
 * Callers:
 *     ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C001D670 (--1-$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00328E0 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0032900 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0033220 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0033260 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0033860 (-Clear@-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0034120 (--_G-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0002424 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = (__int64 **)(a1 + 16);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 7));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
}
