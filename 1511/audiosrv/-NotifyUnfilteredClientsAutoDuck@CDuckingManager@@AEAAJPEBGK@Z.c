/*
 * XREFs of ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800A2AAC
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A1B00 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A250C (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoDuck(CDuckingManager *this, wchar_t *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // r14d
  LPVOID v9; // rax
  void (__fastcall **v10)(_QWORD, CDuckingNotification *); // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v13[3])(_QWORD, CDuckingNotification *); // [rsp+30h] [rbp-48h] BYREF
  __int16 v14; // [rsp+48h] [rbp-30h]
  void (__fastcall **v15)(_QWORD, CDuckingNotification *); // [rsp+80h] [rbp+8h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 104)) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = 2 * v6 + 2;
    v8 = 2 * v6 + 66;
    v9 = operator new(2 * v6 + 66);
    v10 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v9;
    v15 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v8;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v7;
      *((_BYTE *)v9 + 60) = 1;
      *((_DWORD *)v9 + 14) = a3;
      StringCbCopyW((unsigned __int16 *)v9 + 32, v7, (size_t *)a2);
      try
      {
        v13[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v13[1] = v10;
        v13[2] = 0LL;
        v14 = 1;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v5, v13);
      }
      catch ( ATL::CAtlException *v12 )
      {
        if ( *(_DWORD *)v12 == -1073741571 )
          _resetstkoflw();
        v10 = v15;
      }
    }
    operator delete(v10);
  }
  return 0LL;
}
