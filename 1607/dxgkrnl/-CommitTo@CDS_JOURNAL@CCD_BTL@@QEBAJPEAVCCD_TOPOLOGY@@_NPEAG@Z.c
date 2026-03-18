/*
 * XREFs of ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00B93CC
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z @ 0x1C000A588 (-_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C008BCA4 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::CommitTo(
        CCD_BTL::CDS_JOURNAL *this,
        struct CCD_TOPOLOGY *a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v14; // r15
  unsigned __int16 v15; // bx
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *i; // r15
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v17; // rcx
  bool v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v23; // rcx
  bool v24; // r8
  _QWORD *v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int16 v29; // si
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v30; // rcx
  __int64 v31; // r9
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY **v32; // rcx
  unsigned __int16 v33; // si
  _QWORD *v34; // rdx
  __int64 v35; // rax
  unsigned __int16 v36; // ax
  __int64 v37; // rax

  v4 = (const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this, a3, (__int64)a4);
    if ( (_DWORD)v9 == -1073741266 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      v25[3] = this;
      v25[4] = a2;
      v25[5] = *((_QWORD *)a2 + 8);
      WdLogEvent5_WdWarning(v25);
      return 0LL;
    }
  }
  v14 = *v4;
  v15 = 0;
  while ( v14 != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
  {
    if ( CCD_BTL::CDS_JOURNAL::_IsUnextend(v14) )
    {
      v26 = CCD_BTL::CDS_JOURNAL::_CommitEntry(v23, a2, v24);
      v9 = v26;
      if ( v26 < 0 )
      {
LABEL_18:
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v27[3] = v9;
        v27[4] = v27;
        v27[5] = a2;
        v27[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v27);
        return (unsigned int)v9;
      }
    }
    v14 = *(const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)v14;
  }
  for ( i = *v4; i != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)i )
  {
    if ( !CCD_BTL::CDS_JOURNAL::_IsUnextend(i) )
    {
      v19 = CCD_BTL::CDS_JOURNAL::_CommitEntry(v17, a2, v18);
      v9 = v19;
      if ( v19 == -1073741789 )
      {
        v28 = *((_QWORD *)a2 + 8);
        if ( v28 )
          v29 = *(_WORD *)(v28 + 20);
        else
          v29 = 0;
        v30 = *v4;
        v31 = 0LL;
        while ( v30 != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
        {
          if ( !CCD_BTL::CDS_JOURNAL::_IsUnextend(v30) )
            LOWORD(v31) = v31 + 1;
          v30 = *v32;
        }
        v33 = v31 + v29;
        if ( a4 )
          *a4 = v33;
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v20, v22, v31);
        v34[3] = a2;
        v34[4] = *((_QWORD *)a2 + 8);
        v35 = *((_QWORD *)a2 + 8);
        if ( v35 )
          v36 = *(_WORD *)(v35 + 20);
        else
          v36 = 0;
        v34[5] = v36;
        v37 = *((_QWORD *)a2 + 8);
        if ( v37 )
          v15 = *(_WORD *)(v37 + 22);
        v34[6] = v15;
        v34[7] = v33;
        WdLogEvent5_WdWarning(v34);
        return 3221225507LL;
      }
      if ( v19 < 0 )
        goto LABEL_18;
    }
  }
  return (unsigned int)v9;
}
