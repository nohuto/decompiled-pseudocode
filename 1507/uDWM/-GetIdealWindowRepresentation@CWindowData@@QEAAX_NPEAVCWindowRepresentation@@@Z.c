/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180017B54
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180018740 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180018838 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int HasNonTrivialRepresentation; // ecx
  __int64 v7; // rsi
  __int64 v8; // r14
  int IdealWindowRepresentationType; // eax
  int v10; // eax

  *((_DWORD *)a3 + 2) = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 553) & 1) != 0 )
  {
    v10 = *((_DWORD *)a3 + 2);
    if ( !a2 )
      v10 = 3;
    *((_DWORD *)a3 + 2) = v10;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( *((_QWORD *)this + 48) )
      HasNonTrivialRepresentation = 2;
    else
      HasNonTrivialRepresentation = CWindowData::HasNonTrivialRepresentation(this);
    *((_DWORD *)a3 + 2) = HasNonTrivialRepresentation;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( !a2 && (*((_BYTE *)this + 556) & 0x20) == 0 && !CWindowData::IsImmersiveWindow(this) )
    {
      v7 = 0LL;
      if ( *((_DWORD *)this + 134) )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(*((_QWORD *)this + 64) + 8 * v7);
          IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v8);
          *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
          if ( IdealWindowRepresentationType )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 134) )
            goto LABEL_13;
        }
        *(_QWORD *)a3 = v8;
      }
    }
LABEL_13:
    if ( !*((_DWORD *)a3 + 2) )
      *((_DWORD *)a3 + 2) = 3;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a3 + 2) == 3 )
      *((_DWORD *)a3 + 2) = 1;
  }
}
