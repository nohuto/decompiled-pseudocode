/*
 * XREFs of ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A58DC
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5DE0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A4790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A51E0 (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoUnduck(CDuckingManager *this, wchar_t *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  int v6; // r14d
  LPVOID v7; // rax
  void (__fastcall **v8)(_QWORD, CDuckingNotification *); // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-40h] BYREF
  void (__fastcall **v11[3])(_QWORD, CDuckingNotification *); // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+48h] [rbp-20h]
  void (__fastcall **v13)(_QWORD, CDuckingNotification *); // [rsp+70h] [rbp+8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 104)) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x31u,
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
    v13 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = v6;
      *((_DWORD *)v7 + 1) = 512;
      *((_DWORD *)v7 + 6) = v5;
      *((_BYTE *)v7 + 60) = 0;
      *((_DWORD *)v7 + 14) = 0;
      StringCbCopyW((char *)v7 + 64, v5, (char *)a2);
      try
      {
        v11[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v11[1] = v8;
        v11[2] = 0LL;
        v12 = 0;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v3, v11);
      }
      catch ( ATL::CAtlException *v10 )
      {
        if ( *(_DWORD *)v10 == -1073741571 )
          _resetstkoflw();
        v8 = v13;
      }
    }
    operator delete(v8);
  }
  return 0LL;
}
