/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089988
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00897A0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C002C320 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rsi
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  SIZE_T v30; // rbp
  PVOID v31; // rax
  __int64 v32; // rcx
  PVOID v33; // r14

  v4 = 0;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v25);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v10 )
    {
      v13 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
      v14 = v13;
      if ( v13 )
      {
        *(_DWORD *)v13 = 305419896;
        *((_QWORD *)v13 + 1) = v10;
        memset(v13 + 16, 0, 0x168uLL);
      }
      else
      {
        v14 = 0LL;
      }
      operator delete(0LL);
      if ( v14 )
        operator delete(0LL);
      operator delete(0LL);
      if ( v14 )
      {
        v19 = v14 + 16;
        *((_DWORD *)v14 + 7) = *(_DWORD *)(v10 + 112);
        v20 = *(_DWORD *)(v10 + 116);
        if ( (unsigned int)(v20 - 254) <= 1
          || !v20
          || (v24 = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(*(DMMVIDEOPRESENTTARGET **)(*(_QWORD *)(v10 + 96)
                                                                                                + 96LL)) == 0,
              v21 = 1,
              v24) )
        {
          v21 = *(_DWORD *)(v10 + 116);
        }
        *((_DWORD *)v14 + 9) = v21;
        *((_DWORD *)v14 + 6) = *(_DWORD *)(v10 + 104);
        *v19 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 24LL);
        *((_DWORD *)v14 + 5) = *(_DWORD *)(*(_QWORD *)(v10 + 96) + 24LL);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v10 + 164);
        v22 = *(unsigned int *)(v10 + 172);
        *((_DWORD *)v14 + 21) = v22;
        *((_DWORD *)v14 + 87) = *(_DWORD *)(v10 + 168);
        if ( (_DWORD)v22 == 2 )
          *((_DWORD *)v14 + 22) = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(
                                    (DMMVIDPNPRESENTPATH *)v10,
                                    v15,
                                    v17,
                                    v18);
        else
          *((_DWORD *)v14 + 22) = 0;
        if ( v14 == (char *)-32LL )
        {
          v28 = WdLogNewEntry5_WdAssertion(v22, v15, v17, v18);
          WdLogEvent5_WdAssertion(v28);
        }
        *((_DWORD *)v14 + 8) = *(_DWORD *)(v10 + 120);
        if ( v14 == (char *)-40LL )
        {
          v29 = WdLogNewEntry5_WdAssertion(v22, v15, v17, v18);
          WdLogEvent5_WdAssertion(v29);
        }
        *((_DWORD *)v14 + 10) = *(_DWORD *)(v10 + 124);
        *((_OWORD *)v14 + 22) = *(_OWORD *)(v10 + 184);
        *((_QWORD *)v14 + 46) = *(_QWORD *)(v10 + 200);
        if ( !*((_QWORD *)v14 + 46) )
          goto LABEL_19;
        v30 = *((_QWORD *)v14 + 45);
        v31 = operator new[](v30, 0x4E506456u, PagedPool);
        v33 = v31;
        if ( v31 )
        {
          memmove(v31, *((const void **)v14 + 46), v30);
          *((_QWORD *)v14 + 46) = v33;
LABEL_19:
          *a3 = v19;
          v14 = 0LL;
LABEL_20:
          operator delete(v14);
          return v4;
        }
        v27 = WdLogNewEntry5_WdLowResource(v32);
        *(_QWORD *)(v27 + 24) = v30;
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v16);
        *(_QWORD *)(v27 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v27);
      v4 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v11, v12) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192375LL;
  }
}
