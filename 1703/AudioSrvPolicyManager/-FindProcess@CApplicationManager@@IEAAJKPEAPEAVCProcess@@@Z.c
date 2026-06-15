/*
 * XREFs of ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x18001207C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationManager::FindProcess(CApplicationManager *this, int a2, struct CProcess **a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  v6 = -2147023728;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a3 = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( !*(_DWORD *)(v8 + 416) && *(_DWORD *)(v8 + 168) == a2 )
    {
      v6 = 0;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, a2);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a3 = (struct CProcess *)v8;
      goto LABEL_14;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, -2147023728);
  }
LABEL_14:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
