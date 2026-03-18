/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  __int64 *v1; // r12
  _QWORD *v2; // r15
  unsigned int v3; // esi
  int v5; // r14d
  ULONG_PTR v6; // rbx
  __int64 v7; // r13
  int v8; // edi
  __int64 *v9; // rbx
  KIRQL v10; // dl
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdx
  char v15; // al
  __int64 *v16; // rcx
  __int64 v17; // rdx
  signed __int32 v18; // ecx
  KIRQL v19; // di
  int v20; // edx
  int v22; // edi
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  _QWORD *v25; // rdi
  unsigned int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // dl
  const char *v30; // r8
  const char *v31; // rcx
  __int64 v32; // rax
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  int v35; // edi
  unsigned __int64 v36; // rax
  _QWORD v37[10]; // [rsp+50h] [rbp-78h] BYREF

  v1 = qword_1C002C340;
  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v29 = 0;
    v30 = (const char *)qword_1C002C340;
    v31 = (const char *)qword_1C002C340;
    if ( v2 )
    {
      v32 = v2[1];
      v29 = (char)v2;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = (const char *)v2[70];
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = (const char *)v2[71];
      }
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x3Eu,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      v29,
      v30,
      v31);
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v9 = (__int64 *)v2[89];
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = *v9;
  v12 = *(__int64 **)(*v9 + 24);
  v13 = (__int64 *)(v11 + 24);
  if ( v13 == v12 )
  {
LABEL_5:
    v12 = 0LL;
  }
  else
  {
    while ( v8 != *((_DWORD *)v12 + 10) )
    {
      v12 = (__int64 *)*v12;
      if ( v13 == v12 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (ULONG_PTR)(v12 + 15);
  AMLIReferenceHandleEx(v6);
  if ( !v6 )
    goto LABEL_8;
  v22 = *(_DWORD *)(a1 + 84);
  if ( (v22 & 2) != 0 )
  {
    _m_prefetchw(v2 + 1);
    v23 = v2[1];
    v14 = 0x20000000000000LL;
    do
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v2 + 1, v23 | 0x20000000000000LL, v23);
    }
    while ( v24 != v23 );
    if ( (v23 & 0x20000000000000LL) != 0 )
      goto LABEL_8;
  }
  else
  {
    if ( (v22 & 8) != 0 )
    {
      if ( !*((_DWORD *)v2 + 126) )
        goto LABEL_8;
      memset(v37, 0, 0x28uLL);
      v14 = 1LL;
      v25 = v37;
      v37[2] = 1LL;
      v26 = 1;
      WORD1(v37[0]) = 1;
      goto LABEL_27;
    }
    if ( (v22 & 0x30) != 0 )
    {
      v35 = v22 | 0x40;
      *(_DWORD *)(a1 + 84) = v35;
      memset(v37, 0, sizeof(v37));
      v37[2] = 2LL;
      WORD1(v37[0]) = 1;
      v26 = 2;
      WORD1(v37[5]) = 1;
      v36 = (unsigned __int8)v35;
      v25 = v37;
      v37[7] = (v36 >> 4) & 1;
      goto LABEL_27;
    }
    if ( (v22 & 0x80u) != 0 )
    {
      _m_prefetchw(v2 + 114);
      v33 = v2[114];
      do
      {
        v34 = v33;
        v33 = _InterlockedCompareExchange64(v2 + 114, v33 | 0x4000, v33);
      }
      while ( v34 != v33 );
      if ( (v33 & 0x4000) != 0 )
        goto LABEL_8;
      v7 = a1 + 88;
      memset((void *)(a1 + 88), 0, 0x28uLL);
      *(_DWORD *)(a1 + 32) = 8;
    }
  }
  v25 = 0LL;
  v26 = 0;
LABEL_27:
  v27 = *(_QWORD *)(a1 + 56);
  if ( v27 )
  {
    AMLIDereferenceHandleEx(v27, v14);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v6;
  AMLIReferenceHandleEx(v6);
  v5 = AMLIAsyncEvalObject(v28, v7, v26, v25, ACPIBuildCompleteMustSucceed, a1);
LABEL_8:
  v15 = 0;
  v16 = qword_1C002C340;
  if ( v2 )
  {
    v14 = v2[1];
    v15 = (char)v2;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v1 = (__int64 *)v2[70];
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = (__int64 *)v2[71];
    }
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    6,
    63,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v5,
    v15,
    (__int64)v1,
    (__int64)v16);
  if ( v5 == 259 )
  {
    v5 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v6 )
          v3 = *(_DWORD *)(*(_QWORD *)v6 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, v6, v5, v3);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v18, 1);
      v19 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v20 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v20;
      if ( (v20 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v20 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v19);
    }
  }
  if ( v6 )
    AMLIDereferenceHandleEx(v6, v17);
  return (unsigned int)v5;
}
