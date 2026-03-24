/*
 * XREFs of KeyboardClassServiceCallback @ 0x1C0002950
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassDequeueRead @ 0x1C0001000 (KeyboardClassDequeueRead.c)
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     KeyboardClassReadCopyData @ 0x1C0004AF0 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005388 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00054F4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00055BC (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C00056A8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C000587C (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005AC0 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C00061B4 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall KeyboardClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // rbp
  __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  KSPIN_LOCK *v11; // r13
  __int64 *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // r15
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 ***v18; // r15
  __int64 ***v19; // rax
  char *v20; // rbp
  unsigned int v21; // esi
  PDEVICE_OBJECT v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  int v25; // edx
  int v26; // r9d
  char *v27; // rbp
  unsigned __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 *v30; // rax
  __int64 *v31; // rbx
  __int64 ***v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // rbx
  __int64 **result; // rax
  __int64 *v36; // rax
  __int64 *v37; // [rsp+60h] [rbp-38h] BYREF
  __int64 **v38; // [rsp+68h] [rbp-30h]
  __int64 v39; // [rsp+A0h] [rbp+8h]

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
  v11 = (KSPIN_LOCK *)(v8 + 160);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 160));
  v38 = &v37;
  v37 = (__int64 *)&v37;
  v12 = KeyboardClassDequeueRead(v8);
  v15 = v12;
  if ( v12 )
  {
    v39 = v12[23];
    v16 = *(_DWORD *)(v39 + 8);
    v9 = v16;
    if ( v10 < v16 )
      v9 = v10;
    v17 = v9 / 0xC;
    *a4 += v9 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v17, v16, v14);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v17, v16, v14);
    memmove((void *)v15[3], v6, v9);
    *((_DWORD *)v15 + 12) = 0;
    v15[7] = v9;
    v18 = (__int64 ***)(v15 + 21);
    *(_DWORD *)(v39 + 8) = v9;
    v19 = (__int64 ***)v38;
    *v18 = &v37;
    v18[1] = (__int64 **)v19;
    if ( *v19 != &v37 )
      __fastfail(3u);
    *v19 = (__int64 **)v18;
    v11 = (KSPIN_LOCK *)(v8 + 160);
    v38 = (__int64 **)v18;
  }
  v20 = &v6[v9];
  v21 = v10 - v9;
  v22 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, v13, v14);
    v22 = WPP_GLOBAL_Control;
  }
  if ( v21 )
  {
    if ( LOWORD(v22->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v22->DeviceExtension, (_DWORD)v22, v13, 52);
      v22 = WPP_GLOBAL_Control;
    }
    v23 = *(_DWORD *)(v8 + 140);
    if ( v23 < v21 )
      v21 = *(_DWORD *)(v8 + 140);
    v24 = v23 + *(_DWORD *)(v8 + 104) - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v22->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v22->DeviceExtension, (_DWORD)v22, v13, 54);
      v22 = WPP_GLOBAL_Control;
    }
    if ( v21 < v24 )
      v24 = v21;
    if ( LOWORD(v22->DeviceType) )
      WPP_RECORDER_SF_qLqq(v22->DeviceExtension, (_DWORD)v22, v13, 55);
    memmove(*(void **)(v8 + 112), v20, v24);
    *(_QWORD *)(v8 + 112) += v24;
    v27 = &v20[v24];
    v28 = *(_QWORD *)(v8 + 112);
    if ( v28 >= *(_QWORD *)(v8 + 104) + (unsigned __int64)*(unsigned int *)(v8 + 140) )
      v28 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 112) = v28;
    v29 = v21 - v24;
    if ( v21 != v24 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v25, v28, 56);
      memmove(*(void **)(v8 + 112), v27, v29);
      *(_QWORD *)(v8 + 112) += v29;
    }
    *(_DWORD *)(v8 + 84) += v21 / 0xC;
    *a4 += v21 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v21 / 0xC, v28, v26);
  }
  for ( ; *(_DWORD *)(v8 + 84); v38 = (__int64 **)(v31 + 21) )
  {
    v30 = KeyboardClassDequeueRead(v8);
    v31 = v30;
    if ( !v30 )
      break;
    *((_DWORD *)v30 + 12) = KeyboardClassReadCopyData(v8, v30);
    v32 = (__int64 ***)v38;
    v31[21] = (__int64)&v37;
    v31[22] = (__int64)v32;
    if ( *v32 != &v37 )
      __fastfail(3u);
    *v32 = (__int64 **)(v31 + 21);
  }
  KeReleaseSpinLockFromDpcLevel(v11);
  while ( 1 )
  {
    v34 = v37;
    result = &v37;
    if ( v37 == (__int64 *)&v37 )
      break;
    v36 = (__int64 *)*v37;
    if ( (__int64 **)v37[1] != &v37 || (__int64 *)v36[1] != v37 )
      __fastfail(3u);
    v37 = (__int64 *)*v37;
    v36[1] = (__int64)&v37;
    IofCompleteRequest((PIRP)(v34 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v34 - 21, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v33) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v33, 3LL);
  }
  return result;
}
