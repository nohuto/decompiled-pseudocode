/*
 * XREFs of ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0062F18
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0066060 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall CCD_BTL::_FillTopology(
        CCD_BTL *this,
        struct CCD_TOPOLOGY *a2,
        struct _D3DKMT_AUGMENT_CDSJ *a3,
        int a4)
{
  __int16 v7; // di
  unsigned __int16 v8; // di
  __int64 v9; // rcx
  int Persisted; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  CCD_BTL *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = this;
  CCD_TOPOLOGY::Clear(a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = v7 + 1;
    LOWORD(v19) = v8;
    if ( CCD_TOPOLOGY::Reserve(a2, v8) < v8 )
      break;
    if ( a4 == 15 )
    {
      Persisted = CCD_TOPOLOGY::RetrievePersisted(a2, 0xFu, (unsigned __int16 *)&v19);
    }
    else
    {
      if ( a4 != 64 )
      {
        LODWORD(v11) = -1073741811;
        goto LABEL_25;
      }
      Persisted = CCD_TOPOLOGY::RetrieveActive(a2, 0, 0, 0, (unsigned __int16 *)&v19);
    }
    LODWORD(v11) = Persisted;
    if ( Persisted >= 0
      && a3
      && ((v12 = *((_QWORD *)a2 + 8)) == 0 ? (v13 = 0) : (v13 = *(_WORD *)(v12 + 20)),
          !v12 ? (v9 = 0LL) : (v9 = *(unsigned __int16 *)(v12 + 22)),
          v13 >= (unsigned __int16)v9) )
    {
      LODWORD(v11) = -1073741789;
      v7 = (_WORD)v19 + 1;
    }
    else
    {
      v7 = (__int16)v19;
    }
    if ( (_DWORD)v11 != -1073741789 )
    {
      if ( (int)v11 >= 0 )
      {
        if ( !a3 )
          return (unsigned int)v11;
        if ( a4 != 64 )
          return (unsigned int)v11;
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(a2, a3, 1);
        v11 = v14;
        if ( v14 >= 0 )
          return (unsigned int)v11;
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v17[3] = v11;
LABEL_27:
        v17[4] = a2;
        v17[5] = *((_QWORD *)a2 + 8);
        v17[6] = a3;
        WdLogEvent5_WdError(v17);
        return (unsigned int)v11;
      }
LABEL_25:
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v17[3] = (int)v11;
      goto LABEL_27;
    }
  }
  v18 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v18 + 24) = v8;
  WdLogEvent5_WdLowResource(v18);
  return 3221225495LL;
}
