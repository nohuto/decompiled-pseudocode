/*
 * XREFs of RaidUnitHandleSpecialErrorConditions @ 0x1C0011174
 * Callers:
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDDD @ 0x1C0036280 (WPP_SF_qqDDD.c)
 */

char __fastcall RaidUnitHandleSpecialErrorConditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r8
  unsigned __int8 v4; // r9
  unsigned __int8 v5; // si
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // di
  _QWORD *v10; // rax
  char v11; // dl
  _BYTE *v12; // rcx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int8 v16; // [rsp+78h] [rbp+10h] BYREF
  _BYTE *v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0LL;
  v4 = 0;
  v17 = 0LL;
  v5 = 0;
  v16 = 0;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v2 + 20) )
    {
      GetSrbScsiData(v2, 0LL, 0LL, 0LL, &v17, &v16);
      v3 = v17;
      v4 = v16;
    }
  }
  else
  {
    v3 = *(_BYTE **)(v2 + 32);
    v4 = *(_BYTE *)(v2 + 11);
  }
  LOBYTE(v10) = *(_BYTE *)(v2 + 3);
  if ( (char)v10 >= 0 || !v3 )
    return (char)v10;
  v11 = 0;
  if ( v4 )
  {
    v12 = &v3[v4];
    v10 = v3 + 8;
    if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
    {
      if ( v10 > (_QWORD *)v12 )
        goto LABEL_16;
      v6 = v3[2];
      v5 = v3[1] & 0xF;
      v7 = v3[3];
      goto LABEL_15;
    }
    if ( v10 <= (_QWORD *)v12 )
    {
      v13 = (unsigned __int8)v3[7] + 8;
      if ( v13 > v4 )
        v13 = v4;
      v5 = v3[2] & 0xF;
      v14 = (unsigned __int64)&v3[v13];
      if ( (unsigned __int64)(v3 + 13) > v14 )
        v6 = 0;
      else
        v6 = v3[12];
      LOBYTE(v10) = (_BYTE)v3 + 14;
      if ( (unsigned __int64)(v3 + 14) > v14 )
        v7 = 0;
      else
        v7 = v3[13];
LABEL_15:
      v11 = 1;
    }
  }
LABEL_16:
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v6, v5, a1, v2, v5, v6, v7);
    }
    v10 = &unk_1C003F370;
    if ( RaidUnitHandleReportLunsDataChanged )
    {
      while ( *(_BYTE *)v10 != v5 || *((_BYTE *)v10 + 1) != v6 || *((_BYTE *)v10 + 2) != v7 )
      {
        v10 += 2;
        if ( !v10[1] )
          return (char)v10;
      }
      LOBYTE(v10) = ((__int64 (__fastcall *)(__int64, __int64))v10[1])(a1, a2);
    }
  }
  return (char)v10;
}
