/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001B6B0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x18001AB44 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18001AC50 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int v6; // ecx
  __int64 v7; // rsi
  CWindowData *v8; // r14
  int IdealWindowRepresentationType; // eax
  int v10; // eax

  *((_DWORD *)a3 + 2) = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 577) & 1) != 0 )
  {
    v10 = *((_DWORD *)a3 + 2);
    if ( !a2 )
      v10 = 3;
    *((_DWORD *)a3 + 2) = v10;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( *((_QWORD *)this + 51) )
      v6 = 2;
    else
      v6 = CWindowData::HasNonTrivialRepresentation(this) != 0;
    *((_DWORD *)a3 + 2) = v6;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( !a2 && (*((_BYTE *)this + 580) & 8) == 0 && !CWindowData::IsImmersiveWindow(this) )
    {
      v7 = 0LL;
      if ( *((_DWORD *)this + 140) )
      {
        while ( 1 )
        {
          v8 = *(CWindowData **)(*((_QWORD *)this + 67) + 8 * v7);
          IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v8);
          *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
          if ( IdealWindowRepresentationType )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 140) )
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
