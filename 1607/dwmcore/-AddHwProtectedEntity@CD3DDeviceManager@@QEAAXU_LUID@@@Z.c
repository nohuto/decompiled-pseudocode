/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801726AC
 * Callers:
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18009042C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180090650 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // r10
  char *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r9d
  struct _LUID v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v4 = CD3DDeviceManager::s_cHwProtectedEntities;
  v14 = a2;
  if ( *((_DWORD *)this + 30) )
  {
    v5 = *((_QWORD *)this + 12);
    while ( *(_QWORD *)(v5 + 12 * v3) != __PAIR64__(v14.HighPart, a2.LowPart) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 30) )
        goto LABEL_5;
    }
    v10 = 3 * v3;
    ++*(_DWORD *)(v5 + 12 * v3 + 8);
  }
  else
  {
LABEL_5:
    v6 = (char *)this + 96;
    v14 = a2;
    v7 = *((unsigned int *)this + 30);
    v15 = 1;
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
    {
      if ( v8 <= *((_DWORD *)this + 29) )
      {
        v10 = *(_QWORD *)v6;
        v11 = 3 * v7;
        *(struct _LUID *)(v10 + 4 * v11) = v14;
        *(_DWORD *)(v10 + 4 * v11 + 8) = v15;
        *((_DWORD *)v6 + 6) = v8;
        goto LABEL_15;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 96, 0xCu, 1, &v14);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x87Du);
    v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
LABEL_15:
  v13 = v2 + 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v13;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v10, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v4, v13);
}
