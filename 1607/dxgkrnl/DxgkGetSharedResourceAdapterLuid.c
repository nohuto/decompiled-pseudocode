/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C01534D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  ULONG64 v14; // rax
  __m128i v15; // xmm2
  void *v16; // xmm0_8
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  _BYTE v42[80]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) = 2088;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2088);
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !PsGetProcessDxgProcess(CurrentProcess, v6) )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    v11 = qword_1C0056840;
    v12 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2088);
    return (unsigned int)v9;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v15 = *(__m128i *)v14;
  *(_OWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_OWORD *)v14;
  *(__m128i *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v15;
  *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v14 + 16);
  *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
  *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 0;
  v16 = (void *)_mm_srli_si128(v15, 8).m128i_u64[0];
  if ( v16 )
  {
    v17 = ObReferenceObjectByHandle(v16, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)(v3 + 8), 0LL);
    v9 = v17;
    v22 = *(_QWORD **)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v22;
    if ( v17 == -1073741788 )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = v16;
      LODWORD(v9) = -1073741788;
      *(_QWORD *)(v23 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_6;
    }
    if ( v17 < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = v9;
      WdLogEvent5_WdWarning(v24);
LABEL_18:
      v12 = (qword_1C0056840 & 2) == 0;
      goto LABEL_7;
    }
    v25 = v22[2];
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v26 + 24) = v22;
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
    }
    v27 = *(_QWORD *)(v25 + 88);
    if ( v27 )
      goto LABEL_25;
    v28 = *(_QWORD *)(v25 + 72);
    if ( v28 )
      v27 = *(_QWORD *)(v28 + 16);
    if ( v27 )
LABEL_25:
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v27 + 268);
    ObfDereferenceObject(v22);
    if ( (int)v9 < 0 )
      goto LABEL_18;
  }
  else
  {
    v29 = _mm_cvtsi128_si32(v15);
    if ( !v29 )
    {
      v41 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v41 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v41);
      goto LABEL_18;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)(v3 + 24));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 24));
    Global = DXGGLOBAL::GetGlobal(v30);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v29, 2);
    v36 = ObjectA;
    if ( !ObjectA )
    {
      v37 = WdLogNewEntry5_WdWarning(0LL, v33, v34, v35);
      *(_QWORD *)(v37 + 24) = v29;
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v37 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v37);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 24));
      goto LABEL_18;
    }
    v38 = *(_QWORD *)(ObjectA + 88);
    if ( v38 )
      goto LABEL_35;
    v39 = *(_QWORD *)(v36 + 72);
    if ( v39 )
      v38 = *(_QWORD *)(v39 + 16);
    if ( v38 )
LABEL_35:
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v38 + 268);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 24));
  }
  v40 = a1 + 24;
  if ( a1 + 24 > MmUserProbeAddress || v40 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a1 = *(_OWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v40, &EventProfilerExit, v10, 2088);
  return 0LL;
}
