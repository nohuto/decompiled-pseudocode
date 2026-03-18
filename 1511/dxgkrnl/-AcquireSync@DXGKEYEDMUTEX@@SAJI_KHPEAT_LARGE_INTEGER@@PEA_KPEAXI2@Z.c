/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C015098C
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C0151BA0 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C0151DE0 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01565A0 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001040 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00010BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001F934 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FA08 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C001FA68 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v9; // rsi
  unsigned __int64 *v10; // r12
  __int64 v11; // rax
  struct DXGPROCESS *Current; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  void *v29; // r14
  __int64 v30; // r15
  _QWORD *v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rax
  char *v34; // rdi
  char **v35; // rax
  int v36; // edi
  unsigned int v37; // ecx
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 *v45; // rcx
  __int64 v46; // rax
  const void *v47; // rdx
  ULONG64 v48; // r10
  DXGKEYEDMUTEX *v49; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v50[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v51[80]; // [rsp+50h] [rbp-78h] BYREF

  v9 = (unsigned int)a1;
  v10 = a5;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 2956LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *v10 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v49);
  v17 = v49;
  if ( !v49 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = v9;
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_46:
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)&a5);
    return (unsigned int)v19;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v50, v49, v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
  if ( *((_DWORD *)v17 + 9) == 3 )
  {
LABEL_42:
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v19 = 128LL;
    goto LABEL_43;
  }
  if ( DXGKEYEDMUTEX::IsOwner(v17, v9)
    || *((_DWORD *)v17 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v17 + 9)) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v19) = -1073741811;
    v28[3] = -1073741811LL;
    v28[4] = v17;
    v28[5] = v9;
    WdLogEvent5_WdError(v28);
    goto LABEL_45;
  }
  v29 = a6;
  if ( a6 )
  {
    v30 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      v19 = -1073741811LL;
LABEL_43:
      v31[3] = v17;
      v31[4] = v19;
      goto LABEL_44;
    }
    if ( (_DWORD)Size != *((_DWORD *)v17 + 42) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      v31[3] = v17;
      v31[4] = v30;
      v31[5] = *((unsigned int *)v17 + 42);
      LODWORD(v19) = -1073741811;
      v31[6] = -1073741811LL;
      goto LABEL_44;
    }
  }
  else
  {
    LODWORD(v30) = Size;
    if ( (_DWORD)Size )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      LODWORD(v19) = -1073741811;
      v31[3] = -1073741811LL;
LABEL_44:
      WdLogEvent5_WdWarning(v31);
      goto LABEL_45;
    }
  }
  v32 = *((_DWORD *)v17 + 9);
  if ( (v32 & 0xFFFFFFFD) == 0 || v32 == 1 && a2 != *((_QWORD *)v17 + 7) && !a3 )
  {
    memset(v51, 0, sizeof(v51));
    *(_DWORD *)&v51[8] = v9;
    *(_QWORD *)&v51[16] = DXGPROCESS::GetCurrent();
    *(_QWORD *)v51 = a2;
    *(_DWORD *)&v51[48] = 0;
    KeInitializeEvent((PRKEVENT)&v51[24], NotificationEvent, 0);
    v34 = (char *)v17 + 80;
    v35 = (char **)*((_QWORD *)v34 + 1);
    *(_QWORD *)&v51[64] = v34;
    *(_QWORD *)&v51[72] = v35;
    if ( *v35 != v34 )
      __fastfail(3u);
    *v35 = &v51[64];
    *((_QWORD *)v34 + 1) = &v51[64];
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50);
    LODWORD(v19) = KeWaitForSingleObject(&v51[24], Executive, 0, 1u, a4);
    v36 = *(_DWORD *)&v51[48];
    if ( *(_DWORD *)&v51[48] )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
      LODWORD(v19) = v36;
      goto LABEL_46;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
    v37 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v37 < *((_DWORD *)Current + 58)
      && (v38 = *((_QWORD *)Current + 27),
          v39 = *(_DWORD *)(v38 + 16LL * v37 + 8),
          (unsigned int)v9 >> 30 == ((v39 >> 4) & 3))
      && (v39 & 0x1000) == 0
      && (v39 & 0xF) != 0
      && (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0xF) == 9 )
    {
      v17 = *(DXGKEYEDMUTEX **)(v38 + 16LL * v37);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
    KeLeaveCriticalRegion();
    v49 = v17;
    if ( !v17 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v41 + 24) = 3062LL;
      WdLogEvent5_WdAssertion(v41);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
    v42 = *(_QWORD *)&v51[72];
    v21 = *(_BYTE **)&v51[64];
    if ( *(_BYTE **)(*(_QWORD *)&v51[64] + 8LL) != &v51[64] || (v20 = &v51[64], **(_BYTE ***)&v51[72] != &v51[64]) )
      __fastfail(3u);
    **(_QWORD **)&v51[72] = *(_QWORD *)&v51[64];
    *((_QWORD *)v21 + 1) = v42;
    v43 = *((_DWORD *)v17 + 9);
    if ( v43 == 2 )
    {
      v21 = v51;
      if ( *((_BYTE **)v17 + 9) == v51 )
        LODWORD(v19) = 0;
    }
    if ( !(_DWORD)v19 )
    {
      if ( v43 != 3 )
      {
        v33 = *(_QWORD *)&v51[56];
        goto LABEL_48;
      }
      goto LABEL_42;
    }
LABEL_45:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
    goto LABEL_46;
  }
  v33 = *((_QWORD *)v17 + 8);
LABEL_48:
  *v10 = v33;
  v45 = a8;
  if ( a8 )
    *a8 = *((_QWORD *)v17 + 7);
  if ( (unsigned int)(*((_DWORD *)v17 + 9) - 1) > 1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45);
    *(_QWORD *)(v46 + 24) = 3119LL;
    WdLogEvent5_WdAssertion(v46);
  }
  *((_DWORD *)v17 + 9) = 0;
  *((_DWORD *)v17 + 10) = v9;
  *((_QWORD *)v17 + 6) = DXGPROCESS::GetCurrent();
  *((_QWORD *)v17 + 9) = 0LL;
  if ( v29 )
  {
    v47 = (const void *)*((_QWORD *)v17 + 20);
    v48 = (ULONG64)v29 + (unsigned int)v30;
    if ( v48 > MmUserProbeAddress || v48 <= (unsigned __int64)v29 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v29, v47, (unsigned int)v30);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)&a5);
  return 0LL;
}
