/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0050074
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C007ED50 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C007F830 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C007B748 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this, __int64 a2)
{
  void *v3; // rcx
  __int64 i; // rsi
  __int64 v5; // rdx

  v3 = *(void **)this;
  if ( v3 )
    ZwClose(v3);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i) )
      Win32FreePool();
  }
  CDynamicArray<unsigned int,2003858261>::Reset((char *)this + 112, a2);
  CDynamicArray<unsigned int,2003858261>::Reset((char *)this + 112, v5);
  Win32FreePool();
  return this;
}
