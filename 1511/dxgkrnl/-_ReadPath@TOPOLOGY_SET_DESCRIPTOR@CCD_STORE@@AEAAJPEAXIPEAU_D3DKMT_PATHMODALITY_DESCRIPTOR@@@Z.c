/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0060AF0
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     sub_1C005F048 @ 0x1C005F048 (sub_1C005F048.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8);
    v26[3] = v9;
    v26[4] = a2;
    v26[5] = v5;
    v26[6] = a4;
    WdLogEvent5_WdAssertion(v26);
  }
  else
  {
    v10 = sub_1C005F048(a2, &pszDest, &unk_1C0046140, 0xDu, (__int64)a4);
    v9 = v10;
    if ( v10 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      v27[3] = v9;
      v27[4] = a2;
      v27[5] = v5;
      v27[6] = a4;
      WdLogEvent5_WdWarning(v27);
    }
    else
    {
      if ( (*(_DWORD *)a4 & 0x100) != 0 )
      {
        v15 = sub_1C005F048(a2, &pszDest, &unk_1C0046490, 6u, (__int64)a4);
        v9 = v15;
        if ( v15 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
          v28[3] = v9;
          v28[4] = a2;
          v28[5] = v5;
          v28[6] = a4;
          WdLogEvent5_WdWarning(v28);
          v29 = sub_1C005F048(a2, 0LL, &unk_1C00465E0, 8u, (__int64)a4);
          v31 = v29;
          if ( v29 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
            v32[3] = v31;
            v32[4] = a2;
            v32[5] = v5;
            WdLogEvent5_WdError(v32);
            *(_DWORD *)a4 &= ~0x100u;
          }
          if ( (*(_DWORD *)a4 & 0x100) != 0 )
            *(_DWORD *)a4 |= 0x20000u;
          LODWORD(v9) = 0;
        }
      }
      if ( (*(_DWORD *)a4 & 0x800000) != 0 )
      {
        v20 = sub_1C005F048(a2, &pszDest, &unk_1C0046020, 5u, (__int64)a4);
        v9 = v20;
        if ( v20 < 0 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
          v33[3] = v9;
          v33[4] = a2;
          v33[5] = v5;
          v33[6] = a4;
          WdLogEvent5_WdWarning(v33);
          *(_DWORD *)a4 &= ~0x800000u;
          LODWORD(v9) = 0;
        }
        else if ( *((_DWORD *)a4 + 41) == *((_DWORD *)a4 + 39) || *((_DWORD *)a4 + 42) == *((_DWORD *)a4 + 40) )
        {
          *(_DWORD *)a4 &= ~0x800000u;
        }
      }
    }
  }
  return (unsigned int)v9;
}
