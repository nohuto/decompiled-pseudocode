/*
 * XREFs of ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076D74
 * Callers:
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18007691C (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::TelemetrySpatialInputController_Removed_(
        RawInputProvidersTracing *this,
        const WCHAR *a2)
{
  const struct _TlgProvider_t *v2; // rdi
  PCWSTR v3; // rbx
  void *v4; // rdx
  __int64 v5; // rax
  PCWSTR StringRawBuffer; // rax
  PCWSTR v7; // rdx
  __int64 v8; // rcx
  PCWSTR v9; // rax
  PCWSTR v10; // rdx
  __int64 v11; // rcx
  PCWSTR v12; // rax
  PCWSTR v13; // rdx
  __int64 v14; // rcx
  PCWSTR v15; // rax
  PCWSTR v16; // rdx
  __int64 v17; // rcx
  PCWSTR v18; // rax
  __int64 v19; // rcx
  void *v20; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v23; // [rsp+50h] [rbp-B0h]
  HSTRING v24; // [rsp+58h] [rbp-A8h]
  HSTRING v25; // [rsp+60h] [rbp-A0h]
  HSTRING v26; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  void *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  PCWSTR v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  PCWSTR v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  PCWSTR v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  PCWSTR v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  PCWSTR v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]

  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties((BYTE *)&v20, a2);
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*((_QWORD *)v2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = (PCWSTR)&unk_1800AE6CC;
    v4 = &unk_1800AE6CC;
    LODWORD(v5) = 0;
    if ( v20 )
    {
      v4 = v20;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_WORD *)v20 + v5) );
    }
    v28 = v4;
    v29 = 2 * v5 + 2;
    v30 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v7 = (PCWSTR)&unk_1800AE6CC;
    LODWORD(v8) = 0;
    if ( StringRawBuffer )
    {
      v7 = StringRawBuffer;
      v8 = -1LL;
      do
        ++v8;
      while ( StringRawBuffer[v8] );
    }
    v31 = v7;
    v32 = 2 * v8 + 2;
    v34 = &v22;
    v33 = 0;
    v35 = 16LL;
    v9 = WindowsGetStringRawBuffer(v23, 0LL);
    v10 = (PCWSTR)&unk_1800AE6CC;
    LODWORD(v11) = 0;
    if ( v9 )
    {
      v10 = v9;
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    v36 = v10;
    v37 = 2 * v11 + 2;
    v38 = 0;
    v12 = WindowsGetStringRawBuffer(v24, 0LL);
    v13 = (PCWSTR)&unk_1800AE6CC;
    LODWORD(v14) = 0;
    if ( v12 )
    {
      v13 = v12;
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
    }
    v39 = v13;
    v40 = 2 * v14 + 2;
    v41 = 0;
    v15 = WindowsGetStringRawBuffer(v25, 0LL);
    v16 = (PCWSTR)&unk_1800AE6CC;
    LODWORD(v17) = 0;
    if ( v15 )
    {
      v16 = v15;
      v17 = -1LL;
      do
        ++v17;
      while ( v15[v17] );
    }
    v42 = v16;
    v43 = 2 * v17 + 2;
    v44 = 0;
    v18 = WindowsGetStringRawBuffer(v26, 0LL);
    LODWORD(v19) = 0;
    if ( v18 )
    {
      v3 = v18;
      v19 = -1LL;
      do
        ++v19;
      while ( v18[v19] );
    }
    v45 = v3;
    v46 = 2 * v19 + 2;
    v47 = 0;
    TlgWrite(v2, &unk_1800B9ACE, 0LL, 0LL, 9u, &pData);
  }
  WindowsDeleteString(v26);
  v26 = 0LL;
  WindowsDeleteString(v25);
  v25 = 0LL;
  WindowsDeleteString(v24);
  v24 = 0LL;
  WindowsDeleteString(v23);
  v23 = 0LL;
  WindowsDeleteString(string);
}
