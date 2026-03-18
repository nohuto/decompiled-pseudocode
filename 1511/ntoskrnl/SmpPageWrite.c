/*
 * XREFs of SmpPageWrite @ 0x14010B7A4
 * Callers:
 *     MiStoreWriteIssue @ 0x14010B6E8 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14010B87C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14010F104 (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(int a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v7; // ebx
  int v10; // edi
  char v11; // cl
  char v12; // cl
  unsigned int v13; // ebx
  int v15; // eax
  char v16; // [rsp+70h] [rbp+18h]

  v7 = a3;
  v16 = a3;
  v10 = -1;
  if ( (a3 & 0x3F) != 0x20
    || (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v15 = SmpKeyedStoreReference((ULONG_PTR)&qword_140304FC0), v10 = v15, v15 == -1) )
  {
    v11 = v16;
  }
  else
  {
    v7 = v15 & 0x1F | v7 & 0xFFFFFFC0;
    v11 = v7;
  }
  v12 = v11 & 0x3F;
  if ( dword_140304FE8 == -1 && v12 == 32 )
    v13 = -1073741285;
  else
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
            (unsigned int)&SmGlobals,
            a1,
            v7,
            a4,
            a5 & 0x7FFFFFFFFFFFFFFFLL,
            a6,
            a7);
  if ( v10 != -1 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (v10 & 0x1F));
  return v13;
}
