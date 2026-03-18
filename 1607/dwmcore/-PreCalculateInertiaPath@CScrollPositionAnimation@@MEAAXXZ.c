/*
 * XREFs of ?PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ @ 0x18015FC20
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

void __fastcall CScrollPositionAnimation::PreCalculateInertiaPath(CScrollPositionAnimation *this)
{
  float v1; // xmm6_4
  unsigned int v3; // xmm0_4
  double (__fastcall *v4)(CScrollPositionAnimation *); // rax
  float v5; // xmm1_4
  double v6; // xmm0_8
  __int64 v7; // rax
  int v8; // ecx
  const WCHAR *v9; // rax
  int v10; // r10d
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  CScrollPositionAnimation *v13; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  CScrollPositionAnimation **v15; // [rsp+68h] [rbp-29h]
  int v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+74h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-19h] BYREF
  char *v19; // [rsp+88h] [rbp-9h]
  int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  char *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  char *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]

  v1 = *((float *)this + 92);
  *((_DWORD *)this + 92) = 0;
  *(float *)&v3 = CScrollAnimation::GetVelocity(this) + v1;
  v4 = *(double (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)this + 264LL);
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v3) & _xmm);
  *((float *)this + 96) = fminf(v5, *((float *)this + 99))
                        * (float)(int)((__PAIR64__(*(float *)&v3 > 0.0, v3) - COERCE_UNSIGNED_INT(0.0)) >> 32);
  v6 = v4(this);
  v7 = *(_QWORD *)this;
  *((_DWORD *)this + 94) = LODWORD(v6);
  *((float *)this + 102) = (*(float (__fastcall **)(CScrollPositionAnimation *))(v7 + 280))(this);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v8 = *((_DWORD *)this + 72);
    v17 = 0;
    v15 = &v13;
    v13 = this;
    v16 = 8;
    v9 = ScrollAxisToString(v8);
    TlgCreateWsz(&pDesc, v9);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = (char *)this + 384;
    v20 = v10;
    v22 = (char *)this + 376;
    v23 = v10;
    v25 = (char *)this + 408;
    v26 = v10;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4EAA, v11, v12, 7u, &pData);
  }
}
