/*
 * XREFs of ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B68E0
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B94FC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008CC40 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL::_FillTopology(CCD_BTL *this, void **a2, struct _D3DKMT_AUGMENT_CDSJ *a3, int a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v9; // di
  unsigned __int16 v10; // di
  __int64 v11; // rcx
  int Persisted; // eax
  __int64 v13; // rbx
  unsigned __int16 *v14; // rax
  unsigned __int16 v15; // dx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  CCD_BTL *v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = this;
  CCD_TOPOLOGY::Clear(a2);
  v9 = 0;
  while ( 1 )
  {
    v10 = v9 + 1;
    LOWORD(v21) = v10;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)a2, v10, v7, v8) < v10 )
      break;
    if ( a4 == 15 )
    {
      Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)a2, 0xFu, (unsigned __int16 *)&v21);
    }
    else
    {
      if ( a4 != 64 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_25;
      }
      Persisted = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)a2, 0, 0, 0, (unsigned __int16 *)&v21);
    }
    LODWORD(v13) = Persisted;
    if ( Persisted >= 0
      && a3
      && ((v14 = (unsigned __int16 *)a2[8]) == 0LL ? (v15 = 0) : (v15 = v14[10]),
          !v14 ? (v11 = 0LL) : (v11 = v14[11]),
          v15 >= (unsigned __int16)v11) )
    {
      LODWORD(v13) = -1073741789;
      v9 = (_WORD)v21 + 1;
    }
    else
    {
      v9 = (__int16)v21;
    }
    if ( (_DWORD)v13 != -1073741789 )
    {
      if ( (int)v13 >= 0 )
      {
        if ( !a3 )
          return (unsigned int)v13;
        if ( a4 != 64 )
          return (unsigned int)v13;
        v16 = BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology((struct CCD_TOPOLOGY *)a2, a3, 1);
        v13 = v16;
        if ( v16 >= 0 )
          return (unsigned int)v13;
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v19[3] = v13;
LABEL_27:
        v19[4] = a2;
        v19[5] = a2[8];
        v19[6] = a3;
        WdLogEvent5_WdError(v19);
        return (unsigned int)v13;
      }
LABEL_25:
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v19[3] = (int)v13;
      goto LABEL_27;
    }
  }
  v20 = WdLogNewEntry5_WdLowResource(v11);
  *(_QWORD *)(v20 + 24) = v10;
  WdLogEvent5_WdLowResource(v20);
  return 3221225495LL;
}
