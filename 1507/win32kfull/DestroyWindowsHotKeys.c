/*
 * XREFs of DestroyWindowsHotKeys @ 0x1C008B2A8
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall DestroyWindowsHotKeys(struct tagHOTKEY *a1)
{
  _UNKNOWN **result; // rax
  struct tagHOTKEY * near **v3; // rbx
  __int64 v4; // rbp
  struct tagHOTKEY * near **v5; // rdi
  struct tagHOTKEY * near *v6; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = &gphkHashTable;
  v4 = 128LL;
  do
  {
    v5 = v3;
    while ( *v5 )
    {
      v6 = *v5;
      if ( (*v5)[2] == a1 )
      {
        *v5 = (struct tagHOTKEY * near *)v6[5];
        HMAssignmentUnlock(v6 + 2);
        result = (_UNKNOWN **)Win32FreePool(v6);
      }
      else
      {
        v5 = (struct tagHOTKEY * near **)(v6 + 5);
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
