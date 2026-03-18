/*
 * XREFs of MiMapViewInSystemSpace @ 0x1403C7CC0
 * Callers:
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1403C7C94 (MmMapViewInSystemSpaceEx.c)
 *     MmMapViewInSessionSpaceEx @ 0x1404B8898 (MmMapViewInSessionSpaceEx.c)
 * Callees:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiAddMappedPtes @ 0x1403C7E10 (MiAddMappedPtes.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(__int64 a1, __int64 a2, ULONG_PTR *a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  int PteAddress; // eax
  int v19; // ebx

  if ( (a6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v10 = 0LL;
  v11 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v11, v12, v13);
  v14 = *a4;
  if ( *a4 )
  {
    v15 = (unsigned __int16)*(_DWORD *)a5;
    if ( v14 + v15 < v15 )
      goto LABEL_11;
    *a4 = v14 + v15;
    *(_WORD *)a5 = 0;
    if ( *a4 > (unsigned __int64)(*(_QWORD *)(a1 + 48) - *a5) )
      goto LABEL_11;
  }
  else
  {
    *(_WORD *)a5 = 0;
    *a4 = *(_QWORD *)(a1 + 48) - *a5;
  }
  v16 = ((unsigned __int16)*a4 != 0) + (unsigned int)((unsigned __int64)*a4 >> 16);
  if ( v16 < 0x10000 )
  {
    v17 = MiInsertInSystemSpace(a2, v16, a1, a5, a6);
    v10 = v17;
    if ( v17 )
    {
      PteAddress = MiGetPteAddress(v17);
      v19 = MiAddMappedPtes(
              PteAddress,
              ((*a4 & 0xFFF) != 0) + (unsigned int)((unsigned __int64)*a4 >> 12),
              v11,
              (_DWORD)a5,
              -1);
      if ( v19 >= 0 )
      {
        *a3 = v10;
        return 0LL;
      }
    }
    else
    {
      v19 = -1073741801;
    }
    goto LABEL_13;
  }
LABEL_11:
  v19 = -1073741793;
LABEL_13:
  MiDereferenceControlArea(v11);
  if ( v10 )
    MiRemoveFromSystemSpace(a2, v10, 0);
  return (unsigned int)v19;
}
