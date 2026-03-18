/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01585B8
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0158324 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01583E4 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01584B0 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pqqqqqttttttttq @ 0x1C00213E8 (Template_pqqqqqttttttttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C008E174 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0152300 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C0153824 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C015390C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0153D68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0154D9C (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0158B18 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r12d
  _BOOL8 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_MGR *v12; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v13; // rcx
  OUTPUTDUPL_MGR *v14; // rcx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  BOOL v23; // r15d
  int v24; // r14d
  int v25; // ebx
  int v26; // ebx
  int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rax
  int updated; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v46; // r10
  __int64 v47; // rax
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  int *v52; // [rsp+20h] [rbp-F0h]
  int *v53; // [rsp+28h] [rbp-E8h]
  unsigned int v54; // [rsp+68h] [rbp-A8h]
  int v55; // [rsp+90h] [rbp-80h] BYREF
  int v56; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v57; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v58[20]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD v59[14]; // [rsp+F0h] [rbp-20h] BYREF

  v4 = 0;
  v7 = *(_DWORD *)a2 == 0;
  if ( v7 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1386LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v59, 0, sizeof(v59));
    OUTPUTDUPL_MGR::InitializePacketHeader(v12, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v59);
    v13 = (DXGDIAGNOSTICSWITHMUTEX **)*((_QWORD *)this + 37);
    v59[13] = *((_DWORD *)this + 4);
    v59[1] = 56;
    v59[12] = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v13, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v59, 0LL);
    memset(v58, 0, sizeof(v58));
    OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v58);
    v15 = *((_DWORD *)this + 77);
    v58[13] = *((_DWORD *)this + 4);
    v58[14] = *((_DWORD *)this + 73);
    v58[18] = *((_DWORD *)this + 71);
    v58[1] = 80;
    v58[12] = 6;
    v58[19] ^= (LOBYTE(v58[19]) ^ (unsigned __int8)(16 * v15)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1),
                       v10,
                       v11) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v16 = *((unsigned int *)this + 11);
  v57.QuadPart = 0LL;
  v17 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + v16 + 6),
          v9,
          v10,
          &v57,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v22 = v17;
  if ( v17 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v29 + 24) = v22;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v22;
  }
  v23 = v17 != 258;
  v24 = 0;
  v25 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v56 = 0;
  v55 = 0;
  v26 = v23 | (16 * v25);
  v27 = 0;
  switch ( v26 )
  {
    case 0:
      goto LABEL_25;
    case 1:
      LODWORD(v22) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v55,
                       &v56);
      v43 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v58[17] = *(_DWORD *)(v43 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v43, v40, v41, v42);
        *(_QWORD *)(v44 + 24) = 1515LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v24 = v55;
      goto LABEL_29;
    case 16:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v37 + 24) = 1538LL;
        WdLogEvent5_WdAssertion(v37);
      }
      goto LABEL_25;
    case 17:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v55,
                  &v56);
      v24 = v55;
      LODWORD(v22) = updated;
      if ( v55 && !*(_DWORD *)a2 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        *(_QWORD *)(v35 + 24) = 1528LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = *((_QWORD *)this + 33);
      goto LABEL_28;
  }
  if ( v26 > 271 && v26 <= 273 )
  {
LABEL_25:
    v38 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v38 + 16) == 1 )
    {
      v27 = 1;
      v39 = *(_QWORD *)(v38 + 8);
      *(_QWORD *)(v38 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v39;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v22) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v56);
    *((_DWORD *)this + 71) = 1;
    v36 = *((_QWORD *)this + 34);
LABEL_28:
    v58[17] = *(_DWORD *)(*(_QWORD *)(v36 + 8) + 4LL);
    goto LABEL_29;
  }
  v28 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
  *(_QWORD *)(v28 + 24) = (unsigned int)v26;
  WdLogEvent5_WdAssertion(v28);
  LODWORD(v22) = -1073741595;
LABEL_29:
  if ( v23 )
  {
    if ( !v24 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v45 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v45, *(_QWORD *)(v45 + 144), 0LL, *((unsigned int *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((unsigned int *)a2 + 4));
      v4 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v58[15] = v22;
    v58[16] = v23;
    v47 = *((_QWORD *)this + 33);
    v58[19] = v58[19] & 0xFFFFFE3F | ((v56 & 1 | (2 * (v24 & 1 | (2 * (v27 & 1))))) << 6);
    v48 = *((_DWORD *)this + 78) & 1 | (16 * (v4 & 1));
    v49 = (LOBYTE(v58[19]) ^ (unsigned __int8)*(_DWORD *)(v47 + 16)) & 3 ^ v58[19];
    v50 = *((_QWORD *)this + 34);
    v58[19] = v49;
    v58[19] = v49 & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v50 + 16) & 3 | (8 * v48)));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v46, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v58, 1LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v54 = *((_DWORD *)this + 71);
    LODWORD(v53) = *(_DWORD *)a2;
    LODWORD(v52) = *((_DWORD *)this + 11);
    Template_pqqqqqttttttttq(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      v54,
      this,
      v52,
      v53,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v54,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v23,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v24,
      v54,
      v27,
      v4,
      v56,
      v22);
  }
  return (unsigned int)v22;
}
