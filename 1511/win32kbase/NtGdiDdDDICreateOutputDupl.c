/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00B8A00
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     UserScreenAccessCheck @ 0x1C006E870 (UserScreenAccessCheck.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00B6410 (GreIsInLowBox.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(unsigned __int64 a1, __int64 a2)
{
  char v3; // al
  BOOL IsCurrentProcessDwm; // r8d
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  char v9; // dl
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  int v17; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[4]; // [rsp+24h] [rbp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v20[3]; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+68h] [rbp-20h]

  v3 = gOutputDuplicationTestControl;
  if ( (gOutputDuplicationTestControl & 2) != 0 )
  {
    IsCurrentProcessDwm = 1;
  }
  else
  {
    IsCurrentProcessDwm = UserIsCurrentProcessDwm(a1, a2);
    v3 = gOutputDuplicationTestControl;
  }
  v5 = 8 * (v3 & 1);
  v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(4 * IsCurrentProcessDwm)) & 4;
  v7 = (unsigned int)v6 ^ v5;
  v17 = v7;
  if ( !UserIsCurrentProcessDwm(v7, v6) && (unsigned int)GreIsInLowBox() )
  {
    v17 |= 2u;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v8 = RtlCapabilityCheck(0LL, &DestinationString, v18);
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v18[0];
    if ( !v9 )
    {
      if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v17 |= 8u;
    }
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v11 = W32UserProbeAddress;
  v20[0] = *v11;
  v20[1] = v11[1];
  v20[2] = v11[2];
  v21 = *((_DWORD *)v11 + 12);
  v14 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C0104200)(v20, &v17);
  if ( v14 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck(v13, v12, v15) )
    {
      v14 = -1073741790;
LABEL_19:
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)&v20[0];
      LODWORD(DestinationString.Buffer) = 0;
      ((void (__fastcall *)(struct _UNICODE_STRING *, __int64))qword_1C0104208)(&DestinationString, 1LL);
      goto LABEL_20;
    }
    v17 |= 1u;
    v14 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C0104200)(v20, &v17);
    if ( v14 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  if ( v14 >= 0 )
  {
    v16 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
      v16 = W32UserProbeAddress;
    *v16 = HIDWORD(v20[0]);
  }
  return (unsigned int)v14;
}
