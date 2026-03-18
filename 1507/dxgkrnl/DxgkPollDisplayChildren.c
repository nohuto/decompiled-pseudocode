/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C012AED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C013F898 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(__int64 Src, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  int v12; // eax
  int v13; // ebx
  __int64 v15; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = (_QWORD *)Src;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(Src, &EventProfilerEnter, a3, 2036);
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = DXGPROCESS::GetCurrent(Src);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v5;
  }
  else
  {
    memmove((void *)(v3 + 8), v5, 8uLL);
  }
  v9 = *(unsigned int *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( (v9 & 0xFFFFFFE0) != 0 )
  {
    v9 &= 1u;
    *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v9;
  }
  v10 = (*(_BYTE *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) & 1) != 0 ? 1 : 16;
  if ( (v9 & 0x10) != 0 )
    v10 |= 8u;
  if ( (v9 & 8) == 0 )
  {
    v12 = PollDisplayChildrenForAdapter((const struct _D3DKMT_POLLDISPLAYCHILDREN *)(v3 + 8), v10);
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    Global = DXGGLOBAL::GetGlobal(v9, v6, v7, v8);
    v12 = DXGGLOBAL::PollDisplayChildrenAll(Global, (const struct _D3DKMT_POLLDISPLAYCHILDREN *)(v3 + 8), v10);
LABEL_18:
    v9 = *(unsigned int *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v13 = v12;
    goto LABEL_19;
  }
  v13 = -1073741811;
LABEL_19:
  if ( v13 >= 0 && (v9 & 4) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1;
    *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = -1;
    *(_WORD *)v3 = 0;
    v13 = DxgkSimulateMonitorsIfNecessary(
            *(struct _LUID *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0xFFFFFFFF,
            (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFC0uLL);
    if ( v13 == -1071774941 )
      v13 = 0;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v7, 2036);
  return (unsigned int)v13;
}
