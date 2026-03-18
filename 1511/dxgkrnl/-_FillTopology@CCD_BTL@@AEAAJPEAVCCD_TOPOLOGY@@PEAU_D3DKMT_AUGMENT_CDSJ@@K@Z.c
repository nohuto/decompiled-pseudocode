/*
 * XREFs of ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0060194
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADF9C (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A4828 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL::_FillTopology(
        CCD_BTL *this,
        struct CCD_TOPOLOGY *a2,
        struct _D3DKMT_AUGMENT_CDSJ *a3,
        int a4)
{
  __int16 v7; // di
  unsigned __int16 v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int Persisted; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int16 v16; // dx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  CCD_BTL *v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = this;
  CCD_TOPOLOGY::Clear(a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = v7 + 1;
    LOWORD(v22) = v8;
    if ( CCD_TOPOLOGY::Reserve(a2, v8) < v8 )
      break;
    if ( a4 == 15 )
    {
      Persisted = CCD_TOPOLOGY::RetrievePersisted(a2, 0xFu, (unsigned __int16 *)&v22);
    }
    else
    {
      if ( a4 != 64 )
      {
        LODWORD(v14) = -1073741811;
        goto LABEL_25;
      }
      Persisted = CCD_TOPOLOGY::RetrieveActive(a2, 0, 0, 0, (unsigned __int16 *)&v22);
    }
    LODWORD(v14) = Persisted;
    if ( Persisted >= 0
      && a3
      && ((v15 = *((_QWORD *)a2 + 8)) == 0 ? (v16 = 0) : (v16 = *(_WORD *)(v15 + 20)),
          !v15 ? (v10 = 0LL) : (v10 = *(unsigned __int16 *)(v15 + 22)),
          v16 >= (unsigned __int16)v10) )
    {
      LODWORD(v14) = -1073741789;
      v7 = (_WORD)v22 + 1;
    }
    else
    {
      v7 = (__int16)v22;
    }
    if ( (_DWORD)v14 != -1073741789 )
    {
      if ( (int)v14 >= 0 )
      {
        if ( !a3 )
          return (unsigned int)v14;
        if ( a4 != 64 )
          return (unsigned int)v14;
        v17 = BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(a2, a3, 1);
        v14 = v17;
        if ( v17 >= 0 )
          return (unsigned int)v14;
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v20[3] = v14;
LABEL_27:
        v20[4] = a2;
        v20[5] = *((_QWORD *)a2 + 8);
        v20[6] = a3;
        WdLogEvent5_WdError(v20);
        return (unsigned int)v14;
      }
LABEL_25:
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v20[3] = (int)v14;
      goto LABEL_27;
    }
  }
  v21 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v21 + 24) = v8;
  WdLogEvent5_WdLowResource(v21);
  return 3221225495LL;
}
