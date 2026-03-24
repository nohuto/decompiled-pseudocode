/*
 * XREFs of KeyboardClassServiceCallback @ 0x1C0002920
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassDequeueRead @ 0x1C0002880 (KeyboardClassDequeueRead.c)
 *     memmove @ 0x1C0002E00 (memmove.c)
 *     KeyboardClassReadCopyData @ 0x1C0004AA0 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005338 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00054A4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C000556C (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0005658 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C000582C (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005A70 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C0006164 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall KeyboardClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // r14
  __int64 v8; // rbx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 **v12; // r8
  int v13; // r9d
  __int64 v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 ***v17; // rax
  _QWORD *v18; // rdx
  char *v19; // r14
  unsigned int v20; // esi
  PDEVICE_OBJECT v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 ***v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ebp
  unsigned int v28; // ebp
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  char *v32; // r14
  __int64 v33; // rax
  __int64 **result; // rax
  __int64 *v35; // rdi
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
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 160));
  v38 = &v37;
  v37 = (__int64 *)&v37;
  v11 = KeyboardClassDequeueRead(v8);
  v14 = v11;
  if ( v11 )
  {
    v39 = *(_QWORD *)(v11 + 184);
    v15 = *(_DWORD *)(v39 + 8);
    v9 = v15;
    if ( v10 < v15 )
      v9 = v10;
    v16 = v9 / 0xC;
    *a4 += v9 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    memmove(*(void **)(v14 + 24), v6, v9);
    *(_DWORD *)(v14 + 48) = 0;
    v12 = &v37;
    *(_QWORD *)(v14 + 56) = v9;
    *(_DWORD *)(v39 + 8) = v9;
    v17 = (__int64 ***)(v14 + 168);
    v18 = v38;
    if ( *v38 != (__int64 *)&v37 )
      __fastfail(3u);
    *(_QWORD *)(v14 + 176) = v38;
    *v17 = &v37;
    *v18 = v17;
    v38 = (__int64 **)(v14 + 168);
  }
  v19 = &v6[v9];
  v20 = v10 - v9;
  v21 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, (_DWORD)v12, v13);
    v21 = WPP_GLOBAL_Control;
  }
  if ( v20 )
  {
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 52);
      v21 = WPP_GLOBAL_Control;
    }
    v27 = *(_DWORD *)(v8 + 140);
    if ( v27 < v20 )
      v20 = *(_DWORD *)(v8 + 140);
    v28 = *(_DWORD *)(v8 + 104) + v27 - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 54);
      v21 = WPP_GLOBAL_Control;
    }
    if ( v20 < v28 )
      v28 = v20;
    if ( LOWORD(v21->DeviceType) )
      WPP_RECORDER_SF_qLqq(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 55);
    memmove(*(void **)(v8 + 112), v19, v28);
    v31 = *(_QWORD *)(v8 + 104);
    v32 = &v19[v28];
    v33 = *(unsigned int *)(v8 + 140);
    *(_QWORD *)(v8 + 112) += v28;
    if ( *(_QWORD *)(v8 + 112) >= (unsigned __int64)(v31 + v33) )
      *(_QWORD *)(v8 + 112) = v31;
    if ( v20 != v28 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v31, v29, 56);
      memmove(*(void **)(v8 + 112), v32, v20 - v28);
      *(_QWORD *)(v8 + 112) += v20 - v28;
    }
    *(_DWORD *)(v8 + 84) += v20 / 0xC;
    *a4 += v20 / 0xC;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v20 / 0xC, v29, v30);
  }
  for ( ; *(_DWORD *)(v8 + 84); v38 = (__int64 **)(v23 + 168) )
  {
    v22 = KeyboardClassDequeueRead(v8);
    v23 = v22;
    if ( !v22 )
      break;
    *(_DWORD *)(v22 + 48) = KeyboardClassReadCopyData(v8, v22);
    v24 = v38;
    v25 = (__int64 ***)(v23 + 168);
    if ( *v38 != (__int64 *)&v37 )
      __fastfail(3u);
    *(_QWORD *)(v23 + 176) = v38;
    *v25 = &v37;
    *v24 = v25;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 160));
  while ( 1 )
  {
    v35 = v37;
    result = &v37;
    if ( v37 == (__int64 *)&v37 )
      break;
    v36 = (__int64 *)*v37;
    if ( (__int64 **)v37[1] != &v37 || (__int64 *)v36[1] != v37 )
      __fastfail(3u);
    v37 = (__int64 *)*v37;
    v36[1] = (__int64)&v37;
    IofCompleteRequest((PIRP)(v35 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v35 - 21, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v26, 3LL);
  }
  return result;
}
