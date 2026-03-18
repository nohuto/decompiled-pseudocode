/*
 * XREFs of CommonBuffer_WorkItem @ 0x1C001D830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C0009390 (CommonBuffer_AcquireLargeBuffers.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0009530 (CommonBuffer_AllocateBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C001D2A0 (CommonBuffer_AcquireSmallBuffers.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C001DC2C (WPP_RECORDER_SF_qqd.c)
 */

void __fastcall CommonBuffer_WorkItem(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // ebx
  int v4; // esi
  KIRQL v7; // r9
  __int64 **v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 **v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+20h] [rbp-40h]
  __int64 *v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v23; // [rsp+48h] [rbp-18h]
  _QWORD v24[2]; // [rsp+50h] [rbp-10h] BYREF
  bool v25; // [rsp+98h] [rbp+38h] BYREF

  v3 = 0;
  v4 = 0;
  v23 = &v22;
  v22 = (__int64 *)&v22;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 15);
  v8 = (__int64 **)(Context + 216);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( *((_DWORD *)v9 + 7) > 0x200u )
      v4 += *((_DWORD *)v9 + 6);
    else
      v3 += *((_DWORD *)v9 + 6);
    v11 = v23;
    *v9 = (__int64)&v22;
    v9[1] = (__int64)v11;
    if ( *v11 != (__int64 *)&v22 )
      __fastfail(3u);
    *v11 = v9;
    v23 = (__int64 **)v9;
  }
  if ( *((_DWORD *)Context + 41) < *((_DWORD *)Context + 15) )
    v3 += *((_DWORD *)Context + 16);
  if ( *((_DWORD *)Context + 29) < *((_DWORD *)Context + 11) )
    v4 += *((_DWORD *)Context + 12);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 15, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*((_QWORD *)Context + 1) + 64LL),
      5u,
      7u,
      0x18u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
  if ( v3 )
    CommonBuffer_AllocateBuffers(
      (__int64 *)Context,
      0x200u,
      v3,
      (__int64)(Context + 168),
      (_DWORD *)Context + 40,
      (_DWORD *)Context + 41,
      (__int64)(Context + 184));
  if ( v4 )
    CommonBuffer_AllocateBuffers(
      (__int64 *)Context,
      0x1000u,
      v4,
      (__int64)(Context + 128),
      (_DWORD *)Context + 28,
      (_DWORD *)Context + 29,
      (__int64)(Context + 144));
  while ( 1 )
  {
    v15 = v22;
    if ( v22 == (__int64 *)&v22 )
      break;
    v16 = (__int64 *)*v22;
    if ( (__int64 **)v22[1] != &v22 || (__int64 *)v16[1] != v22 )
      __fastfail(3u);
    v22 = (__int64 *)*v22;
    v16[1] = (__int64)&v22;
    v15[1] = (__int64)v15;
    *v15 = (__int64)v15;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(*((_QWORD *)Context + 1) + 64LL),
        v12,
        v13,
        v14,
        v20,
        (char)v15,
        v15[2],
        *((_DWORD *)v15 + 6));
    v24[1] = v24;
    v24[0] = v24;
    v17 = v15[2];
    v18 = *((_DWORD *)v15 + 6);
    v21 = *((_DWORD *)v15 + 8);
    if ( *((_DWORD *)v15 + 7) > 0x200u )
      v19 = CommonBuffer_AcquireLargeBuffers((__int64)Context, v18, (__int64)v24, v17, v21, &v25);
    else
      v19 = CommonBuffer_AcquireSmallBuffers((__int64)Context, v18, (__int64)v24, v17, v21, &v25);
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD *))v15[5])(v15, v19, v24);
  }
  IoFreeWorkItem(IoWorkItem);
  KeSetEvent((PRKEVENT)(Context + 88), 0, 0);
}
