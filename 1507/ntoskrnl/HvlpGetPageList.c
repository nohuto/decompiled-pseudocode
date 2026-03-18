/*
 * XREFs of HvlpGetPageList @ 0x1401F0584
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401EEC4C (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EF7AC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     sub_1401F0638 @ 0x1401F0638 (sub_1401F0638.c)
 *     sub_1401F073C @ 0x1401F073C (sub_1401F073C.c)
 */

__int64 __fastcall HvlpGetPageList(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rcx

  *a2 = 0LL;
  *a3 = 0;
  v5 = sub_1401F0638(a1);
  v6 = (_WORD *)v5;
  if ( !*(_BYTE *)(v5 + 2) )
    return 0LL;
  v8 = *(_QWORD *)(v5 + 8);
  v9 = 261;
  if ( *(_WORD *)v5 < *(_WORD *)(v8 + 8) )
  {
LABEL_6:
    v10 = (unsigned __int16)*v6;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 16);
    *a2 = v11 & 0xFFFFFFFFFFLL;
    *v6 = v10 + 1;
    *a3 = v11 >> 40;
  }
  else
  {
    while ( *(_QWORD *)v8 != -1LL )
    {
      sub_1401F073C(v6);
      *v6 = 0;
      if ( *(_WORD *)(v8 + 8) )
        goto LABEL_6;
    }
    return 0;
  }
  return v9;
}
