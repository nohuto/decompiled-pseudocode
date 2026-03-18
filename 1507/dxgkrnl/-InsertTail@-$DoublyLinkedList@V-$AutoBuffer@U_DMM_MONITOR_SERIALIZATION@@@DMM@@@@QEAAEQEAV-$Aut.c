/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C002C744
 * Callers:
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002C28C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::InsertTail(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  char result; // al
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx

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
  v7 = a1 + 16;
  v8 = (_QWORD *)(a2 + 8);
  v9 = *(_QWORD **)(v7 + 8);
  *v8 = v7;
  v8[1] = v9;
  if ( *v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v7 + 8) = v8;
  result = 1;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
