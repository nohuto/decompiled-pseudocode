/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0158FAC
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0154FD8 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pqqttq @ 0x1C002155C (Template_pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C008E174 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0152300 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C015390C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0153D68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0154D9C (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  OUTPUTDUPL_MGR *v9; // rcx
  int v10; // ecx
  UINT v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  OUTPUTDUPL_MGR *v27; // rcx
  __int64 v28; // rdx
  DXGDIAGNOSTICSWITHMUTEX **v29; // rcx
  unsigned int v30; // r8d
  __int64 v32; // [rsp+20h] [rbp-59h]
  __int64 v33; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v34[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v35[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v35, 0, sizeof(v35));
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v35);
    v10 = *((_DWORD *)this + 71);
    v35[13] = *((_DWORD *)this + 4);
    v6 = v35[14] & 0xFFFFFFF3 | (4 * (v10 & 1));
    v35[1] = 64;
    v35[14] = v6;
    v35[12] = 10;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    ++*((_DWORD *)this + 11);
    v11 = *((_DWORD *)this + 11) < *((_DWORD *)this + 10) ? *((_DWORD *)this + 11) : 0;
    *((_DWORD *)this + 11) = v11;
  }
  else
  {
    v11 = *((_DWORD *)this + 11);
  }
  a2->NextKeyMutexIdx = v11;
  v12 = *((_QWORD *)this + 33);
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 20) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  if ( *(_DWORD *)(v12 + 16) != 1 )
  {
    *(_DWORD *)(v12 + 16) = 0;
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_DWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 24) = 0;
    *(_DWORD *)(v13 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v14 + 24) = 2299LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v15 + 24) = 2309LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *((_QWORD *)this + 34);
    v17 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v17;
    *((_QWORD *)this + 33) = v16;
    if ( !*(_DWORD *)(v16 + 20) )
    {
      *(_QWORD *)v16 = *v17;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v18 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v18[5] || v18[10]) && v18[4] != 1 )
    {
      v19 = *((unsigned int *)this + 11);
      v34[0].QuadPart = 0LL;
      v20 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + v19 + 6), v5, v7, v34, 0LL, 1);
      v3 = v20;
      if ( v20 == 258 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = 2338LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( (int)v3 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v26 + 24) = v3;
        WdLogEvent5_WdError(v26);
        return (unsigned int)v3;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1LL);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v35[14] |= 8u;
    }
  }
  v27 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v27) )
  {
    v35[14] = ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v30;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v29, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v35, 1LL);
    v30 = v35[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v33) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v32) = *((_DWORD *)this + 11);
    Template_pqqttq((v30 >> 3) & 1, v28, (v30 >> 2) & 1, this, v32, v33, (v30 >> 2) & 1, (v30 >> 3) & 1, v3);
  }
  return (unsigned int)v3;
}
