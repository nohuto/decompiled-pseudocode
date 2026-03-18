/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C01340F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  ULONG64 v12; // rax
  __m128i v13; // xmm2
  void *v14; // xmm0_8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  _BYTE v40[80]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) = 2088;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2088);
  if ( !DXGPROCESS::GetCurrent() )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    LODWORD(v7) = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2088);
    return (unsigned int)v7;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(__m128i *)v12;
  *(_OWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_OWORD *)v12;
  *(__m128i *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v13;
  *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v12 + 16);
  *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
  *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 0;
  v14 = (void *)_mm_srli_si128(v13, 8).m128i_u64[0];
  if ( v14 )
  {
    v15 = ObReferenceObjectByHandle(v14, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)(v3 + 8), 0LL);
    v7 = v15;
    v20 = *(_QWORD **)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v20;
    if ( v15 == -1073741788 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v14;
      LODWORD(v7) = -1073741788;
      *(_QWORD *)(v21 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_6;
    }
    if ( v15 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v22 + 24) = v14;
      *(_QWORD *)(v22 + 32) = v7;
      WdLogEvent5_WdWarning(v22);
LABEL_18:
      v10 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_7;
    }
    v23 = v20[2];
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v24 + 24) = v20;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
    }
    v25 = *(_QWORD *)(v23 + 80);
    if ( v25 )
      goto LABEL_25;
    v26 = *(_QWORD *)(v23 + 72);
    if ( v26 )
      v25 = *(_QWORD *)(v26 + 16);
    if ( v25 )
LABEL_25:
      *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v25 + 252);
    ObfDereferenceObject(v20);
    if ( (int)v7 < 0 )
      goto LABEL_18;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v13);
    if ( !v27 )
    {
      v39 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v39 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v39);
      goto LABEL_18;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)(v3 + 24));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 24));
    Global = DXGGLOBAL::GetGlobal(v28);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v27, 2);
    v34 = ObjectA;
    if ( !ObjectA )
    {
      v35 = WdLogNewEntry5_WdWarning(0LL, v31, v32, v33);
      *(_QWORD *)(v35 + 24) = v27;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 24));
      goto LABEL_18;
    }
    v36 = *(_QWORD *)(ObjectA + 80);
    if ( v36 )
      goto LABEL_35;
    v37 = *(_QWORD *)(v34 + 72);
    if ( v37 )
      v36 = *(_QWORD *)(v37 + 16);
    if ( v36 )
LABEL_35:
      *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v36 + 252);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 24));
  }
  v38 = a1 + 24;
  if ( a1 + 24 > MmUserProbeAddress || v38 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a1 = *(_OWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v38, &EventProfilerExit, v8, 2088);
  return 0LL;
}
