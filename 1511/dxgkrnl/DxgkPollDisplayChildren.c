/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C0131470
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C012D090 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0145D70 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(__int64 Src, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // ebx
  DXGGLOBAL *Global; // rax
  int v10; // eax
  int v11; // ebx
  __int64 v13; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = (_QWORD *)Src;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(Src, &EventProfilerEnter, a3, 2036);
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = DXGPROCESS::GetCurrent();
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v5;
  }
  else
  {
    memmove((void *)(v3 + 8), v5, 8uLL);
  }
  v7 = *(unsigned int *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( (v7 & 0xFFFFFFE0) != 0 )
  {
    v7 &= 1u;
    *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v7;
  }
  v8 = (*(_BYTE *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) & 1) != 0 ? 1 : 16;
  if ( (v7 & 0x10) != 0 )
    v8 |= 8u;
  if ( (v7 & 8) == 0 )
  {
    v10 = PollDisplayChildrenForAdapter((const struct _D3DKMT_POLLDISPLAYCHILDREN *)(v3 + 8), v8);
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    v10 = DXGGLOBAL::PollDisplayChildrenAll(Global, (const struct _D3DKMT_POLLDISPLAYCHILDREN *)(v3 + 8), v8);
LABEL_18:
    v7 = *(unsigned int *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v11 = v10;
    goto LABEL_19;
  }
  v11 = -1073741811;
LABEL_19:
  if ( v11 >= 0 && (v7 & 4) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1;
    *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = -1;
    *(_WORD *)v3 = 0;
    v11 = DxgkSimulateMonitorsIfNecessary(
            *(struct _LUID *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0xFFFFFFFF,
            (unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL);
    if ( v11 == -1071774941 )
      v11 = 0;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerExit, v6, 2036);
  return (unsigned int)v11;
}
