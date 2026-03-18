/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C0160204
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0164410 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     sub_1C015FF14 @ 0x1C015FF14 (sub_1C015FF14.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs(
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1,
        struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct D3DKMT_MULTIPLANE_OVERLAY **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct D3DKMT_MULTIPLANE_OVERLAY *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rcx
  void *v21; // rdx
  char *v22; // rcx
  _OWORD *v23; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-168h] BYREF
  int v29; // [rsp+30h] [rbp-158h]
  _BYTE v30[280]; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v31; // [rsp+158h] [rbp-30h]
  void *Src; // [rsp+160h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)MmUserProbeAddress;
  v7 = v30;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hDevice;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[10];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[14];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[18];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[22];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[26];
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hDevice;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
  v10 = v31;
  if ( v31 - 1 > 6 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v26[3] = v10;
    v19 = -1073741811;
    v26[4] = -1073741811LL;
    v26[5] = PsGetCurrentProcess(v27);
    WdLogEvent5_WdError(v26);
    return v19;
  }
  v11 = 120LL * v31;
  if ( v11 > 0xFFFFFFFF )
  {
    v25 = WdLogNewEntry5_WdWarning(v31, 0LL, 128LL, a4);
    *(_QWORD *)(v25 + 24) = 102LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225621LL;
  }
  v29 = 120 * v31;
  *((_QWORD *)&v28 + 1) = 0LL;
  v12 = 120LL * v31;
  if ( !is_mul_ok(v31, 0x78uLL) )
    v12 = -1LL;
  v15 = (struct D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v12, 0x4B677844u, PagedPool);
  *(_QWORD *)&v28 = v15;
  if ( !v15 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v16, v17);
    v19 = -1073741801;
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20);
    WdLogEvent5_WdWarning(v18);
    sub_1C015FF14((void **)&v28);
    return v19;
  }
  v21 = Src;
  v22 = (char *)Src + (unsigned int)v11;
  if ( v22 < Src || (unsigned __int64)v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v21, (unsigned int)v11);
  Src = v15;
  v23 = v30;
  do
  {
    *(_OWORD *)&a2->hDevice = *v23;
    *(_OWORD *)&a2->BroadcastContext[2] = v23[1];
    *(_OWORD *)&a2->BroadcastContext[6] = v23[2];
    *(_OWORD *)&a2->BroadcastContext[10] = v23[3];
    *(_OWORD *)&a2->BroadcastContext[14] = v23[4];
    *(_OWORD *)&a2->BroadcastContext[18] = v23[5];
    *(_OWORD *)&a2->BroadcastContext[22] = v23[6];
    a2 = (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v23[7];
    v23 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hDevice = *v23;
  *(_OWORD *)&a2->BroadcastContext[2] = v23[1];
  *(_OWORD *)&a2->BroadcastContext[6] = v23[2];
  *a3 = v15;
  *a4 = 0LL;
  v28 = 0LL;
  sub_1C015FF14((void **)&v28);
  return 0LL;
}
