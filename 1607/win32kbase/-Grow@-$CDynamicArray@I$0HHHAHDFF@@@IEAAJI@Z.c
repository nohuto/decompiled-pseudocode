/*
 * XREFs of ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00E754C
 * Callers:
 *     ?CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z @ 0x1C00E7500 (-CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned int,2003858261>::Grow(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 <= *(_DWORD *)(a1 + 12) )
    return v3;
  if ( !is_mul_ok(v2, 4uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)Win32AllocPool();
  v5 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v4, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 8));
      Win32FreePool();
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
