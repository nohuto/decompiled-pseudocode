/*
 * XREFs of ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C0072B54
 * Callers:
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00733B8 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0073750 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        __int64 a2,
        char a3,
        struct _GUID *a4)
{
  unsigned __int8 v4; // r8
  const GUID *v5; // r9
  __int64 v6; // r10
  const GUID *v7; // r11
  unsigned __int16 *v8; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  const struct _TlgProvider_t *v11; // rcx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  if ( *((_BYTE *)this + 24) && *((_QWORD *)this + 2) )
  {
    if ( a3 )
    {
      a2 = 264LL * (*(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x3F);
      this = *(VIDMM_COMMIT_TELEMETRY **)(*(_QWORD *)this + 40832LL);
    }
    if ( (unsigned int)dword_1C0027010 > 5 )
    {
      if ( TlgKeywordOn(this, a2) )
      {
        v8 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)&v5->Data1 + 24LL) + 976LL);
        v19 = v22;
        v20 = 2LL;
        v9 = *v8;
        v21 = *((_QWORD *)v8 + 1);
        v23 = v6 + 16;
        v22[0] = v9;
        v10 = *(_DWORD *)(v6 + 72);
        v13 = v4;
        v25 = &v13;
        v22[1] = 0;
        v17 = v10 & 0x1F;
        v27 = &v17;
        v24 = 8LL;
        v15 = (v10 >> 6) & 0x1F;
        v29 = &v15;
        v26 = 4LL;
        v12 = (v10 >> 12) & 0x1F;
        v31 = &v12;
        v14 = (v10 >> 18) & 0x1F;
        v11 = (const struct _TlgProvider_t *)(HIBYTE(v10) & 0x1F);
        v28 = 4LL;
        v33 = &v14;
        v35 = &v16;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v16 = (int)v11;
        v36 = 4LL;
        TlgWrite(v11, &unk_1C00208D5, v7, v5, 0xBu, &pData);
      }
    }
  }
}
