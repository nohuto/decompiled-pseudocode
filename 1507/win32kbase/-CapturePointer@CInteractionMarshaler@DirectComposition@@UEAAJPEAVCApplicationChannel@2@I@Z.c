/*
 * XREFs of ?CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z @ 0x1C00D8350
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00D839C (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CapturePointer(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3)
{
  char *v3; // rbx
  __int64 result; // rax

  v3 = (char *)this + 200;
  result = CDynamicArray<unsigned int,2003858261>::Grow((char *)this + 200, a2);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4LL * (unsigned int)(*((_DWORD *)v3 + 2))++) = a3;
    *((_DWORD *)this + 4) |= 0x100u;
  }
  return result;
}
