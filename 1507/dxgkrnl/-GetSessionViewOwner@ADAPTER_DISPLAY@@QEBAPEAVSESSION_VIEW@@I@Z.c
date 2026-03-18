/*
 * XREFs of ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00AF840 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0126D78 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 * Callees:
 *     <none>
 */

int **__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  int **v7; // rdi
  int v8; // ebx
  __int64 v10; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 10012LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = 1008 * v5;
  v7 = *(int ***)(1008 * v5 + *((_QWORD *)this + 14) + 48);
  if ( v7 && (v8 = **v7, v8 == (unsigned int)PsGetCurrentProcessSessionId(*v7, v6, a3, a4)) )
    return v7;
  else
    return 0LL;
}
