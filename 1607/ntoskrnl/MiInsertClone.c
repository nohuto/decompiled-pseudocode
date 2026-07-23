/*
 * XREFs of MiInsertClone @ 0x14010A4DC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInsertClone(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r10
  _QWORD *v4; // rdx
  bool v5; // cl
  _QWORD *v6; // rax

  v2 = (unsigned __int64 *)(a1 + 912);
  v4 = *(_QWORD **)(a1 + 912);
  v5 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 24) > v4[4] || *(_QWORD *)(a2 + 32) >= v4[3] )
      {
        v6 = (_QWORD *)v4[1];
        if ( !v6 )
        {
          v5 = 1;
          return RtlAvlInsertNodeEx(v2, (unsigned __int64)v4, v5, a2);
        }
      }
      else
      {
        v6 = (_QWORD *)*v4;
        if ( !*v4 )
          return RtlAvlInsertNodeEx(v2, (unsigned __int64)v4, v5, a2);
      }
      v4 = v6;
    }
  }
  return RtlAvlInsertNodeEx(v2, (unsigned __int64)v4, v5, a2);
}
