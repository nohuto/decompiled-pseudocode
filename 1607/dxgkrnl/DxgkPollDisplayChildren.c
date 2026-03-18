/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C014F880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014DE48 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01697E0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C017ABA0 (DxgkSimulateMonitorsIfNecessary.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(_QWORD *Src, char a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // ebx
  DXGGLOBAL *Global; // rax
  int v13; // eax
  int v14; // ebx
  _D3DKMT_POLLDISPLAYCHILDREN v16; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 32), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 40));
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 43;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerEnter, v6, 2036);
  CurrentProcess = PsGetCurrentProcess(v5);
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = PsGetProcessDxgProcess(CurrentProcess, v8);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v2 = *Src;
  }
  else
  {
    memmove((void *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL), Src, 8uLL);
  }
  v10 = *(unsigned int *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  if ( (v10 & 0xFFFFFFE0) != 0 )
  {
    v10 &= 1u;
    *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v10;
  }
  v11 = (*(_BYTE *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 1) != 0 ? 1 : 16;
  if ( (v10 & 0x10) != 0 )
    v11 |= 8u;
  if ( (v10 & 8) == 0 )
  {
    v13 = PollDisplayChildrenForAdapter(
            (const struct _D3DKMT_POLLDISPLAYCHILDREN *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL),
            v11,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v2 + 32));
    goto LABEL_18;
  }
  if ( !*(_DWORD *)v2 )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    v13 = DXGGLOBAL::PollDisplayChildrenAll(
            Global,
            (const struct _D3DKMT_POLLDISPLAYCHILDREN *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL),
            v11,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v2 + 32));
LABEL_18:
    v10 = *(unsigned int *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v14 = v13;
    goto LABEL_19;
  }
  v14 = -1073741811;
LABEL_19:
  if ( v14 >= 0 && (v10 & 4) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1;
    *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = -1;
    *(_WORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    v14 = DxgkSimulateMonitorsIfNecessary(
            *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0xFFFFFFFFLL,
            5LL);
    if ( v14 == -1071774941 )
      v14 = 0;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2036);
  return (unsigned int)v14;
}
