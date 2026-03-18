/*
 * XREFs of InternalGetRealClientRect @ 0x1401E675C
 * Callers:
 *     SetTiledRect @ 0x1400320E0 (SetTiledRect.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 */

__int64 __fastcall InternalGetRealClientRect(const struct tagWND *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  __m128i *MonitorRectForDpi; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int DpiForSystem; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i v22; // [rsp+20h] [rbp-48h] BYREF
  __m128i v23[3]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  v9 = *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2) + 96);
    if ( a5 )
      v10 = 0;
    else
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9) >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      MonitorRectForDpi = GetMonitorRectForDpi(&v22, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(v23, v6, v10);
    v14 = *MonitorRectForDpi;
    result = (__int64)&v22;
    v22 = v14;
    *(__m128i *)a2 = v14;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        *(_DWORD *)(a2 + 12) += GetDpiDependentMetric(1, DpiForSystem);
      }
      result = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(result + 16) & 2) != 0 )
      {
        v19 = GetDpiForSystem();
        result = GetDpiDependentMetric(0, v19);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = W32GetUserSessionState(v13, v12);
    v16 = *(_QWORD *)(result + 19904);
    v17 = *(_DWORD *)(v16 + 2120) & 0xFFFFFFF7;
    if ( (*(_DWORD *)(v16 + 2120) & 0xFFFFFFF7) == 0 || (v17 = (unsigned int)(v17 - 1), !(_DWORD)v17) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v17) + 19904) + 2088LL);
      *(_DWORD *)(a2 + 12) -= result;
      return result;
    }
    v20 = (unsigned int)(v17 - 1);
    if ( !(_DWORD)v20 || (v20 = (unsigned int)(v20 - 1), !(_DWORD)v20) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v20) + 19904) + 2088LL);
      *(_DWORD *)(a2 + 4) += result;
      return result;
    }
    v21 = (unsigned int)(v20 - 1);
    if ( !(_DWORD)v21 )
      goto LABEL_28;
    v21 = (unsigned int)(v21 - 1);
    if ( !(_DWORD)v21 )
    {
LABEL_27:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v21) + 19904) + 2084LL);
      *(_DWORD *)(a2 + 8) -= result;
      return result;
    }
    v21 = (unsigned int)(v21 - 1);
    if ( !(_DWORD)v21 )
    {
LABEL_28:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v21) + 19904) + 2084LL);
      *(_DWORD *)a2 += result;
      return result;
    }
    if ( (_DWORD)v21 == 1 )
      goto LABEL_27;
  }
  return result;
}
