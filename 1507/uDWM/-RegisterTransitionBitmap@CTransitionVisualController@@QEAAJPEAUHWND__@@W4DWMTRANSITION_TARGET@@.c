/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18008CE48
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A078 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18006BA3C (-Create@CBitmapSource@@SAJIIIIPEBXQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        __int128 *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  volatile signed __int32 *v12; // rdi
  bool v13; // r15
  signed int v14; // r10d
  __int64 v15; // rax
  signed int v16; // edx
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // ebx
  CBaseObject *v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  unsigned int v26; // edx
  int v27; // esi
  __int64 v28; // rcx
  int v29; // eax
  CBaseObject *v30; // rcx
  CBaseObject *v32; // [rsp+40h] [rbp-61h] BYREF
  void *v33; // [rsp+48h] [rbp-59h]
  __int128 *v34; // [rsp+50h] [rbp-51h]
  _BYTE v35[48]; // [rsp+58h] [rbp-49h] BYREF
  CBaseObject *v36; // [rsp+88h] [rbp-19h]

  v34 = a6;
  v33 = a7;
  v12 = 0LL;
  v32 = 0LL;
  memset_0(v35, 0, 0x38uLL);
  v13 = a3 == 22;
  v14 = a4[2] - *a4;
  v15 = (unsigned int)v14;
  if ( v14 < 0 )
    v15 = 0LL;
  v16 = a4[3] - a4[1];
  v17 = (unsigned int)v16;
  if ( v16 < 0 )
    v17 = 0LL;
  v18 = v15 * v17;
  if ( v18 > 0xFFFFFFFF || (v19 = 4LL * (unsigned int)v18, v19 > 0xFFFFFFFF) || a8 < (unsigned int)v19 )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xC1Au);
LABEL_32:
    if ( v13 )
    {
      v30 = *(CBaseObject **)(a1 + 184);
      if ( v30 )
      {
        CBaseObject::Release(v30);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
    }
    else if ( v36 )
    {
      CBaseObject::Release(v36);
    }
    goto LABEL_37;
  }
  if ( v14 < 0 )
    v14 = 0;
  if ( v16 < 0 )
    v16 = 0;
  v20 = CBitmapSource::Create(
          v14,
          v16,
          v14,
          v16,
          v33,
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v32);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v20, 0xC07u);
    v12 = (volatile signed __int32 *)v32;
    goto LABEL_29;
  }
  if ( a3 == 22 )
  {
    v22 = *(CBaseObject **)(a1 + 184);
    if ( v22 )
      CBaseObject::Release(v22);
    v12 = (volatile signed __int32 *)v32;
    *(_QWORD *)(a1 + 184) = v32;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)v32;
    }
LABEL_29:
    if ( v21 >= 0 )
      goto LABEL_37;
    goto LABEL_32;
  }
  v12 = (volatile signed __int32 *)v32;
  v23 = *a5;
  *(_QWORD *)v35 = a2;
  *(_DWORD *)&v35[8] = a3;
  v36 = v32;
  v24 = *v34;
  *(_OWORD *)&v35[12] = v23;
  *(_OWORD *)&v35[28] = v24;
  if ( v32 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v32 + 2);
    v12 = (volatile signed __int32 *)v32;
  }
  v25 = *(unsigned int *)(a1 + 176);
  v26 = v25 + 1;
  if ( (int)v25 + 1 < (unsigned int)v25 )
  {
    v27 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v21 = -2147024362;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v27, 0xC15u);
    goto LABEL_29;
  }
  v21 = 0;
  if ( v26 <= *(_DWORD *)(a1 + 172) )
  {
    v28 = *(_QWORD *)(a1 + 152) + 56 * v25;
    *(_OWORD *)v28 = *(_OWORD *)v35;
    *(_OWORD *)(v28 + 16) = *(_OWORD *)&v35[16];
    *(_OWORD *)(v28 + 32) = *(_OWORD *)&v35[32];
    *(_QWORD *)(v28 + 48) = v36;
    *(_DWORD *)(a1 + 176) = v26;
    goto LABEL_37;
  }
  v29 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 0x38u, 1, v35);
  v27 = v29;
  if ( v29 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0xC0u);
  v21 = v27;
  if ( v27 < 0 )
    goto LABEL_28;
LABEL_37:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return (unsigned int)v21;
}
