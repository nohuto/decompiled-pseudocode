/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C014DE70 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C014E0B0 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0152300 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001024 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00010A0 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001FBC4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FC98 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C001FD6C (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v24; // rcx
  _QWORD *v25; // rax
  void *v26; // r14
  __int64 v27; // r15
  _QWORD *v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rax
  char *v31; // rdi
  char **v32; // rax
  int v33; // edi
  unsigned int v34; // ecx
  __int64 v35; // r8
  unsigned int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
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
  int v52; // [rsp+E0h] [rbp+18h]

  v52 = a3;
  v9 = (unsigned int)a1;
  v10 = a5;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 3005LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *v10 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
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
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v19 = 128LL;
    goto LABEL_43;
  }
  if ( DXGKEYEDMUTEX::IsOwner(v17, v9)
    || *((_DWORD *)v17 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v17 + 9)) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    LODWORD(v19) = -1073741811;
    v25[3] = -1073741811LL;
    v25[4] = v17;
    v25[5] = v9;
    WdLogEvent5_WdError(v25);
    goto LABEL_45;
  }
  v26 = a6;
  if ( a6 )
  {
    v27 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v20, v22, v23);
      v19 = -1073741811LL;
LABEL_43:
      v28[3] = v17;
      v28[4] = v19;
      goto LABEL_44;
    }
    if ( (_DWORD)Size != *((_DWORD *)v17 + 36) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v20, v22, v23);
      v28[3] = v17;
      v28[4] = v27;
      v28[5] = *((unsigned int *)v17 + 36);
      LODWORD(v19) = -1073741811;
      v28[6] = -1073741811LL;
      goto LABEL_44;
    }
  }
  else
  {
    LODWORD(v27) = Size;
    if ( (_DWORD)Size )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v20, v22, v23);
      LODWORD(v19) = -1073741811;
      v28[3] = -1073741811LL;
LABEL_44:
      WdLogEvent5_WdWarning(v28);
      goto LABEL_45;
    }
  }
  v29 = *((_DWORD *)v17 + 9);
  if ( (v29 & 0xFFFFFFFD) == 0 || v29 == 1 && a2 != *((_QWORD *)v17 + 7) && !v52 )
  {
    memset(v51, 0, sizeof(v51));
    *(_DWORD *)&v51[8] = v9;
    *(_QWORD *)&v51[16] = DXGPROCESS::GetCurrent(v24);
    *(_QWORD *)v51 = a2;
    *(_DWORD *)&v51[48] = 0;
    KeInitializeEvent((PRKEVENT)&v51[24], NotificationEvent, 0);
    v31 = (char *)v17 + 80;
    v32 = (char **)*((_QWORD *)v31 + 1);
    *(_QWORD *)&v51[64] = v31;
    *(_QWORD *)&v51[72] = v32;
    if ( *v32 != v31 )
      __fastfail(3u);
    *v32 = &v51[64];
    *((_QWORD *)v31 + 1) = &v51[64];
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50);
    LODWORD(v19) = KeWaitForSingleObject(&v51[24], Executive, 0, 1u, a4);
    v33 = *(_DWORD *)&v51[48];
    if ( *(_DWORD *)&v51[48] )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
      LODWORD(v19) = v33;
      goto LABEL_46;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
    v34 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v34 < *((_DWORD *)Current + 58)
      && (v35 = *((_QWORD *)Current + 27),
          v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
          (unsigned int)v9 >> 30 == ((v36 >> 4) & 3))
      && (v36 & 0x1000) == 0
      && (v36 & 0xF) != 0
      && (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0xF) == 9 )
    {
      v17 = *(DXGKEYEDMUTEX **)(v35 + 16LL * v34);
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
      v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v41 + 24) = 3111LL;
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
        v30 = *(_QWORD *)&v51[56];
        goto LABEL_48;
      }
      goto LABEL_42;
    }
LABEL_45:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
    goto LABEL_46;
  }
  v30 = *((_QWORD *)v17 + 8);
LABEL_48:
  *v10 = v30;
  v45 = a8;
  if ( a8 )
    *a8 = *((_QWORD *)v17 + 7);
  if ( (unsigned int)(*((_DWORD *)v17 + 9) - 1) > 1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45, v20, v22, v23);
    *(_QWORD *)(v46 + 24) = 3168LL;
    WdLogEvent5_WdAssertion(v46);
  }
  *((_DWORD *)v17 + 9) = 0;
  *((_DWORD *)v17 + 10) = v9;
  *((_QWORD *)v17 + 6) = DXGPROCESS::GetCurrent((__int64)v45);
  *((_QWORD *)v17 + 9) = 0LL;
  if ( v26 )
  {
    v47 = (const void *)*((_QWORD *)v17 + 17);
    v48 = (ULONG64)v26 + (unsigned int)v27;
    if ( v48 > MmUserProbeAddress || v48 <= (unsigned __int64)v26 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v47, (unsigned int)v27);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)&a5);
  return 0LL;
}
