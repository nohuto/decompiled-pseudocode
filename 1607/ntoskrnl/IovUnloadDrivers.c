/*
 * XREFs of IovUnloadDrivers @ 0x140701070
 * Callers:
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwDelayExecution @ 0x14015A870 (ZwDelayExecution.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObEnumerateObjectsByType @ 0x1406665EC (ObEnumerateObjectsByType.c)
 *     IovpUnloadDriver @ 0x14070175C (IovpUnloadDriver.c)
 */

__int64 IovUnloadDrivers()
{
  PVOID *v1; // rbx
  unsigned int v2; // r14d
  PVOID *v3; // rdi
  char v4; // bp
  char v5; // dl
  PVOID *v6; // rdi
  PVOID *v7; // rsi
  _DWORD *v8; // rcx
  PVOID *v9; // rdi
  PVOID v10; // rcx
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( !PopShutdownCleanly )
    return 3221225473LL;
  IovDriverListHead = 0LL;
  v1 = 0LL;
  v2 = ObEnumerateObjectsByType();
  while ( 1 )
  {
    v3 = (PVOID *)IovDriverListHead;
    if ( !IovDriverListHead )
      break;
    IovDriverListHead = *(PVOID *)IovDriverListHead;
    if ( (unsigned int)IovpUnloadDriver(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  do
  {
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v1;
      if ( !v1 )
        break;
      v8 = v1[1];
      v1 = (PVOID *)*v1;
      if ( (v8[4] & 1) != 0 )
      {
        ObfDereferenceObject(v8);
        ExFreePoolWithTag(v7, 0);
        v5 = 1;
      }
      else
      {
        *v7 = v6;
        v6 = v7;
      }
    }
    if ( v5 )
    {
      Interval.QuadPart = -100000000LL;
      ZwDelayExecution(0, &Interval);
      v4 = 1;
    }
    v1 = v6;
  }
  while ( v4 == 1 && v6 );
  while ( 1 )
  {
    v9 = v1;
    if ( !v1 )
      break;
    v10 = v1[1];
    v1 = (PVOID *)*v1;
    ObfDereferenceObject(v10);
    ExFreePoolWithTag(v9, 0);
  }
  return v2;
}
