/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 * Callees:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000746C (ExFreeToNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00589F8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x1C0058E80 (WPP_RECORDER_SF_LsLLqss.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rdi
  char v8; // r11
  __int64 *v9; // rcx
  __int64 *v10; // r10
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *v13; // rdx
  KIRQL v14; // r8
  void **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  char v18; // r11
  __int64 *v19; // r10
  __int64 v20; // rax
  char v21; // r9
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  const char *v25; // rax
  int v26; // eax
  char v27; // cl
  int v28; // edx
  unsigned int v29; // ebx
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-A8h]
  char v34; // [rsp+28h] [rbp-A0h]
  char v35; // [rsp+60h] [rbp-68h]
  __int64 *v36; // [rsp+68h] [rbp-60h]
  _QWORD *v37; // [rsp+70h] [rbp-58h]
  _QWORD v38[10]; // [rsp+78h] [rbp-50h] BYREF
  int v40; // [rsp+D8h] [rbp+10h]
  KIRQL v42; // [rsp+E8h] [rbp+20h]

  v40 = a2;
  v4 = a4[2];
  v5 = qword_1C002C340;
  LOBYTE(v6) = 0;
  v35 = 0;
  v8 = 0;
  v37 = 0LL;
  v9 = qword_1C002C340;
  v10 = qword_1C002C340;
  if ( v4 )
  {
    v11 = *(_QWORD *)(v4 + 8);
    v8 = a4[2];
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = *(__int64 **)(v4 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(__int64 **)(v4 + 568);
    }
  }
  v34 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    17,
    20,
    (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
    v34,
    v8,
    (__int64)v9,
    (__int64)v10);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = (_QWORD *)*a4;
  v14 = v12;
  v15 = (void **)a4[1];
  v42 = v12;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || *v15 != a4 )
    __fastfail(3u);
  *v15 = v13;
  v13[1] = v15;
  if ( v40 < 0 )
  {
    v36 = qword_1C002C340;
    v18 = 0;
    v19 = qword_1C002C340;
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 8);
      v18 = v4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v36 = *(__int64 **)(v4 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(__int64 **)(v4 + 568);
      }
    }
    v21 = *((_BYTE *)a4 + 24);
    v22 = *(_DWORD *)(v4 + 504);
    v23 = *((_DWORD *)a4 + 7);
    if ( v21 )
      v24 = v22 - v23;
    else
      v24 = v23 + v22;
    v25 = "-";
    if ( !v21 )
      v25 = "+";
    WPP_RECORDER_SF_LsLLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v23,
      v24,
      (_DWORD)v36,
      v33,
      v22,
      (__int64)v25,
      v23,
      v24,
      v18,
      (__int64)v36,
      (__int64)v19);
    v5 = qword_1C002C340;
    v26 = *((_DWORD *)a4 + 7);
    v14 = v42;
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 504) -= v26;
    else
      *(_DWORD *)(v4 + 504) += v26;
  }
  v16 = (_QWORD *)(v4 + 512);
  if ( (_QWORD *)*v16 != v16 )
  {
    v37 = (_QWORD *)*v16;
    v35 = 1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v14);
  if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v17) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v17);
  }
  ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)v40, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v35 )
  {
    memset(v38, 0, 0x28uLL);
    WORD1(v38[0]) = 1;
    v27 = *((_BYTE *)v37 + 24);
    v38[2] = v27 != 0;
    if ( (*(_QWORD *)(v4 + 8) & 0x800000000000000LL) != 0 && !v27 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v29 = AMLIAsyncEvalObject(a1, 0LL, 1LL, v38, ACPIWakeEnableDisableAsyncCallBack, v37);
    v30 = qword_1C002C340;
    v31 = v37[2];
    if ( v31 )
    {
      v6 = v37[2];
      v28 = 0;
      v32 = *(_QWORD *)(v31 + 8);
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v5 = *(__int64 **)(v6 + 560);
        if ( (v32 & 0x400000000000LL) != 0 )
          v30 = *(__int64 **)(v6 + 568);
      }
    }
    LOBYTE(v28) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v28,
      17,
      22,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      v29,
      v6,
      (__int64)v5,
      (__int64)v30);
    if ( v29 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v29, 0LL, v37);
  }
}
