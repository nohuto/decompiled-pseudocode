/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C627C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(
        struct _D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rax
  int v11; // eax

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *(_DWORD *)((char *)a1 + v6 + 176) = v11 )
  {
    v6 = 216LL * i;
    if ( (*(_DWORD *)((_BYTE *)a1 + v6 + 48) & 0x400) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v7);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v6 + 48) & 0x10000) == 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = (char *)a1 + v6;
    if ( *(_DWORD *)((char *)a1 + v6 + 180) == 253 )
    {
      if ( (*(_DWORD *)((_BYTE *)a1 + v6 + 48) & 0x1000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v10);
      }
      ((void (__fastcall *)(char *, char *))qword_1C011B508)((char *)a1 + v6 + 56, v9 + 180);
    }
    v11 = *((_DWORD *)v9 + 45);
    ++i;
    *(_DWORD *)((char *)a1 + v6 + 48) |= 0x400u;
  }
}
