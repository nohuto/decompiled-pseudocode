/*
 * XREFs of MiInsertClone @ 0x140001A08
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCloneCompare @ 0x140001A80 (MiCloneCompare.c)
 */

__int64 __fastcall MiInsertClone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // bl
  _QWORD *v5; // rdi
  _QWORD *v7; // rax

  v3 = a1 + 912;
  v4 = 0;
  v5 = *(_QWORD **)(a1 + 912);
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)MiCloneCompare(a2, v5) >= 0 )
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v4 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      v5 = v7;
    }
  }
  LOBYTE(a3) = v4;
  return RtlAvlInsertNodeEx(v3, v5, a3, a2);
}
