/*
 * XREFs of HvlpGetPageList @ 0x1401C1DA8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401BF624 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401BFEFC (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C04FC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1401C1F7C (HvlpInvokeGetPageListHypercall.c)
 */

__int64 __fastcall HvlpGetPageList(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 PageListIterator; // rax
  _WORD *v6; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rcx

  *a2 = 0LL;
  *a3 = 0;
  PageListIterator = HvlpGetPageListIterator(a1);
  v6 = (_WORD *)PageListIterator;
  if ( !*(_BYTE *)(PageListIterator + 2) )
    return 0LL;
  v8 = *(_QWORD *)(PageListIterator + 8);
  v9 = 261;
  if ( *(_WORD *)PageListIterator < *(_WORD *)(v8 + 8) )
  {
LABEL_6:
    v10 = (unsigned __int16)*v6;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 16);
    *a2 = v11 & 0xFFFFFFFFFFLL;
    *a3 = ((v11 >> 40) & 0xFFFFFF) + 1;
    *v6 = v10 + 1;
  }
  else
  {
    while ( *(_QWORD *)v8 != -1LL )
    {
      HvlpInvokeGetPageListHypercall(v6);
      *v6 = 0;
      if ( *(_WORD *)(v8 + 8) )
        goto LABEL_6;
    }
    return 0;
  }
  return v9;
}
