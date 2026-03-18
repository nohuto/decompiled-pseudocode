/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00A2A8C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00A29BC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[104]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v13, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v13, v2) < v2 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
      v12[3] = v2;
      v12[4] = this;
      v12[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v12);
      LODWORD(v9) = -1073741801;
      goto LABEL_6;
    }
    v7 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v13, 0, 1, 1, &i);
    v9 = v7;
    if ( v7 != -1073741789 )
      break;
  }
  if ( v7 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v11[3] = v9;
    v11[4] = this;
    v11[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v11);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v13);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v13);
  return (unsigned int)v9;
}
