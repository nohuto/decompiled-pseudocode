/*
 * XREFs of _CcdReadRegistryValues @ 0x1C00B4534
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B4B4C (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B4DF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B5350 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  SIZE_T v12; // rax
  unsigned __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // r15
  char *v18; // rcx
  __int64 v19; // rdx
  _DWORD *v20; // rax
  int RegistryValues; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = CcdOpenRegistrySubkey((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v11 = v9;
    if ( v9 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v28[7] = a5;
      v28[3] = v11;
      v28[4] = a1;
      v28[5] = SourceString;
      v28[6] = Src;
      WdLogEvent5_WdError(v28);
      return (unsigned int)v11;
    }
  }
  else
  {
    Handle = a1;
  }
  v12 = 56 * v5;
  v13 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v12 = -1LL;
  v14 = (char *)operator new[](v12, 0x63644356u, (POOL_TYPE)512);
  v16 = v14;
  if ( v14 )
  {
    memmove(v14, Src, 56 * v5);
    v17 = a5;
    if ( (_DWORD)v5 != 1 )
    {
      v18 = v16 + 40;
      v19 = (unsigned int)(v5 - 1);
      do
      {
        *((_QWORD *)v18 - 2) += v17;
        v20 = (_DWORD *)*((_QWORD *)v18 - 2);
        *((_DWORD *)v18 - 2) = 0x4000000;
        *(_QWORD *)v18 = 0LL;
        *((_DWORD *)v18 + 2) = 0;
        v18 += 56;
        *v20 = 0;
        --v19;
      }
      while ( v19 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v16, 0LL, 0LL);
    v26 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      v30[3] = v26;
      v30[4] = Handle;
      v30[5] = Src;
      v30[6] = v13;
      v30[7] = v17;
      WdLogEvent5_WdWarning(v30);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete(v16);
    return (unsigned int)v26;
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v29 + 24) = v5;
    *(_QWORD *)(v29 + 32) = 56 * v5;
    WdLogEvent5_WdLowResource(v29);
    return 3221225495LL;
  }
}
