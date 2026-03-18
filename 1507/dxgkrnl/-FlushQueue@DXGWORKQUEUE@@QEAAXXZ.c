/*
 * XREFs of ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000999C
 * Callers:
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0085220 (--1DXGPROCESS@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGWORKQUEUE::FlushQueue(struct _LIST_ENTRY *this)
{
  DXGWORKQUEUE *v1; // rdi
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY v3; // rax
  PLIST_ENTRY v4; // rbx

  v1 = (DXGWORKQUEUE *)this;
  v2 = (KSPIN_LOCK *)&this[1];
  while ( 1 )
  {
    v3 = ExInterlockedRemoveHeadList(this, v2);
    v4 = v3;
    if ( !v3 )
      break;
    ((void (__fastcall *)(struct _LIST_ENTRY *))v3[1].Flink)(v3[1].Blink);
    operator delete(v4);
    v2 = (KSPIN_LOCK *)((char *)v1 + 16);
    this = (struct _LIST_ENTRY *)v1;
  }
}
