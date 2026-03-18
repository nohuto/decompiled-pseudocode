/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C015D2C4
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01592BC (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_pqqttq @ 0x1C0021450 (Template_pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01565A0 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0157B78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0159080 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  OUTPUTDUPL_MGR *v8; // rcx
  int v9; // ecx
  UINT v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  OUTPUTDUPL_MGR *v23; // rcx
  __int64 v24; // rdx
  DXGDIAGNOSTICSWITHMUTEX **v25; // rcx
  unsigned int v26; // r8d
  __int64 v28; // [rsp+20h] [rbp-59h]
  __int64 v29; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v30[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v31[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v31, 0, sizeof(v31));
    OUTPUTDUPL_MGR::InitializePacketHeader(v8, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31);
    v9 = *((_DWORD *)this + 71);
    v31[13] = *((_DWORD *)this + 4);
    v6 = v31[14] & 0xFFFFFFF3 | (4 * (v9 & 1));
    v31[1] = 64;
    v31[14] = v6;
    v31[12] = 10;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    ++*((_DWORD *)this + 11);
    v10 = *((_DWORD *)this + 11) < *((_DWORD *)this + 10) ? *((_DWORD *)this + 11) : 0;
    *((_DWORD *)this + 11) = v10;
  }
  else
  {
    v10 = *((_DWORD *)this + 11);
  }
  a2->NextKeyMutexIdx = v10;
  v11 = *((_QWORD *)this + 33);
  *(_QWORD *)v11 = 0LL;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  if ( *(_DWORD *)(v11 + 16) != 1 )
  {
    *(_DWORD *)(v11 + 16) = 0;
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 2299LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v14 + 24) = 2309LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = *((_QWORD *)this + 34);
    v16 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v16;
    *((_QWORD *)this + 33) = v15;
    if ( !*(_DWORD *)(v15 + 20) )
    {
      *(_QWORD *)v15 = *v16;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v17 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v17[5] || v17[10]) && v17[4] != 1 )
    {
      v18 = *((unsigned int *)this + 11);
      v30[0].QuadPart = 0LL;
      v19 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + v18 + 6), v5, v7, v30, 0LL, 1);
      v3 = v19;
      if ( v19 == 258 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = 2338LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( (int)v3 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v22 + 24) = v3;
        WdLogEvent5_WdError(v22);
        return (unsigned int)v3;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v31[14] |= 8u;
    }
  }
  v23 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v23) )
  {
    v31[14] = ((unsigned __int8)v26 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v26;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v25, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31, 1LL);
    v26 = v31[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v29) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v28) = *((_DWORD *)this + 11);
    Template_pqqttq((v26 >> 3) & 1, v24, (v26 >> 2) & 1, this, v28, v29, (v26 >> 2) & 1, (v26 >> 3) & 1, v3);
  }
  return (unsigned int)v3;
}
