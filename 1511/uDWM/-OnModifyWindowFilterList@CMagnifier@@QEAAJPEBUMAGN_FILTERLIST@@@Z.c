/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18007A4A4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180012270 (-SendWithData@CResource@@QEAAJPEAXI0I@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(CMagnifier *this, const struct MAGN_FILTERLIST *a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  CResource *v18; // rcx
  int v19; // eax
  CResource *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  CResource *v23; // rcx
  int v24; // eax
  __int64 v26; // [rsp+30h] [rbp-89h]
  int v27; // [rsp+38h] [rbp-81h] BYREF
  __int64 v28; // [rsp+3Ch] [rbp-7Dh]
  int i; // [rsp+50h] [rbp-69h] BYREF
  int v30; // [rsp+58h] [rbp-61h]
  int v31; // [rsp+5Ch] [rbp-5Dh]
  _DWORD v32[28]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 0LL;
  v3 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  if ( (dword_1800BF3FC & 1) == 0 )
  {
    dword_1800BF334 = -2147023728;
    dword_1800BF3FC |= 1u;
  }
  if ( *((_QWORD *)this + 7)
    || (v6 = CResource::Create(0x50u, *((_QWORD *)this + 2), (CBaseObject **)this + 7), v7 = v6, v6 >= 0) )
  {
    if ( !v3 || *(_DWORD *)a2 == 1 && *((_QWORD *)this + 8) == *((_QWORD *)a2 + 1) )
    {
      v23 = (CResource *)*((_QWORD *)this + 4);
      v27 = 117;
      v28 = 0LL;
      v24 = CResource::Send(v23, &v27, 0xCu);
      v7 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800BF334, 1LL, v24, 0x10Bu);
    }
    else
    {
      memset_0(&i, 0, 0x74uLL);
      v8 = 0LL;
      for ( i = 97; (unsigned int)v8 < *(_DWORD *)a2; v8 = (unsigned int)(v8 + 1) )
      {
        if ( (unsigned int)v8 >= 0x19 )
          break;
        v26 = *((_QWORD *)a2 + v8 + 1);
        if ( *((_QWORD *)this + 8) != v26 )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 8LL))(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                 v26);
          if ( v9 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 384);
              if ( v11 )
              {
                v12 = *(_QWORD *)(v11 + 16);
                if ( v12 )
                  LODWORD(v12) = *(_DWORD *)(v12 + 24);
                v32[v2] = v12;
                ++v30;
                v2 = (unsigned int)(v2 + 1);
              }
            }
          }
        }
      }
      if ( (unsigned int)v8 < v3 )
      {
        v13 = (_QWORD *)((char *)a2 + 8 * v8 + 8);
        while ( (unsigned int)v8 < 0x19 )
        {
          if ( *((_QWORD *)this + 8) != *v13 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 6)
                                                            + 8LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                    *v13);
            if ( !v14 )
            {
              v7 = -2147023728;
              MilInstrumentationCheckHR(0x14u, &dword_1800BF334, 1LL, -2147023728, 0x144u);
              return v7;
            }
            v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            if ( v15 )
            {
              v16 = *(_QWORD *)(v15 + 384);
              if ( v16 )
              {
                v17 = *(_QWORD *)(*(_QWORD *)(v16 + 280) + 16LL);
                if ( v17 )
                  LODWORD(v17) = *(_DWORD *)(v17 + 24);
                v32[v2] = v17;
                ++v31;
                v2 = (unsigned int)(v2 + 1);
              }
            }
          }
          LODWORD(v8) = v8 + 1;
          ++v13;
          if ( (unsigned int)v8 >= v3 )
            break;
        }
      }
      v18 = (CResource *)*((_QWORD *)this + 7);
      v30 *= 4;
      v31 *= 4;
      v19 = CResource::SendWithData(v18, &i, 0x10u, v32, 4 * (int)v2);
      v7 = v19;
      if ( v19 >= 0 )
      {
        v20 = (CResource *)*((_QWORD *)this + 4);
        v28 = 0LL;
        v21 = *((_QWORD *)this + 7);
        v27 = 117;
        HIDWORD(v28) = *(_DWORD *)(v21 + 24);
        v22 = CResource::Send(v20, &v27, 0xCu);
        v7 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800BF334, 1LL, v22, 0x160u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800BF334, 1LL, v19, 0x15Bu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BF334, 1LL, v6, 0x101u);
  }
  return v7;
}
