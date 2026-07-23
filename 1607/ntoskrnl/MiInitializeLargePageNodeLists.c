/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x14054FAD8
 * Callers:
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v3 = (_QWORD *)(v1 + 48);
    do
    {
      v4 = v3;
      v5 = 3LL;
      do
      {
        v6 = 2LL;
        do
        {
          v7 = 2LL;
          do
          {
            v8 = 4LL;
            do
            {
              v4[1] = v4;
              *v4 = v4;
              v4 += 2;
              --v8;
            }
            while ( v8 );
            --v7;
          }
          while ( v7 );
          --v6;
        }
        while ( v6 );
        --v5;
      }
      while ( v5 );
      v3 += 273;
      --v2;
    }
    while ( v2 );
  }
}
