/*
 * XREFs of ?ValueAtTimeInertiaModifier@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015F140
 * Callers:
 *     ?ValueAtTime@CScrollAnimation@@IEAAMM@Z @ 0x18015EEE0 (-ValueAtTime@CScrollAnimation@@IEAAMM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

float __fastcall CScrollAnimation::ValueAtTimeInertiaModifier(CScrollAnimation *this, float a2, bool *a3)
{
  __int64 v3; // rdx
  bool v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  float v14; // [rsp+30h] [rbp-69h] BYREF
  float v15; // [rsp+38h] [rbp-61h] BYREF
  BOOL v16; // [rsp+40h] [rbp-59h] BYREF
  CScrollAnimation *v17; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  CScrollAnimation **v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  float *v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+8Ch] [rbp-Dh]
  float *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  __int64 v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B8h] [rbp+1Fh]
  int v33; // [rsp+BCh] [rbp+23h]
  BOOL *v34; // [rsp+C0h] [rbp+27h]
  int v35; // [rsp+C8h] [rbp+2Fh]
  int v36; // [rsp+CCh] [rbp+33h]

  v15 = a2;
  v14 = (*(float (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 61) + 24LL))(
          *((_QWORD *)this + 61),
          v3,
          *((_QWORD *)this + 60),
          *((_QWORD *)this + 59));
  v6 = a2 > 0.0
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 32LL))(*((_QWORD *)this + 61))
     || v15 >= *((float *)this + 127));
  *a3 = v6;
  if ( v6 )
    v14 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 48LL))(*((_QWORD *)this + 61));
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v7 = *((_QWORD *)this + 61);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v17;
    v22 = &v14;
    v25 = &v15;
    v17 = this;
    v20 = 8;
    v23 = 4;
    v26 = 4;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    v9 = *((_QWORD *)this + 61);
    v30 = 0;
    v28 = v8 + 8;
    v29 = 4;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    v33 = 0;
    v36 = 0;
    v31 = v10;
    v16 = *a3;
    v34 = &v16;
    v32 = 4;
    v35 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4C10, v11, v12, 8u, &pData);
  }
  return v14;
}
