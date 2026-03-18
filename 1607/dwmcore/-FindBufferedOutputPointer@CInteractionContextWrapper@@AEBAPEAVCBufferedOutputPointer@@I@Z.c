/*
 * XREFs of ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x18016FE30
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z @ 0x18016FE10 (-DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z.c)
 *     ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x180170380 (-HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z.c)
 * Callees:
 *     <none>
 */

struct CBufferedOutputPointer *__fastcall CInteractionContextWrapper::FindBufferedOutputPointer(
        CInteractionContextWrapper *this,
        int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // r9d
  _DWORD **v5; // r11
  __int64 v6; // r10
  _DWORD **i; // rcx

  v2 = *((int *)this + 138);
  v3 = 0LL;
  v4 = 0;
  if ( (int)v2 > 0 )
  {
    v5 = (_DWORD **)*((_QWORD *)this + 68);
    v6 = 0LL;
    for ( i = v5; a2 != **i; ++i )
    {
      ++v4;
      if ( ++v6 >= v2 )
        return (struct CBufferedOutputPointer *)v3;
    }
    return (struct CBufferedOutputPointer *)v5[v4];
  }
  return (struct CBufferedOutputPointer *)v3;
}
