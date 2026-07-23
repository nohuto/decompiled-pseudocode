/*
 * XREFs of MiMapViewInSystemSpace @ 0x140508F34
 * Callers:
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     MmMapViewInSessionSpaceEx @ 0x1404C30BC (MmMapViewInSessionSpaceEx.c)
 *     MmMapViewInSystemSpaceEx @ 0x140508F08 (MmMapViewInSystemSpaceEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C4A0 (MiCheckPurgeAndUpMapCount.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(__int64 a1, __int64 a2, ULONG_PTR *a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  int PteAddress; // eax
  int v17; // ebx

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
    if ( (unsigned __int64)*a4 > *(_QWORD *)(a1 + 48) - *a5 )
      goto LABEL_11;
  }
  else
  {
    *(_WORD *)a5 = 0;
    *a4 = *(_QWORD *)(a1 + 48) - *a5;
  }
  v14 = ((unsigned __int16)*a4 != 0) + (unsigned int)((unsigned __int64)*a4 >> 16);
  if ( v14 < 0x10000 )
  {
    v15 = MiInsertInSystemSpace(a2, v14, a1, a5, a6);
    v10 = v15;
    if ( v15 )
    {
      PteAddress = MiGetPteAddress(v15);
      v17 = MiAddMappedPtes(
              PteAddress,
              ((*a4 & 0xFFF) != 0) + (unsigned int)((unsigned __int64)*a4 >> 12),
              v11,
              (_DWORD)a5,
              -1);
      if ( v17 >= 0 )
      {
        *a3 = v10;
        return 0LL;
      }
    }
    else
    {
      v17 = -1073741801;
    }
    goto LABEL_13;
  }
LABEL_11:
  v17 = -1073741793;
LABEL_13:
  MiDereferenceControlArea(v11);
  if ( v10 )
    MiRemoveFromSystemSpace(a2, v10, 0);
  return (unsigned int)v17;
}
