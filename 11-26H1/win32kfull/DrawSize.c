/*
 * XREFs of DrawSize @ 0x140258578
 * Callers:
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14024C70C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     SizeBoxHwnd @ 0x140258834 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 *a1, HDC a2, int a3, int a4)
{
  __int64 v4; // rbx
  HDC v7; // rsi
  __int64 *v8; // r12
  int v9; // r13d
  int v10; // r13d
  int v11; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v13; // rax
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // r9
  __int64 v20; // r8
  char v21; // al
  unsigned int v22; // eax
  int DpiDependentMetric; // r15d
  unsigned int v24; // eax
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // edi
  __int64 v28; // r12
  int v29; // r14d
  int v30; // esi
  int v31; // ebp
  int v32; // ebx
  __int64 v33; // rdx
  __int64 UserSessionState; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v40; // [rsp+98h] [rbp-80h]
  char v41; // [rsp+B0h] [rbp-68h]
  char v42; // [rsp+B1h] [rbp-67h]
  int v43; // [rsp+B4h] [rbp-64h]
  _DWORD v44[4]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-50h]

  v4 = a1[5];
  v7 = a2;
  v8 = a1;
  if ( (*(_BYTE *)(v4 + 25) & 0x40) != 0 )
  {
    v9 = a3;
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 96);
    v11 = *(_DWORD *)(v4 + 88);
    DpiForSystem = GetDpiForSystem();
    v9 = v10 - v11 - a3 - GetDpiDependentMetric(0, DpiForSystem);
  }
  v13 = v8[5];
  v14 = *(_DWORD *)(v13 + 100);
  v15 = *(_DWORD *)(v13 + 92);
  v16 = GetDpiForSystem();
  v18 = v14 - v15 - a4 - GetDpiDependentMetric(1, v16);
  v43 = v18;
  v20 = 0LL;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  v42 = v17;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v21 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v21 = 0;
  }
  v41 = v21;
  if ( (_BYTE)v17 || v21 )
  {
    v22 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(1, v22);
    v24 = GetDpiForSystem();
    v25 = GetDpiDependentMetric(0, v24);
    v26 = (_DWORD *)v8[5];
    v27 = v25;
    v28 = *v8;
    v29 = v26[23];
    v30 = v26[25];
    v31 = v26[22];
    v32 = v26[24];
    UserSessionState = W32GetUserSessionState(v26, v33);
    v40 = v27;
    v18 = v43;
    WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v41,
      *(_QWORD *)(UserSessionState + 69152),
      5u,
      9u,
      0x10u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v28,
      a3,
      a4,
      v9,
      v43,
      v31,
      v29,
      v32,
      v30,
      v32 - v31,
      v30 - v29,
      v40,
      DpiDependentMetric);
    v8 = a1;
    v7 = a2;
  }
  if ( SizeBoxHwnd(v8, v17, v20, v19) )
    return BitBltSysBmp(v7, v9, v18, (*(_BYTE *)(v8[5] + 25) & 0x40) != 0 ? 91 : 45, 1);
  v44[0] = v9;
  v44[1] = v18;
  v35 = GetDpiForSystem();
  v44[2] = GetDpiDependentMetric(0, v35);
  v36 = GetDpiForSystem();
  v44[3] = GetDpiDependentMetric(1, v36);
  v45 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19904) + 4816LL);
  return GrePolyPatBlt(v7, 15728673, (struct _POLYPATBLT *)v44, 1);
}
