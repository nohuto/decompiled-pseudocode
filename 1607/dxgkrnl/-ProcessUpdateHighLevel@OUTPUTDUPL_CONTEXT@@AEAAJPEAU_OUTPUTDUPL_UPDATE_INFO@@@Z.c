/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0182190
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0181F10 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0181FD0 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C018209C (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_pqqqqqttttttttq @ 0x1C0027E00 (Template_pqqqqqttttttttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00781E8 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017B080 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C017C664 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C017C80C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C017CC68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017DDAC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01826F0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  int v2; // r12d
  _BOOL8 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  OUTPUTDUPL_MGR *v9; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v10; // rcx
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  BOOL v17; // r15d
  int v18; // r14d
  int v19; // ebx
  int v20; // ebx
  int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // rax
  int updated; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v34; // r10
  __int64 v35; // rax
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  int *v40; // [rsp+20h] [rbp-F0h]
  int *v41; // [rsp+28h] [rbp-E8h]
  unsigned int v42; // [rsp+68h] [rbp-A8h]
  int v43; // [rsp+90h] [rbp-80h] BYREF
  int v44; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v45; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v46[20]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD v47[14]; // [rsp+F0h] [rbp-20h] BYREF

  v2 = 0;
  v5 = *(_DWORD *)a2 == 0;
  if ( v5 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 1375LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v47, 0, sizeof(v47));
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47);
    v10 = (DXGDIAGNOSTICSWITHMUTEX **)*((_QWORD *)this + 37);
    v47[13] = *((_DWORD *)this + 4);
    v47[1] = 56;
    v47[12] = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v10, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47, 0LL);
    memset(v46, 0, sizeof(v46));
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46);
    v12 = *((_DWORD *)this + 77);
    v46[13] = *((_DWORD *)this + 4);
    v46[14] = *((_DWORD *)this + 73);
    v46[18] = *((_DWORD *)this + 71);
    v46[1] = 80;
    v46[12] = 6;
    v46[19] ^= (LOBYTE(v46[19]) ^ (unsigned __int8)(16 * v12)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v13 = *((unsigned int *)this + 11);
  v45.QuadPart = 0LL;
  v14 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + v13 + 6),
          v7,
          v8,
          &v45,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v16 = v14;
  if ( v14 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v23 + 24) = v16;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v16;
  }
  v17 = v14 != 258;
  v18 = 0;
  v19 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v44 = 0;
  v43 = 0;
  v20 = v17 | (16 * v19);
  v21 = 0;
  switch ( v20 )
  {
    case 0:
      goto LABEL_25;
    case 1:
      LODWORD(v16) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v43,
                       &v44);
      v31 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v46[17] = *(_DWORD *)(v31 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v32 + 24) = 1504LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v18 = v43;
      goto LABEL_29;
    case 16:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v28 + 24) = 1527LL;
        WdLogEvent5_WdAssertion(v28);
      }
      goto LABEL_25;
    case 17:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v43,
                  &v44);
      v18 = v43;
      LODWORD(v16) = updated;
      if ( v43 && !*(_DWORD *)a2 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = 1517LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = *((_QWORD *)this + 33);
      goto LABEL_28;
  }
  if ( v20 > 271 && v20 <= 273 )
  {
LABEL_25:
    v29 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v29 + 16) == 1 )
    {
      v21 = 1;
      v30 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)(v29 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v30;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v16) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v44);
    *((_DWORD *)this + 71) = 1;
    v27 = *((_QWORD *)this + 34);
LABEL_28:
    v46[17] = *(_DWORD *)(*(_QWORD *)(v27 + 8) + 4LL);
    goto LABEL_29;
  }
  v22 = WdLogNewEntry5_WdAssertion(v15);
  *(_QWORD *)(v22 + 24) = (unsigned int)v20;
  WdLogEvent5_WdAssertion(v22);
  LODWORD(v16) = -1073741595;
LABEL_29:
  if ( v17 )
  {
    if ( !v18 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v33 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v33, *(_QWORD *)(v33 + 144), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v2 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v46[15] = v16;
    v46[16] = v17;
    v35 = *((_QWORD *)this + 33);
    v46[19] = v46[19] & 0xFFFFFE3F | ((v44 & 1 | (2 * (v18 & 1 | (2 * (v21 & 1))))) << 6);
    v36 = *((_DWORD *)this + 78) & 1 | (16 * (v2 & 1));
    v37 = (LOBYTE(v46[19]) ^ (unsigned __int8)*(_DWORD *)(v35 + 16)) & 3 ^ v46[19];
    v38 = *((_QWORD *)this + 34);
    v46[19] = v37;
    v46[19] = v37 & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v38 + 16) & 3 | (8 * v36)));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v34, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46, 1LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v42 = *((_DWORD *)this + 71);
    LODWORD(v41) = *(_DWORD *)a2;
    LODWORD(v40) = *((_DWORD *)this + 11);
    Template_pqqqqqttttttttq(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      v42,
      this,
      v40,
      v41,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v42,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v17,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v18,
      v42,
      v21,
      v2,
      v44,
      v16);
  }
  return (unsigned int)v16;
}
