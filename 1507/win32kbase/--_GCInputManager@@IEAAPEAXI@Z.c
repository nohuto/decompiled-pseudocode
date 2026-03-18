/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0070214
 * Callers:
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00701F0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0083A70 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0018974 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  void *v2; // rcx
  __int64 i; // rsi

  v2 = *(void **)this;
  if ( v2 )
    ZwClose(v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i) )
      Win32FreePool();
  }
  CDynamicArray<unsigned int,2003858261>::Reset((__int64 *)this + 14);
  CDynamicArray<unsigned int,2003858261>::Reset((__int64 *)this + 14);
  Win32FreePool();
  return this;
}
