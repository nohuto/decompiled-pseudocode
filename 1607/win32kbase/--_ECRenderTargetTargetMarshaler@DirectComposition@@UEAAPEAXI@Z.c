/*
 * XREFs of ??_ECRenderTargetTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C007C4C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CRenderTargetTargetMarshaler *__fastcall DirectComposition::CRenderTargetTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
