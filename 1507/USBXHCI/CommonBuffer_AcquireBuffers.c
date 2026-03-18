/*
 * XREFs of CommonBuffer_AcquireBuffers @ 0x1C00058A4
 * Callers:
 *     TR_EnsureSegments @ 0x1C00204A4 (TR_EnsureSegments.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C00059A0 (CommonBuffer_AcquireLargeBuffers.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C0013D00 (CommonBuffer_AcquireSmallBuffers.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0013EC0 (CommonBuffer_QueueWorkItem.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffers(
        _QWORD *Context,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v10; // r14d
  int v11; // ebx
  int v12; // r8d
  int v15; // r14d
  int v16; // r8d
  _QWORD *v17; // rsi
  KIRQL v18; // al
  PVOID *v19; // rdx
  KSPIN_LOCK *v20; // r14
  char v21; // bp
  KIRQL v22; // al
  _QWORD **v23; // rdi
  KIRQL v24; // dl
  _QWORD *j; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  KIRQL v29; // al
  PVOID *v30; // rdx
  KIRQL v31; // al
  _QWORD **v32; // rdi
  _QWORD *i; // rcx
  char v35; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 > 0x200 )
  {
    if ( a3 > 0x1000 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(Context[1] + 64LL),
        3u,
        7u,
        0x23u,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        a3);
      return (unsigned int)-1073741811;
    }
    v10 = a6;
    v11 = CommonBuffer_AcquireLargeBuffers((_DWORD)Context, a2, a4, a5, a6, (__int64)&v35);
    if ( v11 >= 0 && !v35 )
      return (unsigned int)v11;
    if ( !KeGetCurrentIrql() )
    {
      v12 = 0;
      if ( v11 < 0 )
        v12 = a2;
      if ( v35 )
        v12 += *((_DWORD *)Context + 12);
      CommonBuffer_AllocateBuffers(
        (_DWORD)Context,
        4096,
        v12,
        (_DWORD)Context + 128,
        (__int64)(Context + 14),
        (__int64)Context + 116,
        (__int64)(Context + 18));
      if ( v11 < 0 )
        return (unsigned int)CommonBuffer_AcquireLargeBuffers((_DWORD)Context, a2, a4, a5, v10, (__int64)&v35);
      return (unsigned int)v11;
    }
    v28 = a7;
    if ( v11 < 0 && a7 )
    {
      v11 = 259;
      v29 = KeAcquireSpinLockRaiseToDpc(Context + 15);
      v30 = (PVOID *)Context[28];
      *v28 = Context + 27;
      v28[1] = v30;
      if ( *v30 != Context + 27 )
        __fastfail(3u);
      *v30 = v28;
      Context[28] = v28;
      KeReleaseSpinLock(Context + 15, v29);
    }
    if ( (unsigned __int8)CommonBuffer_QueueWorkItem(Context) || !v28 )
      return (unsigned int)v11;
    v20 = Context + 15;
    v21 = 0;
    v31 = KeAcquireSpinLockRaiseToDpc(Context + 15);
    v32 = (_QWORD **)(Context + 27);
    v24 = v31;
    for ( i = *v32; v32 != i; i = (_QWORD *)*i )
    {
      if ( i == v28 )
      {
        v26 = *v28;
        v27 = (_QWORD *)v28[1];
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v27 != v28 )
          __fastfail(3u);
        goto LABEL_54;
      }
    }
LABEL_33:
    KeReleaseSpinLock(v20, v24);
    if ( v21 )
      return (unsigned int)-1073741670;
    return (unsigned int)v11;
  }
  v15 = a6;
  v11 = CommonBuffer_AcquireSmallBuffers((_DWORD)Context, a2, a4, a5, a6, (__int64)&v35);
  if ( v11 >= 0 && !v35 )
    return (unsigned int)v11;
  if ( KeGetCurrentIrql() )
  {
    v17 = a7;
    if ( v11 < 0 && a7 )
    {
      v11 = 259;
      v18 = KeAcquireSpinLockRaiseToDpc(Context + 15);
      v19 = (PVOID *)Context[28];
      *v17 = Context + 27;
      v17[1] = v19;
      if ( *v19 != Context + 27 )
        __fastfail(3u);
      *v19 = v17;
      Context[28] = v17;
      KeReleaseSpinLock(Context + 15, v18);
    }
    if ( (unsigned __int8)CommonBuffer_QueueWorkItem(Context) || !v17 )
      return (unsigned int)v11;
    v20 = Context + 15;
    v21 = 0;
    v22 = KeAcquireSpinLockRaiseToDpc(Context + 15);
    v23 = (_QWORD **)(Context + 27);
    v24 = v22;
    for ( j = *v23; v23 != j; j = (_QWORD *)*j )
    {
      if ( j == v17 )
      {
        v26 = *v17;
        v27 = (_QWORD *)v17[1];
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v27 != v17 )
          __fastfail(3u);
LABEL_54:
        *v27 = v26;
        v21 = 1;
        *(_QWORD *)(v26 + 8) = v27;
        goto LABEL_33;
      }
    }
    goto LABEL_33;
  }
  v16 = 0;
  if ( v11 < 0 )
    v16 = a2;
  if ( v35 )
    v16 += *((_DWORD *)Context + 16);
  CommonBuffer_AllocateBuffers(
    (_DWORD)Context,
    512,
    v16,
    (_DWORD)Context + 168,
    (__int64)(Context + 20),
    (__int64)Context + 164,
    (__int64)(Context + 23));
  if ( v11 < 0 )
    return (unsigned int)CommonBuffer_AcquireSmallBuffers((_DWORD)Context, a2, a4, a5, v15, (__int64)&v35);
  return (unsigned int)v11;
}
