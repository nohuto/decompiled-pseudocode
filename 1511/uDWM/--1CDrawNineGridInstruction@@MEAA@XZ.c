/*
 * XREFs of ??1CDrawNineGridInstruction@@MEAA@XZ @ 0x180013D9C
 * Callers:
 *     ??_ECDrawNineGridInstruction@@MEAAPEAXI@Z @ 0x1800139C0 (--_ECDrawNineGridInstruction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawNineGridInstruction::~CDrawNineGridInstruction(CDrawNineGridInstruction *this)
{
  CBaseObject **v2; // rbx
  __int64 v3; // rsi

  *(_QWORD *)this = &CDrawNineGridInstruction::`vftable';
  v2 = (CBaseObject **)((char *)this + 48);
  v3 = 9LL;
  do
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)this = &CBaseObject::`vftable';
}
