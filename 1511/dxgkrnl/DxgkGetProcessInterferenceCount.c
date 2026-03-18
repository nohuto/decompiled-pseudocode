/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C0146990
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
    v5 = *(_QWORD *)(ProcessWin32Process + 248);
  else
    v5 = 0LL;
  *a2 = 0;
  if ( v5 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *(struct DXGFASTMUTEX *const *)(v5 + 88));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v7 = 0;
      v8 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v6);
        if ( DXGGLOBAL::m_pDxgmmsExport[v8 - 15] )
        {
          v13 = 0;
          Global = DXGGLOBAL::GetGlobal(v6);
          v6 = *(_QWORD *)(v5 + 72);
          v10 = *(_QWORD *)((char *)Global + v8 * 8);
          if ( v6 )
            v6 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
          if ( v6 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v10 + 8) + 784LL))(v6, &v13);
          *a2 += v13;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 2 );
    }
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
