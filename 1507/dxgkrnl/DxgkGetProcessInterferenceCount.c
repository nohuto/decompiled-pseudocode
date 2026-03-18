/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C0140440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00094EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rsi
  struct DXGGLOBAL *Global; // rax
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
    v5 = *(_QWORD *)(ProcessWin32Process + 248);
  else
    v5 = 0LL;
  *a2 = 0;
  if ( v5 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, *(struct DXGFASTMUTEX *const *)(v5 + 88));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v10 = 0;
      v11 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
        if ( DXGGLOBAL::m_pDxgmmsExport[v11 - 15] )
        {
          v15 = 0;
          Global = DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
          v7 = *(_QWORD *)(v5 + 72);
          v6 = *(_QWORD *)((char *)Global + v11 * 8);
          if ( v7 )
            v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16);
          if ( v7 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v6 + 8) + 784LL))(v7, &v15);
          *a2 += v15;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < 2 );
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
