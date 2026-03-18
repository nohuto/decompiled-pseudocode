/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C012C858
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (ADAPTER_DISPLAY *)((char *)this + 160));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v5 = *((_QWORD *)this + 28);
  v6 = 0;
  if ( v5 )
  {
    v8 = *(unsigned int *)(v5 + 24LL * a2->VidPnSourceId + 16);
    if ( a2->ModeCount >= (unsigned int)v8 )
    {
      memmove(a2->pModeList, *(const void **)(v5 + 24LL * a2->VidPnSourceId + 8), 44 * v8);
      a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 28) + 24LL * a2->VidPnSourceId + 16);
    }
    else
    {
      a2->ModeCount = v8;
      v6 = 1075707914;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = 26688LL;
    WdLogEvent5_WdError(v7);
    v6 = -1073741709;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return v6;
}
