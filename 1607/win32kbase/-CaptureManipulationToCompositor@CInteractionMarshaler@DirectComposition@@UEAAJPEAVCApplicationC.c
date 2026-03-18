/*
 * XREFs of ?CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@II_K@Z @ 0x1C00E7480
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00F2420 (-Grow@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHH.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CaptureManipulationToCompositor(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  char *v5; // rdi
  int v6; // ebx
  _OWORD *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v5 = (char *)this + 216;
  *((_QWORD *)&v9 + 1) = a5;
  v6 = 0;
  *(_QWORD *)&v9 = __PAIR64__(a4, a3);
  if ( *((_DWORD *)this + 56) != *((_DWORD *)this + 57)
    || (v6 = CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Grow(
               (char *)this + 216,
               a2),
        v6 >= 0) )
  {
    v7 = Win32AllocPoolZInit(0x10uLL);
    if ( !v7 )
      v6 = -1073741801;
    if ( v6 >= 0 )
    {
      *v7 = v9;
      *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*((_DWORD *)v5 + 2))++) = v7;
    }
  }
  return (unsigned int)v6;
}
