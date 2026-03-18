/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00906E8
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0090500 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C002C040 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A12B0 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
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
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rsi
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  SIZE_T v29; // rbp
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  PVOID v35; // r14

  v3 = 0;
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
      v13 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        *((_QWORD *)v12 + 1) = v9;
        memset(v12 + 16, 0, 0x168uLL);
      }
      else
      {
        v13 = 0LL;
      }
      operator delete(0LL);
      if ( v13 )
        operator delete(0LL);
      operator delete(0LL);
      if ( v13 )
      {
        v18 = v13 + 16;
        *((_DWORD *)v13 + 7) = *(_DWORD *)(v9 + 112);
        v19 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v19 - 254) <= 1
          || !v19
          || (v23 = DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9) == 0, v20 = 1, v23) )
        {
          v20 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v13 + 9) = v20;
        *((_DWORD *)v13 + 6) = *(_DWORD *)(v9 + 104);
        *v18 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v13 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v13 + 20) = *(_DWORD *)(v9 + 164);
        v21 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v13 + 21) = v21;
        *((_DWORD *)v13 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v21 == 2 )
          *((_DWORD *)v13 + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9);
        else
          *((_DWORD *)v13 + 22) = 0;
        if ( v13 == (char *)-32LL )
        {
          v27 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v27);
        }
        *((_DWORD *)v13 + 8) = *(_DWORD *)(v9 + 120);
        if ( v13 == (char *)-40LL )
        {
          v28 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v28);
        }
        *((_DWORD *)v13 + 10) = *(_DWORD *)(v9 + 124);
        *((_OWORD *)v13 + 22) = *(_OWORD *)(v9 + 184);
        *((_QWORD *)v13 + 46) = *(_QWORD *)(v9 + 200);
        if ( !*((_QWORD *)v13 + 46) )
          goto LABEL_19;
        v29 = *((_QWORD *)v13 + 45);
        v30 = operator new[](v29, 0x4E506456u, PagedPool);
        v35 = v30;
        if ( v30 )
        {
          memmove(v30, *((const void **)v13 + 46), v29);
          *((_QWORD *)v13 + 46) = v35;
LABEL_19:
          *a3 = v18;
          v13 = 0LL;
LABEL_20:
          operator delete(v13);
          return v3;
        }
        v26 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
        *(_QWORD *)(v26 + 24) = v29;
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v26 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v26);
      v3 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v25 + 24) = a1;
    WdLogEvent5_WdError(v25);
    return 3223192375LL;
  }
}
