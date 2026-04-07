/*
 * XREFs of ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x180014BE0
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180014B10 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x1800123D0 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180017890 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDrawGeometryInstruction::~CDrawGeometryInstruction(CDrawGeometryInstruction *this)
{
  volatile signed __int32 *v1; // rbx
  void *(__fastcall *v3)(CResource *__hidden, unsigned int); // rdi
  volatile signed __int32 *v4; // rbx
  CCachedVisualImageBrushResource *(__fastcall *v5)(CCachedVisualImageBrushResource *, char); // rdi

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    v3 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v1;
    if ( v3 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v1, 1u);
    else
      v3((CResource *)v1, 1u);
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v5 = **(CCachedVisualImageBrushResource *(__fastcall ***)(CCachedVisualImageBrushResource *, char))v4;
    if ( (char *)v5 == (char *)CResource::`scalar deleting destructor' )
    {
      CResource::`scalar deleting destructor'((CResource *)v4, 1u);
    }
    else if ( v5 == CCachedVisualImageBrushResource::`vector deleting destructor' )
    {
      CCachedVisualImageBrushResource::`vector deleting destructor'((CCachedVisualImageBrushResource *)v4, 1);
    }
    else
    {
      v5((CCachedVisualImageBrushResource *)v4, 1);
    }
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
