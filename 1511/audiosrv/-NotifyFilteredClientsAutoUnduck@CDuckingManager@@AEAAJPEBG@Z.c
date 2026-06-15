/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A28F8
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A310C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A1B00 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A250C (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, wchar_t *a2)
{
  int v3; // esi
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int v6; // r12d
  LPVOID v7; // rax
  void (__fastcall **v8)(_QWORD, CDuckingNotification *); // rdi
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v13[3])(_QWORD, CDuckingNotification *); // [rsp+30h] [rbp-48h] BYREF
  __int16 v14; // [rsp+48h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+80h] [rbp+8h]
  void (__fastcall **v16)(_QWORD, CDuckingNotification *); // [rsp+90h] [rbp+18h]

  v3 = 0;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 104)) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        a2);
    }
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = 2 * v4 + 2;
    v6 = 2 * v4 + 66;
    v7 = operator new(2 * v4 + 66);
    v8 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    v16 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = v6;
      *((_DWORD *)v7 + 1) = 512;
      *((_DWORD *)v7 + 6) = v5;
      *((_BYTE *)v7 + 60) = 0;
      *((_DWORD *)v7 + 14) = 0;
      StringCbCopyW((unsigned __int16 *)v7 + 32, v5, (size_t *)a2);
      try
      {
        v13[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v13[1] = v8;
        v13[2] = 0LL;
        v14 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(lpCriticalSection, v13);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v11 = (int *)v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          _resetstkoflw();
        v3 = *v11;
        v8 = v16;
      }
    }
    operator delete(v8);
    if ( v3 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v3);
    }
  }
  return 0LL;
}
