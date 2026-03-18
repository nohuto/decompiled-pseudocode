/*
 * XREFs of ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00D8150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00BDEAC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C00D81A0 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D8498 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v5; // ebx
  DXGSESSIONMGR *v6; // rcx

  v4 = a1;
  v5 = 0;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 70);
  if ( v4 )
  {
    if ( v4 == 1 )
      DXGSESSIONMGR::DestroySession(v6);
  }
  else
  {
    DXGSESSIONMGR::CreateSession(v6);
    return (unsigned int)DpiSessionCreateCallback();
  }
  return v5;
}
