/*
 * XREFs of DestroyThreadsHotKeys @ 0x1C00DA0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DestroyThreadsHotKeys()
{
  __int64 result; // rax
  struct tagHOTKEY * near **v1; // rbx
  __int64 v2; // rbp
  struct tagHOTKEY * near **v3; // rdi
  struct tagHOTKEY * near *v4; // rsi

  result = gptiCurrent;
  v1 = &gphkHashTable;
  v2 = 128LL;
  do
  {
    v3 = v1;
    while ( *v3 )
    {
      v4 = *v3;
      if ( **v3 == (struct tagHOTKEY *)gptiCurrent )
      {
        *v3 = (struct tagHOTKEY * near *)v4[5];
        if ( v4[2] != (struct tagHOTKEY *)1 )
          HMAssignmentUnlock(v4 + 2);
        result = Win32FreePool(v4);
      }
      else
      {
        v3 = (struct tagHOTKEY * near **)(v4 + 5);
      }
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
