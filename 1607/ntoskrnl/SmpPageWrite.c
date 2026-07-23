/*
 * XREFs of SmpPageWrite @ 0x14011A1C8
 * Callers:
 *     MiStoreWriteIssue @ 0x14011A10C (MiStoreWriteIssue.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14011CD78 (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(int a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+68h] [rbp+10h]

  v15 = a3;
  v10 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v11 = SmpKeyedStoreReference((ULONG_PTR)&qword_1403BF150), v10 = v11, v11 == -1) )
  {
    v12 = v15;
  }
  else
  {
    v12 = v11 & 0x3FF | a3 & 0xFFFFF800;
    v15 = v12;
  }
  if ( (v12 & 0x7FF) != 0x400 )
    goto LABEL_7;
  if ( dword_1403BF178 != -1 )
  {
    v15 = dword_1403BF178 & 0x3FF | v12 & 0xFFFFF800;
LABEL_7:
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
            (unsigned int)&SmGlobals,
            a1,
            v15,
            a4,
            a5 & 0x7FFFFFFFFFFFFFFFLL,
            a6,
            a7);
    goto LABEL_8;
  }
  v13 = -1073741285;
LABEL_8:
  if ( v10 != -1 )
    SmKmStoreDereference((__int64)&SmGlobals, v10);
  return v13;
}
