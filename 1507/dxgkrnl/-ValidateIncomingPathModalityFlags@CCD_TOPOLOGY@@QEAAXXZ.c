/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0065B34
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  __int64 v5; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v9 = *(_DWORD *)PathDescriptor & 0xCF000;
    if ( (_DWORD)v9 != 847872 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v5, v7, v8);
      *(_QWORD *)(v10 + 24) = 3080LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( (*(_DWORD *)PathDescriptor & 0x100000) != 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v5, v7, v8);
      *(_QWORD *)(v11 + 24) = 3085LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( (*(_DWORD *)PathDescriptor & 0x800000) != 0 )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100) == 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v9, v5, v7, v8);
        *(_QWORD *)(v12 + 24) = 3092LL;
        WdLogEvent5_WdAssertion(v12);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v9, v5, v7, v8);
        *(_QWORD *)(v13 + 24) = 3093LL;
        WdLogEvent5_WdAssertion(v13);
      }
    }
  }
}
