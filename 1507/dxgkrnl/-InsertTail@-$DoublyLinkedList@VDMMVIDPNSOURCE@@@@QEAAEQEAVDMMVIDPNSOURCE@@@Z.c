/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C00079A4
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C00078BC (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C0007A0C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  char result; // al

  if ( a2 )
  {
    v3 = (_QWORD *)(a1 + 16);
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
  v6 = a1 + 16;
  v7 = (_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(v6 + 8);
  *v7 = v6;
  v7[1] = v8;
  if ( *v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v6 + 8) = v7;
  result = 1;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
