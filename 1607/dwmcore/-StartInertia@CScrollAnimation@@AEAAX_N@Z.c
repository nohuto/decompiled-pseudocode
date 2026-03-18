/*
 * XREFs of ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4
 * Callers:
 *     ?GetInertiaValue@CScrollAnimation@@AEAAMXZ @ 0x18015DF38 (-GetInertiaValue@CScrollAnimation@@AEAAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z @ 0x180149D28 (-AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 *     ?HasInteraction@CScrollAnimation@@IEBA_NXZ @ 0x18015E09C (-HasInteraction@CScrollAnimation@@IEBA_NXZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18015E3B0 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?StartInertia@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@@Z @ 0x180168B10 (-StartInertia@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@@Z.c)
 */

void __fastcall CScrollAnimation::StartInertia(CScrollAnimation *this, unsigned __int8 a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  float CurrentValue; // xmm0_4
  int v10; // xmm0_4
  int v11; // r8d
  char v12; // dl
  __int64 v13; // rcx
  bool v14; // cl
  float v15; // xmm2_4
  float v16; // xmm7_4
  bool v17; // zf
  float v18; // xmm0_4
  __int64 *v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  const WCHAR *v22; // rax
  __int64 v23; // r10
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  float v26; // [rsp+38h] [rbp-59h] BYREF
  CScrollAnimation *v27; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  CScrollAnimation **v29; // [rsp+68h] [rbp-29h]
  __int64 v30; // [rsp+70h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-19h] BYREF
  char *v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  char *v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+A0h] [rbp+Fh]
  float *v36; // [rsp+A8h] [rbp+17h]
  __int64 v37; // [rsp+B0h] [rbp+1Fh]

  v2 = (__int64 *)*((_QWORD *)this + 54);
  if ( v2 )
    v5 = *v2;
  else
    v5 = 0LL;
  v6 = *((_DWORD *)this + 72);
  *((_QWORD *)this + 55) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  CurrentValue = CInteractionTracker::GetCurrentValue((float *)v5, v6);
  *((float *)this + 125) = CurrentValue;
  *((float *)this + 97) = CurrentValue;
  *((float *)this + 100) = CurrentValue;
  *((float *)this + 102) = CurrentValue;
  v10 = 0;
  *((_DWORD *)this + 95) = 2139095039;
  *((_DWORD *)this + 105) = 0;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        v10 = *(_DWORD *)(v5 + 200);
    }
    else
    {
      v10 = *(_DWORD *)(v5 + 168);
    }
  }
  else
  {
    v10 = *(_DWORD *)(v5 + 164);
  }
  *((_DWORD *)this + 93) = v10;
  CInteractionTracker::AddPendingStateChange(v7, 2);
  *((_BYTE *)this + 468) &= 0xCFu;
  v12 = *((_BYTE *)this + 468);
  *((_DWORD *)this + 124) = 0;
  if ( !a2 )
  {
    v13 = *(_QWORD *)(v5 + 544);
    if ( v13 )
      v14 = (*(_BYTE *)(*((int *)this + 72) + v13 + 428) & 2) != 0;
    else
      v14 = 1;
    *((_BYTE *)this + 468) = v12 ^ (v12 ^ (8 * v14)) & 8;
  }
  CInteractionTracker::GetScrollRange((_DWORD *)v5, *((_DWORD *)this + 72), &v26, &v27);
  v15 = *((float *)this + 97);
  v16 = v26;
  if ( v26 > v15 )
  {
    *((_DWORD *)this + 95) = 0;
LABEL_30:
    *((_DWORD *)this + 105) = 1;
    goto LABEL_34;
  }
  if ( v15 > *(float *)&v27 )
  {
    *((_DWORD *)this + 95) = 0;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 468) & 8) != 0
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 93)) & _xmm) >= 0.0000011920929 )
  {
    (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 240LL))(this);
  }
  else
  {
    *((float *)this + 102) = v15;
    *((_DWORD *)this + 94) = 0;
  }
  if ( !a2 && (*((_BYTE *)this + 468) & 8) != 0 )
    *((_DWORD *)this + 124) = CScrollAnimation::CheckInertiaModifiers((__int64)this);
  if ( !*((_DWORD *)this + 124) )
  {
    v17 = (*((_BYTE *)this + 468) & 8) == 0;
    v18 = *((float *)this + 102);
    *((float *)this + 100) = v18;
    if ( !v17 )
    {
      if ( v16 > v18 )
      {
        *((float *)this + 95) = (*(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 256LL))(this);
        goto LABEL_30;
      }
      if ( v18 <= *(float *)&v27 )
        goto LABEL_34;
      *((float *)this + 95) = (*(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 256LL))(this);
LABEL_33:
      *((_DWORD *)this + 105) = 2;
    }
  }
LABEL_34:
  if ( !a2 && CScrollAnimation::HasInteraction(this) )
  {
    v19 = (__int64 *)*((_QWORD *)this + 54);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    CChainingHelper::StartInertia(v20 + 376, *(_QWORD *)(v5 + 552), *((unsigned int *)this + 72));
  }
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 106) = 2;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v21 = *((_DWORD *)this + 72);
    v29 = &v27;
    v27 = this;
    v30 = 8LL;
    v22 = ScrollAxisToString(v21);
    TlgCreateWsz(&pDesc, v22);
    LODWORD(v26) = a2;
    v36 = &v26;
    v32 = (char *)this + 384;
    v33 = v23;
    v34 = (char *)this + 388;
    v35 = v23;
    v37 = v23;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4C94, v24, v25, 7u, &pData);
  }
}
