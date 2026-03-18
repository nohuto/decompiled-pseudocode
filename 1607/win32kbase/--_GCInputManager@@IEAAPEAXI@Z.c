/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C004E894
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C004EB10 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C004EC20 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C004DD3C (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
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
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64)this + 112);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64)this + 112);
  Win32FreePool();
  return this;
}
