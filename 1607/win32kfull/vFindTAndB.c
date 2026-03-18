/*
 * XREFs of vFindTAndB @ 0x1C0018868
 * Callers:
 *     vComputeSimulatedGLYPHDATA @ 0x1C0018784 (vComputeSimulatedGLYPHDATA.c)
 * Callees:
 *     bNonZeroRow @ 0x1C0018914 (bNonZeroRow.c)
 */

void __fastcall vFindTAndB(unsigned __int64 a1, int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned __int64 i; // r10
  __int64 v12; // r10

  *a4 = 0;
  v6 = a1;
  v7 = a3;
  v8 = (unsigned int)(a2 + 7) >> 3;
  *a5 = 0;
  if ( a1 )
  {
    v9 = a1 + v7;
    v10 = a1;
    if ( a1 < a1 + v7 )
    {
      while ( !(unsigned int)bNonZeroRow(v10, (unsigned int)v7, v8) )
      {
        if ( ++v10 >= v9 )
          goto LABEL_7;
      }
      *a4 = v10 - v6;
    }
LABEL_7:
    if ( v10 != v9 )
    {
      for ( i = v6 + (unsigned int)(v7 - 1); i >= v6; i = v12 - 1 )
      {
        if ( (unsigned int)bNonZeroRow(i, (unsigned int)v7, v8) )
        {
          *a5 = v12 - v6 + 1;
          return;
        }
      }
    }
  }
}
