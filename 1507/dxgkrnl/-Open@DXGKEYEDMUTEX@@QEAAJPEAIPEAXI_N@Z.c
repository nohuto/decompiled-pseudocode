/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005B524 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C014CEDC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00010A0 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rt0
  char v31; // of
  __int64 v32; // rax
  _QWORD *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r8d
  _BYTE v40[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v41[32]; // [rsp+40h] [rbp-38h] BYREF

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
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v40, this, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
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
    v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = 2775LL;
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
    return 3221225495LL;
  }
  *((_DWORD *)this + 36) = v4;
  if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v23, a3, v4);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
  v30 = _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
  if ( (v30 < 0) ^ v31 | (v30 == 0) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v32 + 24) = 540LL;
    WdLogEvent5_WdAssertion(v32);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
    (struct DXGPROCESS *)Current);
  v33 = Current + 54;
  v34 = HMGRTABLE::AllocHandle(Current + 54, (__int64)this, 9LL, 0LL, 0);
  v36 = v34;
  *a2 = v34;
  if ( !v34 )
  {
    v37 = WdLogNewEntry5_WdLowResource(v35);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v37);
    DXGKEYEDMUTEX::ReleaseReference(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
    return 3221225495LL;
  }
  v38 = (v34 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v38 < Current[58] )
  {
    v39 = *(_DWORD *)(*v33 + 16 * v38 + 8);
    if ( ((v36 >> 26) & 0x30) == (*(_BYTE *)(*v33 + 16 * v38 + 8) & 0x30) && (v39 & 0x1000) == 0 && (v39 & 0xF) != 0 )
      *(_DWORD *)(*v33 + 16 * (((unsigned __int64)v36 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
  return 0LL;
}
