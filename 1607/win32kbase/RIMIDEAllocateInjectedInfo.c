/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C00D4F90
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

_QWORD *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  void *v5; // rax

  result = Win32AllocPoolZInit(0x58uLL);
  v4 = result;
  if ( result )
  {
    v5 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a2 + 88));
    if ( v5 )
    {
      v4[9] = v5;
    }
    else
    {
      Win32FreePool();
      return 0LL;
    }
    return v4;
  }
  return result;
}
