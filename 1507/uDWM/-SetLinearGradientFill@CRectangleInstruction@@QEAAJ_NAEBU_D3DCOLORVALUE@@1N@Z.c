/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x180039AB4
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003A4D0 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x180017A04 (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4,
        double a5)
{
  char *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  CResource *v9; // rcx
  int v10; // eax
  int appended; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v16[4]; // [rsp+34h] [rbp-3Dh] BYREF
  double v17; // [rsp+38h] [rbp-39h]
  __int128 v18; // [rsp+40h] [rbp-31h]
  __int128 v19; // [rsp+50h] [rbp-21h]
  int v20; // [rsp+64h] [rbp-Dh]
  int v21; // [rsp+68h] [rbp-9h]
  int v22; // [rsp+6Ch] [rbp-5h]
  int v23; // [rsp+70h] [rbp-1h]
  int v24; // [rsp+74h] [rbp+3h]
  int v25; // [rsp+78h] [rbp+7h]
  double v26; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+98h] [rbp+27h] BYREF
  __int128 v29; // [rsp+A0h] [rbp+2Fh]

  v15 = 249;
  memset_0(v16, 0, 0x48uLL);
  v6 = (char *)this + 16;
  if ( *((_QWORD *)this + 2)
    || (v7 = CResource::Create(0x45u, *((_QWORD *)this + 5), (CBaseObject **)this + 2), v8 = v7, v7 >= 0) )
  {
    v9 = *(CResource **)v6;
    v22 = 0;
    v24 = 0;
    v20 = 0;
    v21 = 0;
    v28 = 0LL;
    v29 = xmmword_1800A3408;
    v23 = 1;
    v25 = 48;
    v26 = DOUBLE_1_0;
    v27 = xmmword_1800A33F8;
    v17 = a5;
    v18 = 0LL;
    v19 = _xmm;
    v10 = CResource::BeginCommand(v9, &v15, 0x4Cu, 0x30u);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xAAu);
    }
    else
    {
      appended = MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(*(_QWORD *)v6 + 16LL), &v28, 0x18u);
      v8 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0xABu);
      }
      else
      {
        v12 = MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(*(_QWORD *)v6 + 16LL), &v26, 0x18u);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xACu);
        }
        else
        {
          v13 = MilChannel_EndCommand(*(struct MIL_CHANNEL__ **)(*(_QWORD *)v6 + 16LL));
          v8 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xADu);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x8Bu);
  }
  return v8;
}
