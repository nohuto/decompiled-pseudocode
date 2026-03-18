/*
 * XREFs of ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00AE0F0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z @ 0x1C000AC54 (-_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C00A3934 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00ADE24 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
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
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int16 v27; // si
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY *v28; // rcx
  __int64 v29; // r9
  const struct CCD_BTL::CDS_JOURNAL::_ENTRY **v30; // rcx
  unsigned __int16 v31; // si
  _QWORD *v32; // rdx
  __int64 v33; // rax
  unsigned __int16 v34; // ax
  __int64 v35; // rax

  v4 = (const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this, a3, (__int64)a4);
    if ( (_DWORD)v9 == -1073741266 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      v23[3] = this;
      v23[4] = a2;
      v23[5] = *((_QWORD *)a2 + 8);
      WdLogEvent5_WdWarning(v23);
      return 0LL;
    }
  }
  v14 = *v4;
  v15 = 0;
  while ( v14 != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
  {
    if ( CCD_BTL::CDS_JOURNAL::_IsUnextend(v14) )
    {
      v24 = CCD_BTL::CDS_JOURNAL::_CommitEntry(v22, a2);
      v9 = v24;
      if ( v24 < 0 )
      {
LABEL_18:
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v25[3] = v9;
        v25[4] = v25;
        v25[5] = a2;
        v25[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v25);
        return (unsigned int)v9;
      }
    }
    v14 = *(const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)v14;
  }
  for ( i = *v4; i != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CCD_BTL::CDS_JOURNAL::_ENTRY **)i )
  {
    if ( !CCD_BTL::CDS_JOURNAL::_IsUnextend(i) )
    {
      v18 = CCD_BTL::CDS_JOURNAL::_CommitEntry(v17, a2);
      v9 = v18;
      if ( v18 == -1073741789 )
      {
        v26 = *((_QWORD *)a2 + 8);
        if ( v26 )
          v27 = *(_WORD *)(v26 + 20);
        else
          v27 = 0;
        v28 = *v4;
        v29 = 0LL;
        while ( v28 != (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v4 )
        {
          if ( !CCD_BTL::CDS_JOURNAL::_IsUnextend(v28) )
            LOWORD(v29) = v29 + 1;
          v28 = *v30;
        }
        v31 = v29 + v27;
        if ( a4 )
          *a4 = v31;
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v19, v21, v29);
        v32[3] = a2;
        v32[4] = *((_QWORD *)a2 + 8);
        v33 = *((_QWORD *)a2 + 8);
        if ( v33 )
          v34 = *(_WORD *)(v33 + 20);
        else
          v34 = 0;
        v32[5] = v34;
        v35 = *((_QWORD *)a2 + 8);
        if ( v35 )
          v15 = *(_WORD *)(v35 + 22);
        v32[6] = v15;
        v32[7] = v31;
        WdLogEvent5_WdWarning(v32);
        return 3221225507LL;
      }
      if ( v18 < 0 )
        goto LABEL_18;
    }
  }
  return (unsigned int)v9;
}
