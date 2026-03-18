/*
 * XREFs of DxgkSetVidPnSourceOwner1 @ 0x1C00B46A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner1(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v4; // rdx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v5; // edx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v10; // rax
  __int64 hDevice; // rsi
  unsigned int *pVidPnSourceId; // rdx
  unsigned int v13; // r8d
  _DWORD *p_VidPnSourceCount; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2077);
  v4 = a1 + 1;
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)v4->hDevice;
  if ( (*(_BYTE *)&v5.0 & 2) == 0 )
  {
    v6 = SetVidPnSourceOwnerInternal(a1, v5);
LABEL_6:
    v8 = v6;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v7, 2077);
    return v8;
  }
  v10 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v10 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  hDevice = v10->hDevice;
  pVidPnSourceId = (unsigned int *)a1->pVidPnSourceId;
  if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
    pVidPnSourceId = (unsigned int *)MmUserProbeAddress;
  v13 = *pVidPnSourceId;
  p_VidPnSourceCount = &a1->VidPnSourceCount;
  if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
    p_VidPnSourceCount = (_DWORD *)MmUserProbeAddress;
  if ( *p_VidPnSourceCount == 1 )
  {
    v6 = DisableDWMVirtualModeOnVidPnSource((unsigned int)hDevice, v13);
    goto LABEL_6;
  }
  v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
  *(_QWORD *)(v15 + 24) = hDevice;
  WdLogEvent5_WdError(v15);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 2077);
  return 3221225485LL;
}
