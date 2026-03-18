/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009CBD4
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C009CE84 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _CcdReadRegistryValues @ 0x1C009C5C0 (_CcdReadRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  wchar_t pszDest; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", a3);
  v12 = v7;
  if ( v7 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    v29[3] = v12;
    v29[4] = a2;
    v29[5] = v5;
    v29[6] = a4;
    WdLogEvent5_WdAssertion(v29);
  }
  else
  {
    v13 = CcdReadRegistryValues(a2, &pszDest, &unk_1C0046140, 0xDu, (__int64)a4);
    v12 = v13;
    if ( v13 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v30[3] = v12;
      v30[4] = a2;
      v30[5] = v5;
      v30[6] = a4;
      WdLogEvent5_WdWarning(v30);
    }
    else
    {
      if ( (*(_DWORD *)a4 & 0x100) != 0 )
      {
        v18 = CcdReadRegistryValues(a2, &pszDest, &unk_1C0046490, 6u, (__int64)a4);
        v12 = v18;
        if ( v18 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
          v31[3] = v12;
          v31[4] = a2;
          v31[5] = v5;
          v31[6] = a4;
          WdLogEvent5_WdWarning(v31);
          *(_DWORD *)a4 = *(_DWORD *)a4 & 0xFFFDFEFF | 0x20000;
          LODWORD(v12) = 0;
        }
      }
      if ( (*(_DWORD *)a4 & 0x800000) != 0 )
      {
        v23 = CcdReadRegistryValues(a2, &pszDest, &unk_1C0046020, 5u, (__int64)a4);
        v12 = v23;
        if ( v23 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
          v32[3] = v12;
          v32[4] = a2;
          v32[5] = v5;
          v32[6] = a4;
          WdLogEvent5_WdWarning(v32);
          *(_DWORD *)a4 &= ~0x800000u;
          LODWORD(v12) = 0;
        }
        else if ( *((_DWORD *)a4 + 41) == *((_DWORD *)a4 + 39) || *((_DWORD *)a4 + 42) == *((_DWORD *)a4 + 40) )
        {
          *(_DWORD *)a4 &= ~0x800000u;
        }
      }
    }
  }
  return (unsigned int)v12;
}
