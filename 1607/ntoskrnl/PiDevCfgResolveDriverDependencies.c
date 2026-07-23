/*
 * XREFs of PiDevCfgResolveDriverDependencies @ 0x14063DE54
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     PnpGetStableSystemBootTime @ 0x14062D8CC (PnpGetStableSystemBootTime.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgResolveDriverDependencies(__int64 a1, _BYTE *a2)
{
  void *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int ObjectProperties; // ebx
  int v8; // eax
  wchar_t *Buffer; // rax
  void *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD **v13; // rsi
  _QWORD *i; // rdi
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v17[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+67h] BYREF
  _BYTE *v19; // [rsp+D8h] [rbp+6Fh]
  char v20; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v19 = a2;
  *a2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  LOBYTE(v18) = 0;
  memset(v17, 0, 0x28uLL);
  v4 = *(void **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 64);
  v17[0] = &DEVPKEY_DriverPackage_FirmwareDependencies;
  v17[2] = &DestinationString;
  LODWORD(v17[1]) = 8210;
  HIDWORD(v17[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 7u, v4, (__int64)v17, 1u);
  if ( ObjectProperties < 0 )
    goto LABEL_28;
  v8 = v17[4];
  if ( LODWORD(v17[4]) == -1073741275 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  else if ( SLODWORD(v17[4]) < 0 )
  {
    goto LABEL_17;
  }
  Buffer = DestinationString.Buffer;
  if ( !DestinationString.Buffer || DestinationString.Length < 2u )
  {
    *a2 = 1;
    goto LABEL_20;
  }
  ObjectProperties = PnpCheckDriverDependencies(DestinationString.Buffer, a2, &v18);
  if ( ObjectProperties < 0 || !*a2 )
    goto LABEL_15;
  if ( (_BYTE)v18 )
  {
    memset(v17, 0, 0x28uLL);
    v10 = *(void **)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 64);
    v17[0] = &DEVPKEY_DriverPackage_FirmwareDependencyBootSession;
    v17[2] = &v21;
    LODWORD(v17[1]) = 16;
    LODWORD(v17[3]) = 8;
    ObjectProperties = PiDevCfgQueryObjectProperties(v12, v11, 7u, v10, (__int64)v17, 1u);
    if ( ObjectProperties < 0 )
      goto LABEL_28;
    v8 = v17[4];
    if ( LODWORD(v17[4]) != -1073741275 )
    {
      if ( SLODWORD(v17[4]) >= 0 )
      {
        ObjectProperties = PnpGetStableSystemBootTime(&v18);
        if ( ObjectProperties < 0 || v18 == v21 )
        {
          *a2 = 0;
LABEL_15:
          ObjectProperties = 0;
          goto LABEL_28;
        }
        goto LABEL_18;
      }
LABEL_17:
      ObjectProperties = v8;
      goto LABEL_28;
    }
  }
LABEL_18:
  Buffer = DestinationString.Buffer;
LABEL_20:
  if ( Buffer )
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, 0, *(_QWORD *)(a1 + 64), 7, *(_QWORD *)(a1 + 16));
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, 0, *(_QWORD *)(a1 + 64), 7, *(_QWORD *)(a1 + 16));
  }
  v13 = (_QWORD **)(a1 + 192);
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
  {
    ObjectProperties = PiDevCfgResolveDriverDependencies(i, &v20);
    if ( ObjectProperties < 0 )
      break;
    if ( !v20 )
      *v19 = 0;
  }
LABEL_28:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
