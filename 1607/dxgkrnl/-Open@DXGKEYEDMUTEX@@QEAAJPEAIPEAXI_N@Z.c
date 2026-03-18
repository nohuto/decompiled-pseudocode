/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C01763A8
 * Callers:
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C006F948 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0001190 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *Current; // r13
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  PVOID v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rt0
  char v28; // of
  __int64 v29; // rax
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r8d
  _BYTE v37[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v38[32]; // [rsp+40h] [rbp-38h] BYREF

  v4 = a4;
  Current = (unsigned int *)DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v14);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v37, this, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( !(_DWORD)v4 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v20 = *((_DWORD *)this + 36);
  if ( v20 )
  {
    if ( v20 == (_DWORD)v4 )
      goto LABEL_22;
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v25[3] = this;
    v25[4] = v4;
    v25[5] = *((unsigned int *)this + 36);
    v25[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v25);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v25[3] = this;
    v25[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v21 + 24) = 2890LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v23 = operator new[](v4, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 17) = v23;
  if ( !v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
    v24[3] = this;
    v24[4] = v4;
    v24[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    return 3221225495LL;
  }
  *((_DWORD *)this + 36) = v4;
  if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v23, a3, v4);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  v27 = _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
  if ( (v27 < 0) ^ v28 | (v27 == 0) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v29 + 24) = 540LL;
    WdLogEvent5_WdAssertion(v29);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v38,
    (struct DXGPROCESS *)Current);
  v30 = Current + 52;
  v31 = HMGRTABLE::AllocHandle(Current + 52, (__int64)this, 9, 0, 0);
  v33 = v31;
  *a2 = v31;
  if ( !v31 )
  {
    v34 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    DXGKEYEDMUTEX::ReleaseReference(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    return 3221225495LL;
  }
  v35 = (v31 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < Current[56] )
  {
    v36 = *(_DWORD *)(*v30 + 16 * v35 + 8);
    if ( ((v33 >> 26) & 0x30) == (*(_BYTE *)(*v30 + 16 * v35 + 8) & 0x30) && (v36 & 0x1000) == 0 && (v36 & 0xF) != 0 )
      *(_DWORD *)(*v30 + 16 * (((unsigned __int64)v33 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  return 0LL;
}
