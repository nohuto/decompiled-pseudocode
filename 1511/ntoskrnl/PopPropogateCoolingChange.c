/*
 * XREFs of PopPropogateCoolingChange @ 0x1401E9310
 * Callers:
 *     PoSetThermalActiveCooling @ 0x1406332BC (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x140633354 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x140633430 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x14063884C (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140638908 (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

int __fastcall PopPropogateCoolingChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  char v3; // si
  unsigned __int8 v4; // bp
  __int64 *i; // rdx
  __int64 v6; // rdx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return (int)v1;
  }
  do
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 18) )
          {
            LODWORD(v1) = v4;
            if ( *((_BYTE *)i + 16) < v4 )
              LODWORD(v1) = *((unsigned __int8 *)i + 16);
            v4 = (unsigned __int8)v1;
            if ( *((_BYTE *)i + 17) )
              v3 = 1;
          }
        }
      }
      if ( v4 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v4;
      *(_BYTE *)(a1 + 67) = 1;
      PopReleaseRwLock((signed __int64 *)(a1 + 32));
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 136))(*(_QWORD *)(a1 + 96), v4);
      LODWORD(v1) = (unsigned int)PopAcquireRwLockExclusive(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v3 == *(_BYTE *)(a1 + 65) )
      goto LABEL_18;
    *(_BYTE *)(a1 + 65) = v3;
    *(_BYTE *)(a1 + 67) = 1;
    PopReleaseRwLock((signed __int64 *)(a1 + 32));
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v6) = v3;
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 96), v6);
    LODWORD(v1) = (unsigned int)PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_18:
  v7 = *(struct _KEVENT **)(a1 + 80);
  if ( v7 )
    LODWORD(v1) = KeSetEvent(v7, 0, 0);
  v8 = *(struct _KEVENT **)(a1 + 72);
  if ( v8 )
    LODWORD(v1) = KeSetEvent(v8, 0, 0);
  return (int)v1;
}
