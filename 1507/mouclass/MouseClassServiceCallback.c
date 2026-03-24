/*
 * XREFs of MouseClassServiceCallback @ 0x1C0001670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqiL @ 0x1C0001880 (WPP_RECORDER_SF_qqiL.c)
 *     MouseClassDequeueRead @ 0x1C0001940 (MouseClassDequeueRead.c)
 *     memmove @ 0x1C0002B00 (memmove.c)
 *     MouseClassReadCopyData @ 0x1C00046A0 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0005134 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00051FC (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C00052E8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C00054BC (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005700 (WPP_RECORDER_SF_qqLLqq.c)
 */

__int64 __fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // rsi
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 *v12; // r8
  int v13; // r9d
  __int64 v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 *v17; // rdx
  char *v18; // rsi
  unsigned int v19; // edi
  PDEVICE_OBJECT v20; // rdx
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rcx
  void *v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // r14d
  int v27; // edx
  int v28; // r9d
  char *v29; // rsi
  unsigned __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rcx
  __int64 v35; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v36; // [rsp+68h] [rbp-30h]
  __int64 v37; // [rsp+A0h] [rbp+8h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = a3 - (_DWORD)v6;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v36 = &v35;
  v35 = (__int64)&v35;
  v11 = MouseClassDequeueRead(v8);
  v14 = v11;
  if ( v11 )
  {
    v37 = *(_QWORD *)(v11 + 184);
    v15 = *(_DWORD *)(v37 + 8);
    v9 = v15;
    if ( v10 < v15 )
      v9 = v10;
    v16 = v9 / 0x18;
    *a4 += v9 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    memmove(*(void **)(v14 + 24), v6, v9);
    *(_DWORD *)(v14 + 48) = 0;
    *(_QWORD *)(v14 + 56) = v9;
    *(_DWORD *)(v37 + 8) = v9;
    v17 = v36;
    *(_QWORD *)(v14 + 168) = &v35;
    v12 = &v35;
    *(_QWORD *)(v14 + 176) = v17;
    if ( (__int64 *)*v17 != &v35 )
      __fastfail(3u);
    *v17 = v14 + 168;
    v36 = (__int64 *)(v14 + 168);
  }
  v18 = &v6[v9];
  v19 = v10 - v9;
  v20 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, (_DWORD)v12, v13);
    v20 = WPP_GLOBAL_Control;
  }
  if ( v19 )
  {
    if ( LOWORD(v20->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v20->DeviceExtension, (_DWORD)v20, (_DWORD)v12, 52);
      v20 = WPP_GLOBAL_Control;
    }
    v25 = *(_DWORD *)(v8 + 136);
    if ( v25 < v19 )
      v19 = *(_DWORD *)(v8 + 136);
    v26 = v25 + *(_DWORD *)(v8 + 104) - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v20->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v20->DeviceExtension, (_DWORD)v20, (_DWORD)v12, 54);
      v20 = WPP_GLOBAL_Control;
    }
    if ( v19 < v26 )
      v26 = v19;
    if ( LOWORD(v20->DeviceType) )
      WPP_RECORDER_SF_qLqq(v20->DeviceExtension, (_DWORD)v20, (_DWORD)v12, 55);
    memmove(*(void **)(v8 + 112), v18, v26);
    *(_QWORD *)(v8 + 112) += v26;
    v29 = &v18[v26];
    v30 = *(_QWORD *)(v8 + 112);
    if ( v30 >= *(_QWORD *)(v8 + 104) + (unsigned __int64)*(unsigned int *)(v8 + 136) )
      v30 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 112) = v30;
    v31 = v19 - v26;
    if ( v19 != v26 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v27, v30, 56);
      memmove(*(void **)(v8 + 112), v29, v31);
      *(_QWORD *)(v8 + 112) += v31;
    }
    *(_DWORD *)(v8 + 84) += v19 / 0x18;
    *a4 += v19 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v19 / 0x18, v30, v28);
  }
  for ( ; *(_DWORD *)(v8 + 84); v36 = (__int64 *)(v33 + 168) )
  {
    v32 = MouseClassDequeueRead(v8);
    v33 = v32;
    if ( !v32 )
      break;
    *(_DWORD *)(v32 + 48) = MouseClassReadCopyData(v8, v32);
    v34 = v36;
    *(_QWORD *)(v33 + 168) = &v35;
    *(_QWORD *)(v33 + 176) = v34;
    if ( (__int64 *)*v34 != &v35 )
      __fastfail(3u);
    *v34 = v33 + 168;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    result = v35;
    if ( (__int64 *)v35 == &v35 )
      break;
    v23 = *(_QWORD *)v35;
    if ( *(__int64 **)(v35 + 8) != &v35 || *(_QWORD *)(v23 + 8) != v35 )
      __fastfail(3u);
    v35 = *(_QWORD *)v35;
    *(_QWORD *)(v23 + 8) = &v35;
    v24 = (void *)(result - 168);
    IofCompleteRequest((PIRP)(result - 168), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v24, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v21) = 5;
    return WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v21, 3LL);
  }
  return result;
}
