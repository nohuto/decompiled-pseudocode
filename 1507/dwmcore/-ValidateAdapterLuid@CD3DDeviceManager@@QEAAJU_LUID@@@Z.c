/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180055C38
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180055A60 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180132CE0 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 i; // rax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = CD3DDeviceManager::EnsureDXGIEnumeration(this);
  LODWORD(v4) = 0;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x898u);
  }
  else
  {
    v6 = *((_QWORD *)this + 10);
    v5 = 0;
    if ( *(_DWORD *)(v6 + 88) )
    {
      for ( i = **(_QWORD **)(v6 + 64); v10 != *(_QWORD *)(i + 336); i = *(_QWORD *)(*(_QWORD *)(v6 + 64) + 8 * v4) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *(_DWORD *)(v6 + 88) )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x64u);
          v5 = -2003304307;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v5 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x57u);
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x89Au);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v5;
}
