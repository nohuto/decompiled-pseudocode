/*
 * XREFs of ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00C6800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C009E3B4 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C009E4A0 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiSessionCreateCallback @ 0x1C00C6850 (DpiSessionCreateCallback.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(__int64 a1)
{
  int v1; // edi
  unsigned int v2; // ebx
  DXGSESSIONMGR *v3; // rcx

  v1 = a1;
  v2 = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 88);
  if ( v1 )
  {
    if ( v1 == 1 )
      DXGSESSIONMGR::DestroySession(v3);
  }
  else
  {
    DXGSESSIONMGR::CreateSession(v3);
    return (unsigned int)DpiSessionCreateCallback();
  }
  return v2;
}
