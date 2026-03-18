/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A42E0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v6 = *(_DWORD *)PathDescriptor & 0xCF000;
    if ( (_DWORD)v6 != 847872 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 3142LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( (*(_DWORD *)PathDescriptor & 0x100000) != 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = 3147LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( (*(_DWORD *)PathDescriptor & 0x800000) != 0 )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v9 + 24) = 3154LL;
        WdLogEvent5_WdAssertion(v9);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v10 + 24) = 3155LL;
        WdLogEvent5_WdAssertion(v10);
      }
    }
  }
}
