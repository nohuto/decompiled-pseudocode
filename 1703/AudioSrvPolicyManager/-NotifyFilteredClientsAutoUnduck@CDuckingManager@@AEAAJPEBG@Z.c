/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007A74
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000851C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180008DD0 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A09C (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, const unsigned __int16 *a2)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v9; // rbx
  HANDLE v11; // rax
  int *v13; // rbx
  ATL::CAtlException *v14[4]; // [rsp+28h] [rbp-50h] BYREF
  __int16 v15; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v16; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v5 = *(_QWORD *)&v4[1].LockCount;
  LeaveCriticalSection(v4);
  if ( v5 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = 2 * v6 + 2;
    ProcessHeap = GetProcessHeap();
    v9 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v7 + 72);
    v16 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v7 + 72;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v7;
      *((_BYTE *)v9 + 60) = 0;
      *((_DWORD *)v9 + 14) = 0;
      StringCbCopyW(v9 + 36, v7, a2);
      try
      {
        v14[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
        v14[2] = (ATL::CAtlException *)v9;
        v14[3] = 0LL;
        v15 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v4);
      }
      catch ( ATL::CAtlException *v14 )
      {
        v13 = (int *)v14[0];
        if ( *(_DWORD *)v14[0] == -1073741571 )
          _o__resetstkoflw();
        v3 = *v13;
        v9 = v16;
      }
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v9);
    if ( v3 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v3);
      }
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoUnduck", 934, v3);
    }
  }
  return 0LL;
}
