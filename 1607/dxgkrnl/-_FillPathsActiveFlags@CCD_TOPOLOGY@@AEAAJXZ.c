/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C008ADF0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C008AD20 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _BYTE v12[104]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v12, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v12, v2, v3, v4) < v2 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v5);
      v11[3] = v2;
      v11[4] = this;
      v11[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v11);
      LODWORD(v8) = -1073741801;
      goto LABEL_6;
    }
    v6 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v12, 0, 1, 1, &i);
    v8 = v6;
    if ( v6 != -1073741789 )
      break;
  }
  if ( v6 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v10[3] = v8;
    v10[4] = this;
    v10[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v10);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v12);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v12);
  return (unsigned int)v8;
}
