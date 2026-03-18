/*
 * XREFs of DestroyThreadsHotKeys @ 0x1C00F8560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyThreadsHotKeys(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct tagHOTKEY * near **v4; // rbx
  __int64 v5; // rbp
  struct tagHOTKEY * near **v6; // rsi
  struct tagHOTKEY * near *v7; // rdi

  result = gptiCurrent;
  v4 = &gphkHashTable;
  v5 = 128LL;
  do
  {
    v6 = v4;
    while ( *v6 )
    {
      v7 = *v6;
      if ( **v6 == (struct tagHOTKEY *)gptiCurrent )
      {
        *v6 = (struct tagHOTKEY * near *)v7[5];
        if ( v7[2] != (struct tagHOTKEY *)1 )
          HMAssignmentUnlock(v7 + 2);
        result = Win32FreePool(v7, a2, a3);
      }
      else
      {
        v6 = (struct tagHOTKEY * near **)(v7 + 5);
      }
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
