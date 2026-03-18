/*
 * XREFs of sub_1C005F048 @ 0x1C005F048
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0060AF0 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall sub_1C005F048(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rsi
  __int64 v20; // r15
  char *v21; // rcx
  __int64 v22; // rdx
  _DWORD *v23; // rax
  int RegistryValues; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = sub_1C005F2F8((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v11 = v9;
    if ( v9 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v31[7] = a5;
      v31[3] = v11;
      v31[4] = a1;
      v31[5] = SourceString;
      v31[6] = Src;
      WdLogEvent5_WdError(v31);
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
  v14 = (char *)operator new[](v12, 0x63644356u, (enum _POOL_TYPE)512);
  v19 = v14;
  if ( v14 )
  {
    memmove(v14, Src, 56 * v5);
    v20 = a5;
    if ( (_DWORD)v5 != 1 )
    {
      v21 = v19 + 40;
      v22 = (unsigned int)(v5 - 1);
      do
      {
        *((_QWORD *)v21 - 2) += v20;
        v23 = (_DWORD *)*((_QWORD *)v21 - 2);
        *((_DWORD *)v21 - 2) = 0x4000000;
        *(_QWORD *)v21 = 0LL;
        *((_DWORD *)v21 + 2) = 0;
        v21 += 56;
        *v23 = 0;
        --v22;
      }
      while ( v22 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v19, 0LL, 0LL);
    v29 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      v33[3] = v29;
      v33[4] = Handle;
      v33[5] = Src;
      v33[6] = v13;
      v33[7] = v20;
      WdLogEvent5_WdWarning(v33);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete(v19);
    return (unsigned int)v29;
  }
  else
  {
    v32 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v32 + 24) = v5;
    *(_QWORD *)(v32 + 32) = 56 * v5;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
}
