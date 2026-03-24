/*
 * XREFs of MouseClassServiceCallback @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqiL @ 0x1C00017C0 (WPP_RECORDER_SF_qqiL.c)
 *     memmove @ 0x1C0002A80 (memmove.c)
 *     MouseClassDequeueRead @ 0x1C00043AC (MouseClassDequeueRead.c)
 *     MouseClassReadCopyData @ 0x1C0004670 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004EF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0005104 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00051CC (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C00052B8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C000548C (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C00056D0 (WPP_RECORDER_SF_qqLLqq.c)
 */

__int64 __fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // r8d
  int v12; // r9d
  __int64 **v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 *v19; // rbx
  __int64 *v20; // rax
  char *v21; // r14
  unsigned int v22; // edi
  PDEVICE_OBJECT v23; // rdx
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rcx
  void *v27; // rbx
  unsigned int v28; // esi
  unsigned int v29; // esi
  int v30; // edx
  int v31; // r9d
  char *v32; // r14
  unsigned __int64 v33; // r8
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 *v37; // rcx
  __int64 **v38; // rax
  int v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+60h] [rbp-48h] BYREF
  __int64 *v41; // [rsp+68h] [rbp-40h]
  char v42; // [rsp+B0h] [rbp+8h]
  __int64 v43; // [rsp+B8h] [rbp+10h]

  v42 = a1;
  v6 = a2;
  v7 = a1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(v7 + 64);
  v9 = 0;
  v10 = a3 - (_DWORD)v6;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v41 = &v40;
  v13 = (__int64 **)(v8 + 152);
  v40 = (__int64)&v40;
  while ( *v13 != (__int64 *)v13 )
  {
    v14 = *v13;
    v15 = **v13;
    if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
      __fastfail(3u);
    *v13 = (__int64 *)v15;
    v16 = v14 - 21;
    *(_QWORD *)(v15 + 8) = v13;
    if ( _InterlockedExchange64(v16 + 13, 0LL) )
    {
      if ( v16 )
      {
        v43 = v16[23];
        v17 = *(_DWORD *)(v43 + 8);
        v9 = v17;
        if ( v10 < v17 )
          v9 = v10;
        v18 = v9 / 0x18;
        *a4 += v9 / 0x18;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_qqLLqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v17,
            v12,
            v39,
            v42,
            (char)v16,
            v10,
            v17,
            (char)v6,
            v16[3]);
        WPP_RECORDER_SF_qqiL(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v17,
          v12,
          v39,
          v42,
          (char)v16,
          MEMORY[0xFFFFF78000000014],
          v9);
        memmove((void *)v16[3], v6, v9);
        *((_DWORD *)v16 + 12) = 0;
        v16[7] = v9;
        v19 = v16 + 21;
        *(_DWORD *)(v43 + 8) = v9;
        v20 = v41;
        if ( (__int64 *)*v41 != &v40 )
          __fastfail(3u);
        LOBYTE(v7) = v42;
        *v19 = (__int64)&v40;
        v19[1] = (__int64)v20;
        *v20 = (__int64)v19;
        v41 = v19;
        break;
      }
    }
    else
    {
      v16[22] = (__int64)(v16 + 21);
      v16[21] = (__int64)(v16 + 21);
    }
  }
  v21 = &v6[v9];
  v22 = v10 - v9;
  v23 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, v11, v12, v39, v7, v22);
    v23 = WPP_GLOBAL_Control;
  }
  if ( v22 )
  {
    if ( LOWORD(v23->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(
        v23->DeviceExtension,
        (_DWORD)v23,
        v11,
        52,
        v39,
        v7,
        *(_DWORD *)(v8 + 136) - 24 * *(_DWORD *)(v8 + 84),
        v22);
      v23 = WPP_GLOBAL_Control;
    }
    v28 = *(_DWORD *)(v8 + 136);
    if ( v28 < v22 )
      v22 = *(_DWORD *)(v8 + 136);
    v29 = *(_DWORD *)(v8 + 104) + v28 - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v23->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v23->DeviceExtension, (_DWORD)v23, v11, 54, v39, v7, v22, v29);
      v23 = WPP_GLOBAL_Control;
    }
    if ( v22 < v29 )
      v29 = v22;
    if ( LOWORD(v23->DeviceType) )
      WPP_RECORDER_SF_qLqq(v23->DeviceExtension, (_DWORD)v23, v11, 55, v39, v7, v29, (char)v21, *(_QWORD *)(v8 + 112));
    memmove(*(void **)(v8 + 112), v21, v29);
    *(_QWORD *)(v8 + 112) += v29;
    v32 = &v21[v29];
    v33 = *(_QWORD *)(v8 + 112);
    if ( v33 >= *(_QWORD *)(v8 + 104) + (unsigned __int64)*(unsigned int *)(v8 + 136) )
      v33 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 112) = v33;
    v34 = v22 - v29;
    if ( v22 != v29 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v30, v33, 56, v39, v7, v34, (char)v32, v33);
      memmove(*(void **)(v8 + 112), v32, v34);
      *(_QWORD *)(v8 + 112) += v34;
    }
    *(_DWORD *)(v8 + 84) += v22 / 0x18;
    *a4 += v22 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(
        WPP_GLOBAL_Control->DeviceExtension,
        v22 / 0x18,
        v33,
        v31,
        v39,
        v7,
        *(_DWORD *)(v8 + 84),
        *(_QWORD *)(v8 + 112),
        *(_QWORD *)(v8 + 120),
        *a4);
  }
  for ( ; *(_DWORD *)(v8 + 84); v41 = (__int64 *)(v36 + 168) )
  {
    v35 = MouseClassDequeueRead(v8);
    v36 = v35;
    if ( !v35 )
      break;
    *(_DWORD *)(v35 + 48) = MouseClassReadCopyData(v8, v35);
    v37 = v41;
    v38 = (__int64 **)(v36 + 168);
    if ( (__int64 *)*v41 != &v40 )
      __fastfail(3u);
    *(_QWORD *)(v36 + 176) = v41;
    *v38 = &v40;
    *v37 = (__int64)v38;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    result = v40;
    if ( (__int64 *)v40 == &v40 )
      break;
    v26 = *(_QWORD *)v40;
    if ( *(__int64 **)(v40 + 8) != &v40 || *(_QWORD *)(v26 + 8) != v40 )
      __fastfail(3u);
    v40 = *(_QWORD *)v40;
    *(_QWORD *)(v26 + 8) = &v40;
    v27 = (void *)(result - 168);
    IofCompleteRequest((PIRP)(result - 168), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v27, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v24) = 5;
    return WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v24, 3LL);
  }
  return result;
}
