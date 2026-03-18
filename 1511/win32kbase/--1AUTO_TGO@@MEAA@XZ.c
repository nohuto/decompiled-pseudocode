/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C00526C8
 * Callers:
 *     sub_1C0050B08 @ 0x1C0050B08 (sub_1C0050B08.c)
 *     sub_1C00524F0 @ 0x1C00524F0 (sub_1C00524F0.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C00B9950 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((_QWORD *)this + 2);
}
