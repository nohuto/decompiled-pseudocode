/*
 * XREFs of KeyboardClassServiceCallback @ 0x1C00049F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     KeyboardClassDequeueRead @ 0x1C00043C4 (KeyboardClassDequeueRead.c)
 *     KeyboardClassReadCopyData @ 0x1C0004680 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005348 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00054B4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C000557C (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0005668 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C000583C (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005A80 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C0006174 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall KeyboardClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // ebx
  _QWORD **v11; // rax
  int v12; // r8d
  int v13; // r9d
  _QWORD **v14; // r13
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 ***v17; // r13
  __int64 ***v18; // rax
  char *v19; // r14
  unsigned int v20; // esi
  PDEVICE_OBJECT v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  int v24; // edx
  int v25; // r9d
  char *v26; // r14
  unsigned __int64 v27; // r8
  unsigned int v28; // ebx
  _QWORD **v29; // rax
  int v30; // r8d
  int v31; // r9d
  _QWORD **v32; // rbx
  __int64 ***v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // rbx
  __int64 **result; // rax
  __int64 *v37; // rax
  __int64 *v38; // [rsp+60h] [rbp-10h] BYREF
  __int64 **v39; // [rsp+68h] [rbp-8h]
  _QWORD *v40; // [rsp+B0h] [rbp+40h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = a3 - (_DWORD)v6;
  v10 = 0;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 160));
  v39 = &v38;
  v38 = (__int64 *)&v38;
  v11 = KeyboardClassDequeueRead(v8);
  v13 = 0;
  v14 = v11;
  if ( v11 )
  {
    v40 = v11[23];
    v15 = *((_DWORD *)v40 + 2);
    v10 = v15;
    if ( v9 < v15 )
      v10 = v9;
    v16 = v10 / 0xC;
    *a4 += v10 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v16, v15, 0);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    memmove(v14[3], v6, v10);
    *((_DWORD *)v14 + 12) = 0;
    v14[7] = (_QWORD *)v10;
    v17 = (__int64 ***)(v14 + 21);
    *((_DWORD *)v40 + 2) = v10;
    v18 = (__int64 ***)v39;
    *v17 = &v38;
    v17[1] = (__int64 **)v18;
    if ( *v18 != &v38 )
      __fastfail(3u);
    *v18 = (__int64 **)v17;
    v39 = (__int64 **)v17;
  }
  v19 = &v6[v10];
  v20 = v9 - v10;
  v21 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, v12, v13);
    v21 = WPP_GLOBAL_Control;
  }
  if ( v20 )
  {
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, v12, 52);
      v21 = WPP_GLOBAL_Control;
    }
    v22 = *(_DWORD *)(v8 + 140);
    if ( v22 < v20 )
      v20 = *(_DWORD *)(v8 + 140);
    v23 = v22 + *(_DWORD *)(v8 + 104) - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, v12, 54);
      v21 = WPP_GLOBAL_Control;
    }
    if ( v20 < v23 )
      v23 = v20;
    if ( LOWORD(v21->DeviceType) )
      WPP_RECORDER_SF_qLqq(v21->DeviceExtension, (_DWORD)v21, v12, 55);
    memmove(*(void **)(v8 + 112), v19, v23);
    *(_QWORD *)(v8 + 112) += v23;
    v26 = &v19[v23];
    v27 = *(_QWORD *)(v8 + 112);
    if ( v27 >= *(_QWORD *)(v8 + 104) + (unsigned __int64)*(unsigned int *)(v8 + 140) )
      v27 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 112) = v27;
    v28 = v20 - v23;
    if ( v20 != v23 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v24, v27, 56);
      memmove(*(void **)(v8 + 112), v26, v28);
      *(_QWORD *)(v8 + 112) += v28;
    }
    *(_DWORD *)(v8 + 84) += v20 / 0xC;
    *a4 += v20 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, *a4, v27, v25);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v29 = KeyboardClassDequeueRead(v8);
    v32 = v29;
    if ( !v29 )
      break;
    *((_DWORD *)v29 + 12) = KeyboardClassReadCopyData(v8, v29, v30, v31);
    v33 = (__int64 ***)v39;
    v32[21] = &v38;
    v32[22] = v33;
    if ( *v33 != &v38 )
      __fastfail(3u);
    *v33 = v32 + 21;
    v39 = v32 + 21;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 160));
  while ( 1 )
  {
    v35 = v38;
    result = &v38;
    if ( v38 == (__int64 *)&v38 )
      break;
    v37 = (__int64 *)*v38;
    if ( (__int64 **)v38[1] != &v38 || (__int64 *)v37[1] != v38 )
      __fastfail(3u);
    v38 = (__int64 *)*v38;
    v37[1] = (__int64)&v38;
    IofCompleteRequest((PIRP)(v35 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v35 - 21, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v34) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v34, 3LL);
  }
  return result;
}
