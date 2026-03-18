/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B86A0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // r14
  __int64 v7; // rax
  int v8; // eax

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *(_DWORD *)((char *)a1 + v3 + 172) = v8 )
  {
    v3 = 216LL * i;
    if ( (*(_DWORD *)((_BYTE *)a1 + v3 + 48) & 0x400) == 0 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v4);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v3 + 48) & 0x10000) == 0 )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v5);
    }
    v6 = (char *)a1 + v3;
    if ( *(_DWORD *)((char *)a1 + v3 + 176) == 253 )
    {
      if ( (*(_DWORD *)((_BYTE *)a1 + v3 + 48) & 0x1000) == 0 )
      {
        v7 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v7);
      }
      ((void (__fastcall *)(char *, char *))qword_1C01013A8)((char *)a1 + v3 + 56, v6 + 176);
    }
    v8 = *((_DWORD *)v6 + 44);
    ++i;
    *(_DWORD *)((char *)a1 + v3 + 48) |= 0x400u;
  }
}
