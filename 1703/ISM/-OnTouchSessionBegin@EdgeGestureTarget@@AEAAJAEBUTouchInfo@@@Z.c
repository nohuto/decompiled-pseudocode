/*
 * XREFs of ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180024398
 * Callers:
 *     ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180024250 (-OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x180023114 (-HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?GetOrientationBias@EdgeGestureTarget@@AEBA?AW4OrientationBias@@XZ @ 0x1800245F0 (-GetOrientationBias@EdgeGestureTarget@@AEBA-AW4OrientationBias@@XZ.c)
 *     ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180037630 (-GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerCon.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnTouchSessionBegin(EdgeGestureTarget *this, const struct TouchInfo *a2)
{
  bool v4; // r14
  unsigned int v5; // esi
  int v6; // ebp
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  _DWORD *v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // r10d
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int OrientationBias; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  char v25; // [rsp+68h] [rbp+10h] BYREF
  __int16 v26; // [rsp+6Ch] [rbp+14h]

  v4 = (a2->Flags & 0x4000) != 0;
  if ( (a2->Flags & 0x4000) != 0 )
  {
    v5 = *((_DWORD *)this + 26);
    v24 = v5;
  }
  else
  {
    v5 = 0;
    v24 = 0;
  }
  v6 = 0;
  v7 = 0;
  if ( !*((_WORD *)this + 24) )
  {
    v8 = GestureRecognizerReadConfigValue(3LL, &v25);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *((_WORD *)this + 24) = v26;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 533, v8);
    }
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 428;
LABEL_12:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v9, v7);
      return v7;
    }
    return v7;
  }
  *((_QWORD *)this + 5) = 1LL;
  if ( !v4 )
  {
    if ( !EdgeGestureComponent::HitTest(
            *((EdgeGestureComponent **)this + 7),
            *(_DWORD *)(*((_QWORD *)this + 7) + 52LL),
            *(_DWORD *)(*((_QWORD *)this + 7) + 56LL),
            &v24) )
      goto LABEL_31;
    v5 = v24;
  }
  if ( (v5 & 0x400) != 0 )
  {
    v10 = (v5 >> 14) & 1 | 2;
    if ( (v5 & 0x2000) == 0 )
      v10 = (v5 >> 14) & 1;
    v6 = v10 | 4;
    if ( (v5 & 0x1000) == 0 )
      v6 = v10;
    if ( (v5 & 0x800) != 0 )
      v6 |= 8u;
    if ( v6 )
    {
      v11 = (_DWORD *)*((_QWORD *)this + 7);
      v12 = v11[13];
      v13 = v11[14];
      v14 = (v12 < v11[11] ? 4 : 0) | 8;
      if ( v12 < v11[6] - v11[12] )
        v14 = v12 < v11[11] ? 4 : 0;
      v15 = v14 | 1;
      if ( v13 >= v11[9] )
        v15 = v14;
      v16 = v15 | 2;
      if ( v13 < v11[7] - v11[10] )
        v16 = v15;
      if ( (v16 & v6) == 0 )
        return v7;
    }
  }
LABEL_31:
  *((_DWORD *)this + 10) = 0;
  OrientationBias = EdgeGestureTarget::GetOrientationBias(this);
  if ( OrientationBias == 1 )
  {
    v18 = 32LL;
  }
  else
  {
    v18 = 48LL;
    if ( OrientationBias == 2 )
      v18 = 16LL;
  }
  LODWORD(v18) = v18 | 0x100;
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11), v18);
  v7 = v19;
  if ( v19 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v20 = 551;
    goto LABEL_38;
  }
  v21 = EdgeGestureTarget::GetOrientationBias(this);
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 56LL))(*((_QWORD *)this + 11), v21);
  v7 = v19;
  if ( v19 >= 0 )
  {
    v7 = 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v20 = 555;
LABEL_38:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v20, v19);
  }
LABEL_43:
  if ( (v7 & 0x80000000) == 0 )
  {
    v22 = *((unsigned __int16 *)this + 24);
    *((_DWORD *)this + 11) = v6;
    *((_DWORD *)this + 13) = a2->TimeStamp + v22;
    return v7;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 490;
    goto LABEL_12;
  }
  return v7;
}
