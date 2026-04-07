/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x18007B368
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007C330 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        __int64 a2,
        char a3,
        int a4,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a5,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a6)
{
  int v7; // r8d
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax

  if ( *((_DWORD *)this + 44) )
  {
    v7 = (a3 & 1) != 0;
    if ( a4 )
      v7 |= 2u;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, _DWORD, const struct MAGN_UPDATE_TEXTURES_PARAM *, char *))(**((_QWORD **)this + 2) + 712LL))(
           *((_QWORD *)this + 2),
           *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
           *((unsigned int *)this + 45),
           *((unsigned int *)this + 46),
           a2,
           v7,
           0,
           a5,
           (char *)a6 + 40);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a6 + 6) = *((_DWORD *)this + 44);
      *((_DWORD *)a6 + 7) = *((_DWORD *)this + 47);
      *((_DWORD *)a6 + 8) = *((_DWORD *)this + 45);
      v10 = *((_DWORD *)this + 46);
      *((_DWORD *)a6 + 5) = 0;
      *((_DWORD *)a6 + 2) = 0;
      *(_QWORD *)((char *)a6 + 12) = 0LL;
      *((_DWORD *)a6 + 9) = v10;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A9178, 8LL, v8, 0x1FFu);
    }
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v9;
}
