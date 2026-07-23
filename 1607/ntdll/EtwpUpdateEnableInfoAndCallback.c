/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x18002A94C
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002A1A4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x180053E80 (EtwpDisableTraceProviders.c)
 *     EtwpProcessNotification @ 0x180054288 (EtwpProcessNotification.c)
 * Callees:
 *     EtwpEventApiCallback @ 0x18002ACC0 (EtwpEventApiCallback.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800797C0 (EtwpGetUmProcessImageInfo.c)
 *     EtwpRegisterGuidsApiCallback @ 0x18008250C (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x18008688C (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpIsPrivateLoggerOn @ 0x1800872D0 (EtwpIsPrivateLoggerOn.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // si
  __int64 v6; // rdx
  char v7; // r9
  _BYTE *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rcx

  v2 = *(_DWORD *)(a2 + 72);
  v3 = 0;
  if ( v2 == 2 )
  {
LABEL_5:
    if ( *(_DWORD *)(a2 + 72) || v3 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
        EtwpRegisterGuidsApiCallback(a2, a1);
      else
        EtwpEventApiCallback(a2, a1);
    }
    return;
  }
  if ( *(__int16 *)(a2 + 78) >= 0 )
  {
    v6 = a1 + 104;
LABEL_4:
    v3 = *(_BYTE *)(v6 + 20);
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 96);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(a2 + 88);
    *(_BYTE *)(v6 + 21) = *(_BYTE *)(a2 + 76);
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(a2 + 80);
    *(_BYTE *)(v6 + 20) = v2 != 0;
    if ( (*(_WORD *)(a2 + 78) & 0x8000) != 0 )
    {
      EtwpUpdatePrivateEnableInfo(a1);
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || (*(_WORD *)(a1 + 98) & 0x8000) != 0 )
        EtwpGetUmProcessImageInfo(*(unsigned __int16 *)(a2 + 78), a1);
    }
    goto LABEL_5;
  }
  if ( v2 == 1 && !(unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78)) )
    return;
  v7 = *(_BYTE *)(a2 + 78);
  v8 = (_BYTE *)(a1 + 150);
  v9 = 0LL;
  while ( !*(v8 - 2) || *v8 != v7 )
  {
    v9 = (unsigned int)(v9 + 1);
    v8 += 24;
    if ( (unsigned int)v9 >= 4 )
    {
      v6 = 0LL;
      goto LABEL_17;
    }
  }
  v6 = a1 + 8 * (v9 + 2 * (v9 + 8));
LABEL_17:
  if ( v6 )
    goto LABEL_4;
  v10 = 0LL;
  v11 = (_BYTE *)(a1 + 148);
  do
  {
    if ( !*v11 )
    {
      v6 = a1 + 8 * (v10 + 2 * (v10 + 8));
      goto LABEL_21;
    }
    v10 = (unsigned int)(v10 + 1);
    v11 += 24;
  }
  while ( (unsigned int)v10 < 4 );
  v6 = 0LL;
LABEL_21:
  if ( v6 )
  {
    *(_BYTE *)(v6 + 22) = v7;
    goto LABEL_4;
  }
}
