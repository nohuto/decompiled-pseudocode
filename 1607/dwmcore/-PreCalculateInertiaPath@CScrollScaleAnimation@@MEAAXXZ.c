/*
 * XREFs of ?PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ @ 0x18015F4E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x18015E010 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18015E3B0 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

void __fastcall CScrollScaleAnimation::PreCalculateInertiaPath(CScrollScaleAnimation *this)
{
  __int64 v2; // xmm1_8
  int v3; // ecx
  __int64 *v4; // rax
  float v5; // xmm6_4
  unsigned int v6; // xmm0_4
  double (__fastcall *v7)(CScrollScaleAnimation *); // rax
  float v8; // xmm1_4
  double v9; // xmm0_8
  __int64 v10; // rax
  int v11; // ecx
  const WCHAR *v12; // rax
  int v13; // r11d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  UINT32 cData; // r10d
  CScrollScaleAnimation *v17; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  CScrollScaleAnimation **v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+74h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-29h] BYREF
  char *v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+94h] [rbp-Dh]
  char *v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A4h] [rbp+3h]
  char *v29; // [rsp+A8h] [rbp+7h]
  int v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B4h] [rbp+13h]
  char *v32; // [rsp+B8h] [rbp+17h]
  int v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C4h] [rbp+23h]

  if ( (*(unsigned __int8 (__fastcall **)(CScrollScaleAnimation *))(*(_QWORD *)this + 192LL))(this) )
  {
    v2 = *((_QWORD *)this + 68);
    v3 = *((_DWORD *)this + 138);
    v4 = (__int64 *)*((_QWORD *)this + 54);
    v17 = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_DWORD *)this + 138) = 0;
    if ( v4 )
      v4 = (__int64 *)*v4;
    v4[74] = v2;
    *((_DWORD *)v4 + 150) = v3;
  }
  v5 = *((float *)this + 92);
  *((_DWORD *)this + 92) = 0;
  *(float *)&v6 = CScrollAnimation::GetVelocity(this) + v5;
  v7 = *(double (__fastcall **)(CScrollScaleAnimation *))(*(_QWORD *)this + 264LL);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v6) & _xmm);
  *((float *)this + 96) = fminf(v8, *((float *)this + 99))
                        * (float)(int)((__PAIR64__(*(float *)&v6 > 0.0, v6) - COERCE_UNSIGNED_INT(0.0)) >> 32);
  v9 = v7(this);
  v10 = *(_QWORD *)this;
  *((_DWORD *)this + 94) = LODWORD(v9);
  *(float *)&v9 = (*(float (__fastcall **)(CScrollScaleAnimation *))(v10 + 280))(this);
  *((_DWORD *)this + 102) = LODWORD(v9);
  if ( *(float *)&v9 < 0.001 )
  {
    *((float *)this + 94) = (*(float (__fastcall **)(CScrollScaleAnimation *))(*(_QWORD *)this + 256LL))(this);
    *((_DWORD *)this + 102) = 981668463;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v11 = *((_DWORD *)this + 72);
    v21 = 0;
    v19 = &v17;
    v20 = 8;
    v17 = this;
    v12 = ScrollAxisToString(v11);
    TlgCreateWsz(&pDesc, v12);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v23 = (char *)this + 388;
    v24 = v13;
    v26 = (char *)this + 384;
    v27 = v13;
    v29 = (char *)this + 376;
    v30 = v13;
    v32 = (char *)this + 408;
    v33 = v13;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4DF4, v14, v15, cData, &pData);
  }
}
