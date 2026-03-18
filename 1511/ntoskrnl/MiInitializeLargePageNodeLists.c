/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x140131F70
 * Callers:
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v3 = (_QWORD *)(v1 + 16);
    do
    {
      v4 = v3;
      v5 = 2LL;
      do
      {
        v6 = 2LL;
        do
        {
          v7 = 4LL;
          do
          {
            v4[1] = v4;
            *v4 = v4;
            v4 += 2;
            --v7;
          }
          while ( v7 );
          --v6;
        }
        while ( v6 );
        --v5;
      }
      while ( v5 );
      v3 += 167;
      --v2;
    }
    while ( v2 );
  }
}
