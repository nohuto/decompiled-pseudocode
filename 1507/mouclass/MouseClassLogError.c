/*
 * XREFs of MouseClassLogError @ 0x1C0004504
 * Callers:
 *     MouseClassClose @ 0x1C0001000 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 *     MouseClassPoRequestComplete @ 0x1C0001B50 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0004A10 (MouseClassWWPowerUpComplete.c)
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000E390 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MouseClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
{
  _WORD *ErrorLogEntry; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 4 * ((unsigned __int8)a5 + 12));
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[1] = 4 * a5;
    *(_BYTE *)ErrorLogEntry = a7;
    *((_DWORD *)ErrorLogEntry + 3) = a2;
    *((_QWORD *)ErrorLogEntry + 3) = 0LL;
    *((_BYTE *)ErrorLogEntry + 1) = 0;
    *((_DWORD *)ErrorLogEntry + 4) = a3;
    *((_DWORD *)ErrorLogEntry + 5) = a4;
    if ( a5 )
    {
      v11 = a6;
      v12 = a5;
      do
      {
        *(_DWORD *)((char *)v11 + (char *)ErrorLogEntry - (char *)a6 + 40) = *v11;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
