/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180027C50
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019C60 (--1CAudioStream@@MEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

void __fastcall AudioSrvVolumeTelemetryStreamVolume::Fire(
        AudioSrvVolumeTelemetryStreamVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // r10
  const CHAR *v5; // rcx
  const CHAR *v6; // rdx
  __int64 v7; // rax
  bool v8; // cf
  const WCHAR *v9; // rcx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v17; // [rsp+40h] [rbp-69h]
  void *v18; // [rsp+50h] [rbp-59h] BYREF
  int v19; // [rsp+58h] [rbp-51h]
  int v20; // [rsp+5Ch] [rbp-4Dh]
  void *v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+68h] [rbp-41h]
  int v23; // [rsp+6Ch] [rbp-3Dh]
  const CHAR *v24; // [rsp+70h] [rbp-39h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  const WCHAR *v27; // [rsp+80h] [rbp-29h]
  int v28; // [rsp+88h] [rbp-21h]
  int v29; // [rsp+8Ch] [rbp-1Dh]
  char *v30; // [rsp+90h] [rbp-19h]
  __int64 v31; // [rsp+98h] [rbp-11h]
  const WCHAR *v32; // [rsp+A0h] [rbp-9h]
  int v33; // [rsp+A8h] [rbp-1h]
  int v34; // [rsp+ACh] [rbp+3h]
  char *v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+B8h] [rbp+Fh]
  char *v37; // [rsp+C0h] [rbp+17h]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]
  __int64 *v39; // [rsp+D0h] [rbp+27h]
  __int64 v40; // [rsp+D8h] [rbp+2Fh]
  __int64 *v41; // [rsp+E0h] [rbp+37h]
  __int64 v42; // [rsp+E8h] [rbp+3Fh]
  __int64 v43; // [rsp+118h] [rbp+6Fh] BYREF

  v43 = a2;
  v4 = a3;
  if ( dword_1800CA040 > 4u
    && (qword_1800CA050 & 0x400000000000LL) != 0
    && (qword_1800CA058 & 0x400000000000LL) == qword_1800CA058 )
  {
    v5 = (char *)this + 32;
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const CHAR **)v5;
    v6 = MultiByteStr;
    LODWORD(v7) = 0;
    if ( v5 )
    {
      v6 = v5;
      v7 = -1LL;
      do
        ++v7;
      while ( v5[v7] );
    }
    v8 = *((_QWORD *)this + 11) < 8uLL;
    v25 = v7 + 1;
    v9 = (const WCHAR *)((char *)this + 64);
    v24 = v6;
    v26 = 0;
    if ( !v8 )
      v9 = *(const WCHAR **)v9;
    v10 = &pwsz;
    LODWORD(v11) = 0;
    v12 = &pwsz;
    if ( v9 )
    {
      v12 = v9;
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    v27 = v12;
    v28 = 2 * v11 + 2;
    v13 = (const WCHAR *)((char *)this + 104);
    v8 = *((_QWORD *)this + 16) < 8uLL;
    v30 = (char *)this + 96;
    v29 = 0;
    v31 = 8LL;
    if ( !v8 )
      v13 = *(const WCHAR **)v13;
    LODWORD(v14) = 0;
    if ( v13 )
    {
      v10 = v13;
      v14 = -1LL;
      do
        ++v14;
      while ( v13[v14] );
    }
    v32 = v10;
    v33 = 2 * v14 + 2;
    v35 = (char *)this + 136;
    v37 = (char *)this + 140;
    v39 = &v15;
    v41 = &v43;
    v34 = 0;
    v36 = 4LL;
    v38 = 4LL;
    v15 = v4;
    v40 = 8LL;
    v42 = 8LL;
    v16[1] = 4;
    v18 = off_1800CA048;
    v16[0] = ((unsigned int)&unk_1800A7AF5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v17 = 0x400000000000LL;
    v19 = *(unsigned __int16 *)off_1800CA048;
    v21 = &unk_1800A7B00;
    v20 = 2;
    v22 = 165;
    v23 = 1;
    EtwEventWriteTransfer(qword_1800CA060, v16, 0LL, 0LL, 10, &v18);
  }
}
