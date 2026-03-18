/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005B4BC
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005B000 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C005B63C (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v9; // rbx
  __int64 **v10; // rdi
  __int64 **v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const unsigned int *v14; // r14
  __int64 *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  char *v19; // r14
  char *i; // rdi
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26[4]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  char v28; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+B8h] [rbp-50h]

  LODWORD(v9) = -1073741823;
  if ( !a5 )
  {
    v19 = (char *)this + 288;
    for ( i = (char *)*((_QWORD *)this + 36); i != v19 && i; i = *(char **)i )
    {
      v21 = *((_DWORD *)i + 6);
      v26[0] = a3;
      v22 = WaitForSynchronizationObjectFromGpu(1u, v26, 0LL, a4, v21, a2, 1, 0);
      v9 = v22;
      if ( v22 < 0 )
      {
        v25 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v25 + 24) = this;
        *(_QWORD *)(v25 + 32) = v9;
        WdLogEvent5_WdEvent(v25);
        return (unsigned int)v9;
      }
    }
    return (unsigned int)v9;
  }
  v10 = (__int64 **)((char *)this + 288);
  v26[0] = a3;
  v11 = (__int64 **)*((_QWORD *)this + 36);
  v12 = 0;
  while ( v11 != v10 && v11 )
  {
    v11 = (__int64 **)*v11;
    ++v12;
  }
  P = 0LL;
  v29 = 0;
  v14 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
  if ( v14 )
  {
    v15 = *v10;
    v16 = 0LL;
    while ( v15 != (__int64 *)v10 && v15 )
    {
      v14[v16] = *((_DWORD *)v15 + 6);
      v16 = (unsigned int)(v16 + 1);
      v15 = (__int64 *)*v15;
    }
    if ( v12 != (_DWORD)v16 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v23 + 24) = 4884LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v17 = SignalSynchronizationObjectInternal(1u, v26, 0, v12, v14, 0LL, a4, 0LL, a2, 0, 1);
    v9 = v17;
    if ( v17 < 0 )
    {
      v24 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = v9;
      WdLogEvent5_WdEvent(v24);
    }
    if ( P != &v28 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v9;
  }
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
  return 3221225495LL;
}
