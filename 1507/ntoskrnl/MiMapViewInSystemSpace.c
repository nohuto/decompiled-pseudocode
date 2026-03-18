/*
 * XREFs of MiMapViewInSystemSpace @ 0x14051BF64
 * Callers:
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     MmMapViewInSessionSpaceEx @ 0x14051BAE8 (MmMapViewInSessionSpaceEx.c)
 *     MmMapViewInSystemSpaceEx @ 0x14051BF38 (MmMapViewInSystemSpaceEx.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14008A920 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(__int64 a1, __int64 a2, ULONG_PTR *a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ebx
  __int64 v17; // r9

  if ( (a6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v10 = 0LL;
  v11 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v11);
  v12 = *a4;
  if ( *a4 )
  {
    v13 = (unsigned __int16)*(_DWORD *)a5;
    if ( v12 + v13 < v13 )
      goto LABEL_11;
    *a4 = v12 + v13;
    *(_WORD *)a5 = 0;
    if ( *a4 > (unsigned __int64)(*(_QWORD *)(a1 + 48) - *a5) )
      goto LABEL_11;
  }
  else
  {
    *(_WORD *)a5 = 0;
    *a4 = *(_QWORD *)(a1 + 48) - *a5;
  }
  v12 = ((unsigned __int16)*a4 != 0) + (unsigned int)((unsigned __int64)*a4 >> 16);
  if ( (unsigned int)v12 < 0x10000 )
  {
    v14 = MiInsertInSystemSpace(a2, v12, a1, a5, a6);
    v10 = v14;
    if ( v14 )
    {
      v15 = MiAddMappedPtes(
              (unsigned int)(v14 >> 9) & 0xFFFFFFF8,
              ((*a4 & 0xFFF) != 0) + (unsigned int)((unsigned __int64)*a4 >> 12),
              v11,
              (_DWORD)a5,
              -1);
      if ( v15 >= 0 )
      {
        *a3 = v10;
        return 0LL;
      }
    }
    else
    {
      v15 = -1073741801;
    }
    goto LABEL_13;
  }
LABEL_11:
  v15 = -1073741793;
LABEL_13:
  MiDereferenceControlArea(v11, v12);
  if ( v10 )
    MiRemoveFromSystemSpace(a2, v10, 0, v17);
  return (unsigned int)v15;
}
