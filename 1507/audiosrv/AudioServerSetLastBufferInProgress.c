/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x18008D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(__int64 a1)
{
  int v2; // ebx

  v2 = 0;
  EnterCriticalSection(&g_csVadList);
  if ( a1 )
  {
    *(_DWORD *)(a1 + 300) = 1;
    UpdateOffloadPowerRequest();
  }
  else
  {
    v2 = -2147024809;
  }
  LeaveCriticalSection(&g_csVadList);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x63u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v2);
  }
  return 0LL;
}
