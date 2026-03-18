/*
 * XREFs of PiDevCfgResolveDriverDependencies @ 0x140510598
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x140510598 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PiDevCfgResolveDriverDependencies @ 0x140510598 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PnpCheckDriverDependencies @ 0x140602FE4 (PnpCheckDriverDependencies.c)
 *     PnpGetStableSystemBootTime @ 0x140603480 (PnpGetStableSystemBootTime.c)
 */

__int64 __fastcall PiDevCfgResolveDriverDependencies(__int64 a1, _BYTE *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // ecx
  int ObjectProperties; // ebx
  int v8; // eax
  wchar_t *Buffer; // rax
  _QWORD **v10; // rsi
  _QWORD *i; // rdi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // [rsp+28h] [rbp-41h]
  int v17; // [rsp+28h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v19[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  _BYTE *v21; // [rsp+D8h] [rbp+6Fh]
  char v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = a2;
  *a2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  LOBYTE(v20) = 0;
  memset(v19, 0, 0x28uLL);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 64);
  v19[0] = &DEVPKEY_DriverPackage_FirmwareDependencies;
  v19[2] = &DestinationString;
  LODWORD(v19[1]) = 8210;
  HIDWORD(v19[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 7, v4, (__int64)v19, 1);
  if ( ObjectProperties < 0 )
    goto LABEL_10;
  v8 = v19[4];
  if ( LODWORD(v19[4]) == -1073741275 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  else if ( SLODWORD(v19[4]) < 0 )
  {
    goto LABEL_12;
  }
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer && DestinationString.Length >= 2u )
  {
    ObjectProperties = PnpCheckDriverDependencies(DestinationString.Buffer);
    if ( ObjectProperties < 0 || !*a2 )
      goto LABEL_23;
    if ( !(_BYTE)v20 )
      goto LABEL_24;
    memset(v19, 0, 0x28uLL);
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 64);
    v19[0] = &DEVPKEY_DriverPackage_FirmwareDependencyBootSession;
    v19[2] = &v23;
    LODWORD(v19[1]) = 16;
    LODWORD(v19[3]) = 8;
    ObjectProperties = PiDevCfgQueryObjectProperties(v15, v14, 7, v13, (__int64)v19, 1);
    if ( ObjectProperties < 0 )
      goto LABEL_10;
    v8 = v19[4];
    if ( LODWORD(v19[4]) == -1073741275 )
      goto LABEL_24;
    if ( SLODWORD(v19[4]) >= 0 )
    {
      ObjectProperties = PnpGetStableSystemBootTime(&v20);
      if ( ObjectProperties < 0 || v20 == v23 )
      {
        *a2 = 0;
LABEL_23:
        ObjectProperties = 0;
        goto LABEL_10;
      }
LABEL_24:
      Buffer = DestinationString.Buffer;
      goto LABEL_6;
    }
LABEL_12:
    ObjectProperties = v8;
    goto LABEL_10;
  }
  *a2 = 1;
LABEL_6:
  if ( Buffer )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      0,
      *(_QWORD *)(a1 + 64),
      7,
      *(_QWORD *)(a1 + 16),
      v16,
      (__int64)&DEVPKEY_DriverPackage_FirmwareDependencies,
      0,
      0LL,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      0,
      *(_QWORD *)(a1 + 64),
      7,
      *(_QWORD *)(a1 + 16),
      v17,
      (__int64)&DEVPKEY_DriverPackage_FirmwareDependencyBootSession,
      0,
      0LL,
      0);
  }
  v10 = (_QWORD **)(a1 + 192);
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    ObjectProperties = PiDevCfgResolveDriverDependencies(i, &v22);
    if ( ObjectProperties < 0 )
      break;
    if ( !v22 )
      *v21 = 0;
  }
LABEL_10:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
