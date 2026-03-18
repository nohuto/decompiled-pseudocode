/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0002148
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C00021B0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000AD04 (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  char result; // al

  if ( a2 )
  {
    v3 = a1 + 2;
    if ( (_QWORD *)*v3 != v3 )
    {
      v4 = *v3 - 8LL;
      if ( *v3 != 8LL )
      {
        do
        {
          if ( v4 == a2 )
            break;
          v5 = *(_QWORD **)(v4 + 8);
          v4 = v5 == v3 ? 0LL : (__int64)(v5 - 1);
        }
        while ( v4 );
        if ( v4 )
          return 0;
      }
    }
  }
  v6 = a1 + 2;
  v7 = (_QWORD *)(a2 + 8);
  v8 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v8 != a1 + 2 )
    __fastfail(3u);
  *v7 = v6;
  v7[1] = v8;
  *v8 = v7;
  a1[3] = v7;
  result = 1;
  ++a1[4];
  return result;
}
