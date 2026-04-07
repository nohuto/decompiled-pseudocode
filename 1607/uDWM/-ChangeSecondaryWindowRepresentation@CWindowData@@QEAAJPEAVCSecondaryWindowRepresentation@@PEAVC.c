/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001B7B8
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001AF68 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001B050 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        struct CWindowRepresentation *a3)
{
  CWindowData *v5; // rcx
  char v6; // bl
  CWindowData *v7; // rsi
  bool v8; // bp
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // r9
  __int128 v13; // [rsp+30h] [rbp-18h]

  v5 = *(CWindowData **)a3;
  v6 = 1;
  v7 = (CWindowData *)*((_QWORD *)a2 + 8);
  v13 = *((_OWORD *)a2 + 4);
  v8 = *(_QWORD *)a3 != (_QWORD)v7;
  if ( *(_QWORD *)a3 )
  {
    v12 = *(CWindowData **)a3 != v7 && v5 != this;
    CWindowData::RemoveSecondaryWindowRepresentation((__int64)v5, a2, *((_DWORD *)a3 + 2), v12);
  }
  if ( !v8 || v7 == this )
    v6 = 0;
  v9 = CWindowData::AddSecondaryWindowRepresentation((__int64)v7, a2, SDWORD2(v13), v6);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x191Bu);
  return v10;
}
