/*
 * XREFs of ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18001E0B8
 * Callers:
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001D370 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x18001DFC4 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowData::GetIdealWindowRepresentationType(CWindowData *a1)
{
  if ( *((_QWORD *)a1 + 50) )
    return 2;
  else
    return CWindowData::HasNonTrivialRepresentation(a1) != 0;
}
