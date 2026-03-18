/*
 * XREFs of SmpPageWrite @ 0x14013E380
 * Callers:
 *     MiStoreWriteIssue @ 0x14013E2A4 (MiStoreWriteIssue.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14013FF18 (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(int a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v7; // ebx
  int v10; // edi
  int v11; // eax
  char v12; // cl
  char v13; // cl
  unsigned int v14; // ebx
  struct _EX_RUNDOWN_REF *v16; // rcx
  unsigned __int64 v17; // rtt
  char v18; // [rsp+70h] [rbp+18h]

  v7 = a3;
  v18 = a3;
  v10 = -1;
  if ( (a3 & 0x3F) != 0x20
    || (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v11 = SmpKeyedStoreReference((ULONG_PTR)&qword_140352D30), v10 = v11, v11 == -1) )
  {
    v12 = v18;
  }
  else
  {
    v7 = v11 & 0x1F | v7 & 0xFFFFFFC0;
    v12 = v7;
  }
  v13 = v12 & 0x3F;
  if ( dword_140352D58 == -1 && v13 == 32 )
    v14 = -1073741285;
  else
    v14 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite((unsigned int)SmGlobals, a1, v7, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
  if ( v10 != -1 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (v10 & 0x1F));
    _m_prefetchw(v16);
    v17 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v17 - 2, v17) )
      ExfReleaseRundownProtection(v16);
  }
  return v14;
}
