/*
 * XREFs of ?ReadStereoSupport@CDisplay@@AEAAJXZ @ 0x180058048
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDisplay::ReadStereoSupport(CDisplay *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  int v3; // eax
  unsigned int v4; // r14d
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h] BYREF
  int v8; // [rsp+3Ch] [rbp-44h]
  int v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+44h] [rbp-3Ch]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  int v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+64h] [rbp-1Ch]
  __int64 v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+74h] [rbp-Ch]

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v6 = 0LL;
  v15 = 0;
  *((_BYTE *)this + 900) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v3 = (**v1)(v1, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v6);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x186u);
  }
  else
  {
    v7 = *((_DWORD *)this + 217);
    v8 = *((_DWORD *)this + 218);
    v9 = *((_DWORD *)this + 219);
    v10 = *((_DWORD *)this + 220);
    v11 = *((_DWORD *)this + 221);
    v12 = *((_DWORD *)this + 222);
    v13 = *((_DWORD *)this + 223);
    v14 = 1;
    if ( (*(int (__fastcall **)(__int64, int *, int *, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, &v7, &v15, 0LL) >= 0
      && v7 == v15
      && v8 == (_DWORD)v16
      && v11 == HIDWORD(v17)
      && v14 == v19 )
    {
      *((_BYTE *)this + 900) = 1;
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
