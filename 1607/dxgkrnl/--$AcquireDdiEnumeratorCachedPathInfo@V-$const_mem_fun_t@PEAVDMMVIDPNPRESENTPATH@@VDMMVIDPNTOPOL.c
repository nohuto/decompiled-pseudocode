/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FB48
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C007F960 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0034370 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080DB4 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  _DWORD *v15; // rsi
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  SIZE_T v26; // rbp
  PVOID v27; // rax
  __int64 v28; // rcx
  PVOID v29; // r14

  v3 = 0;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = (char *)operator new(0x178uLL, 0x4E506456u, PagedPool);
      v14 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        *((_QWORD *)v12 + 1) = v9;
        memset(v12 + 16, 0, 0x168uLL);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        operator delete(0LL);
        v15 = v14 + 16;
        *((_DWORD *)v14 + 7) = *(_DWORD *)(v9 + 112);
        v16 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v16 - 254) <= 1
          || !v16
          || (v20 = DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9) == 0, v17 = 1, v20) )
        {
          v17 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v14 + 9) = v17;
        *((_DWORD *)v14 + 6) = *(_DWORD *)(v9 + 104);
        *v15 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v14 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v9 + 164);
        v18 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v14 + 21) = v18;
        *((_DWORD *)v14 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v18 == 2 )
          *((_DWORD *)v14 + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9);
        else
          *((_DWORD *)v14 + 22) = 0;
        if ( v14 == (char *)-32LL )
        {
          v24 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v24);
        }
        *((_DWORD *)v14 + 8) = *(_DWORD *)(v9 + 120);
        if ( v14 == (char *)-40LL )
        {
          v25 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v25);
        }
        *((_DWORD *)v14 + 10) = *(_DWORD *)(v9 + 124);
        *((_OWORD *)v14 + 22) = *(_OWORD *)(v9 + 184);
        *((_QWORD *)v14 + 46) = *(_QWORD *)(v9 + 200);
        if ( !*((_QWORD *)v14 + 46) )
          goto LABEL_17;
        v26 = *((_QWORD *)v14 + 45);
        v27 = operator new(v26, 0x4E506456u, PagedPool);
        v29 = v27;
        if ( v27 )
        {
          memmove(v27, *((const void **)v14 + 46), v26);
          *((_QWORD *)v14 + 46) = v29;
LABEL_17:
          *a3 = v15;
          v14 = 0LL;
LABEL_18:
          operator delete(v14);
          return v3;
        }
        v23 = WdLogNewEntry5_WdLowResource(v28);
        *(_QWORD *)(v23 + 24) = v26;
      }
      else
      {
        v23 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v23 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v23);
      v3 = -1073741801;
      goto LABEL_18;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192375LL;
  }
}
