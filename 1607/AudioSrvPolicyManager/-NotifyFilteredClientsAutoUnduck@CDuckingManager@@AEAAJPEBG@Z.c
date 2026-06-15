/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007808
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800084F0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009044 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A35C (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  BOOL v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  SIZE_T v7; // r12
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  HANDLE v11; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  int *v16; // rbx
  UINT32 v17; // [rsp+20h] [rbp-D8h]
  unsigned int v18; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+58h] [rbp-A0h]
  __int64 v21; // [rsp+60h] [rbp-98h]
  ATL::CAtlException *v22; // [rsp+68h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  const char *v24; // [rsp+90h] [rbp-68h]
  __int64 v25; // [rsp+98h] [rbp-60h]
  _QWORD *v26; // [rsp+A0h] [rbp-58h]
  __int64 v27; // [rsp+A8h] [rbp-50h]
  int *v28; // [rsp+B0h] [rbp-48h]
  __int64 v29; // [rsp+B8h] [rbp-40h]

  v21 = -2LL;
  v18 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v4 = *(_QWORD *)&v3[1].LockCount == 0LL;
  LeaveCriticalSection(v3);
  if ( !v4 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, a2);
    }
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    v6 = 2 * v5 + 2;
    v7 = 2 * v5 + 66;
    ProcessHeap = GetProcessHeap();
    v9 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v7);
    v10 = v9;
    v19[0] = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v7;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v6;
      *((_BYTE *)v9 + 60) = 0;
      *((_DWORD *)v9 + 14) = 0;
      StringCbCopyW(v9 + 32, v6, a2);
      v18 = 0;
      try
      {
        v19[1] = &CGenerateDuckingNotification::`vftable';
        v19[2] = v10;
        v19[3] = 0LL;
        v20 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v3);
      }
      catch ( ATL::CAtlException *v22 )
      {
        v16 = (int *)v22;
        if ( *(_DWORD *)v22 == -1073741571 )
          _resetstkoflw();
        v18 = *v16;
        v10 = (unsigned __int16 *)v19[0];
      }
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
    v13 = (const GUID *)v18;
    if ( (v18 & 0x80000000) != 0 )
    {
      v14 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v18);
      }
      if ( (unsigned int)dword_180034030 > 2 )
      {
        v24 = "__FUNC__";
        v25 = 9LL;
        LODWORD(v19[0]) = 934;
        v26 = v19;
        v27 = 4LL;
        v28 = (int *)&v18;
        v29 = 4LL;
        TlgWrite(v14, &unk_18002D869, v12, v13, v17, &pData);
      }
    }
  }
  return 0LL;
}
