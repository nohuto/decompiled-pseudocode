/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x1800720D0
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007341C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009CBEC (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        __int64 a2,
        char a3,
        int a4,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a5,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a6)
{
  __int128 v10; // xmm0
  struct MIL_CHANNEL__ *v11; // r8
  __int128 v12; // xmm1
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-69h]
  __int64 v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h]
  _QWORD v21[2]; // [rsp+40h] [rbp-49h] BYREF
  int v22; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+54h] [rbp-35h]
  int v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+5Ch] [rbp-2Dh]
  __int64 v26; // [rsp+60h] [rbp-29h]
  int v27; // [rsp+68h] [rbp-21h]
  _BYTE v28[4]; // [rsp+6Ch] [rbp-1Dh] BYREF
  __int128 v29; // [rsp+70h] [rbp-19h]
  __int128 v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+7h]

  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  v22 = 105;
  memset_0(v28, 0, 0x2CuLL);
  v19 = 0LL;
  v20 = 0LL;
  memset(v21, 0, 12);
  if ( !*((_DWORD *)this + 44) )
  {
    v14 = -2003292404;
    goto LABEL_14;
  }
  v23 = *(_DWORD *)(*((_QWORD *)this + 4) + 24LL);
  if ( !v23 )
    AssertW(0LL, L"cmd.Handle", L"CMagnifier::OnCaptureRTBitsWorker", L"windows\\dwm\\udwm\\magnifier.cpp", 0x20Au);
  v10 = *(_OWORD *)a5;
  v11 = (struct MIL_CHANNEL__ *)*((_QWORD *)this + 2);
  v12 = *((_OWORD *)a5 + 1);
  v24 = *((_DWORD *)this + 45);
  v25 = *((_DWORD *)this + 46);
  v29 = v10;
  *(_QWORD *)&v10 = *((_QWORD *)a5 + 4);
  v26 = a2;
  v30 = v12;
  v31 = v10;
  v27 = a3 & 1 | (a4 != 0 ? 2 : 0);
  v13 = MilChannel_SendSyncCommand(&v22, 0x48u, v11, (struct MIL_MESSAGE *)&v19, 0x1Cu);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( (_DWORD)v19 == 17 )
    {
      v14 = v20;
      if ( (int)v20 >= 0 )
      {
        v15 = *((_DWORD *)this + 44);
        *(_QWORD *)((char *)v21 + 4) = 0LL;
        *((_DWORD *)a6 + 6) = v15;
        *((_DWORD *)a6 + 7) = *((_DWORD *)this + 47);
        *((_DWORD *)a6 + 8) = *((_DWORD *)this + 45);
        v16 = *((_DWORD *)this + 46);
        *((_DWORD *)a6 + 2) = 0;
        *(_QWORD *)((char *)a6 + 12) = 0LL;
        *((_DWORD *)a6 + 9) = v16;
        *((_DWORD *)a6 + 5) = v21[0];
        *((_DWORD *)a6 + 10) = HIDWORD(v20);
        goto LABEL_14;
      }
      v18 = 549;
    }
    else
    {
      v14 = -2003303421;
      v18 = 541;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1800AA990, 8LL, v14, v18);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1800AA990, 8LL, v13, 0x218u);
LABEL_14:
  MilChannel_FreeSyncCommandReplay(*((struct MIL_CHANNEL__ **)this + 2), (struct MIL_MESSAGE *)&v19, 0x1Cu);
  return v14;
}
