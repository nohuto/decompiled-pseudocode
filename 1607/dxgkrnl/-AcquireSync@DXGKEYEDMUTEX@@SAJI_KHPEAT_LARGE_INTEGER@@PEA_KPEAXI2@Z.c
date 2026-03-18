/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40
 * Callers:
 *     DxgkAcquireKeyedMutex2 @ 0x1C006FBA0 (DxgkAcquireKeyedMutex2.c)
 *     DxgkAcquireKeyedMutex @ 0x1C0176C80 (DxgkAcquireKeyedMutex.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017B080 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C000102C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C00010EC (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001104 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0001190 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C002648C (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8)
{
  __int64 v10; // rsi
  unsigned __int64 *v11; // r12
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DXGKEYEDMUTEX *v19; // rdi
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  void *v27; // r15
  __int64 v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  const void *v34; // rdx
  ULONG64 v35; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  DXGKEYEDMUTEX **v44; // rdx
  int v45; // r13d
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  DXGKEYEDMUTEX *v49; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v50[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v51[80]; // [rsp+50h] [rbp-78h] BYREF

  v10 = (unsigned int)a1;
  v11 = a5;
  if ( !a5 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v37 + 24) = 3118LL;
    WdLogEvent5_WdAssertion(v37);
  }
  *v11 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v13);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v10, ProcessDxgProcess, &v49);
  v19 = v49;
  if ( !v49 )
  {
    v38 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v38 + 24) = v10;
    LODWORD(v39) = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
LABEL_49:
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)&a5);
    return (unsigned int)v39;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v50, v49, v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
  if ( *((_DWORD *)v19 + 9) == 3 )
  {
LABEL_45:
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v39 = 128LL;
    goto LABEL_46;
  }
  if ( DXGKEYEDMUTEX::IsOwner(v19, v10)
    || *((_DWORD *)v19 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v10, *((struct DXGPROCESS ***)v19 + 9)) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v39) = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = v19;
    v40[5] = v10;
    WdLogEvent5_WdError(v40);
    goto LABEL_48;
  }
  v27 = a6;
  if ( !a6 )
  {
    LODWORD(v28) = Size;
    if ( !(_DWORD)Size )
      goto LABEL_10;
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, 0LL, v26);
    LODWORD(v39) = -1073741811;
    v41[3] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v41);
    goto LABEL_48;
  }
  v28 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, 0LL, v26);
    v39 = -1073741811LL;
LABEL_46:
    v41[3] = v19;
    v41[4] = v39;
    goto LABEL_47;
  }
  if ( (_DWORD)Size != *((_DWORD *)v19 + 36) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, 0LL, v26);
    v41[3] = v19;
    v41[4] = v28;
    v41[5] = *((unsigned int *)v19 + 36);
    LODWORD(v39) = -1073741811;
    v41[6] = -1073741811LL;
    goto LABEL_47;
  }
LABEL_10:
  v29 = *((_DWORD *)v19 + 9);
  if ( (v29 & 0xFFFFFFFD) == 0 || v29 == 1 && a2 != *((_QWORD *)v19 + 7) && !a3 )
  {
    memset(v51, 0, sizeof(v51));
    *(_DWORD *)&v51[8] = v10;
    v42 = PsGetCurrentProcess();
    *(_QWORD *)&v51[16] = PsGetProcessDxgProcess(v42, v43);
    *(_QWORD *)v51 = a2;
    *(_DWORD *)&v51[48] = 0;
    KeInitializeEvent((PRKEVENT)&v51[24], NotificationEvent, 0);
    v44 = (DXGKEYEDMUTEX **)*((_QWORD *)v19 + 11);
    if ( *v44 != (DXGKEYEDMUTEX *)((char *)v19 + 80) )
      __fastfail(3u);
    *(_QWORD *)&v51[64] = (char *)v19 + 80;
    *(_QWORD *)&v51[72] = v44;
    *v44 = (DXGKEYEDMUTEX *)&v51[64];
    *((_QWORD *)v19 + 11) = &v51[64];
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50);
    LODWORD(v39) = KeWaitForSingleObject(&v51[24], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
    v45 = *(_DWORD *)&v51[48];
    v22 = 0LL;
    if ( *(_DWORD *)&v51[48] )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
      LODWORD(v39) = v45;
      goto LABEL_49;
    }
    v46 = *(_QWORD *)&v51[72];
    v21 = *(_BYTE **)&v51[64];
    if ( *(_BYTE **)(*(_QWORD *)&v51[64] + 8LL) != &v51[64] || (v20 = &v51[64], **(_BYTE ***)&v51[72] != &v51[64]) )
      __fastfail(3u);
    **(_QWORD **)&v51[72] = *(_QWORD *)&v51[64];
    *((_QWORD *)v21 + 1) = v46;
    v47 = *((_DWORD *)v19 + 9);
    if ( v47 == 2 )
    {
      v21 = v51;
      if ( *((_BYTE **)v19 + 9) == v51 )
        LODWORD(v39) = 0;
    }
    if ( !(_DWORD)v39 )
    {
      if ( v47 != 3 )
      {
        v30 = *(_QWORD *)&v51[56];
        goto LABEL_14;
      }
      goto LABEL_45;
    }
LABEL_48:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
    goto LABEL_49;
  }
  v30 = *((_QWORD *)v19 + 8);
LABEL_14:
  *v11 = v30;
  v31 = a8;
  if ( a8 )
    *a8 = *((_QWORD *)v19 + 7);
  if ( (unsigned int)(*((_DWORD *)v19 + 9) - 1) > 1 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v48 + 24) = 3276LL;
    WdLogEvent5_WdAssertion(v48);
  }
  *((_DWORD *)v19 + 9) = 0;
  *((_DWORD *)v19 + 10) = v10;
  v32 = PsGetCurrentProcess();
  *((_QWORD *)v19 + 6) = PsGetProcessDxgProcess(v32, v33);
  *((_QWORD *)v19 + 9) = 0LL;
  if ( v27 )
  {
    v34 = (const void *)*((_QWORD *)v19 + 17);
    v35 = (ULONG64)v27 + (unsigned int)v28;
    if ( v35 > MmUserProbeAddress || v35 <= (unsigned __int64)v27 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v34, (unsigned int)v28);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)&a5);
  return 0LL;
}
