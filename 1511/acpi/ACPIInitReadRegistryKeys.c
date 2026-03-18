/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C0085328
 * Callers:
 *     DriverEntry @ 0x1C0084228 (DriverEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 *     OSCloseHandle @ 0x1C006665C (OSCloseHandle.c)
 */

void ACPIInitReadRegistryKeys()
{
  _BYTE *v0; // rbx
  _BYTE *v1; // rdi
  unsigned int v2; // esi
  _BYTE *PoolWithTag; // rax
  NTSTATUS v4; // eax
  char *v5; // rax
  __int64 v6; // rsi
  int v7; // esi
  unsigned int v8; // r14d
  _BYTE *v9; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  char *v12; // rax
  const char *v13; // r14
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+40h] BYREF

  Handle = 0LL;
  v0 = 0LL;
  v14 = 4;
  v15 = 0;
  v1 = 0LL;
  if ( OSReadRegValue("Attributes", 0LL, &v15, &v14) >= 0 )
    AcpiOverrideAttributes |= v15 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  Src = 0LL;
  if ( OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, &Handle) >= 0 )
  {
    v2 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x53706341u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v2);
      v14 = v2;
      v2 += 10;
      v4 = OSReadRegValue("Identifier", Handle, v0, &v14);
      if ( v4 != -2147483643 )
      {
        if ( v4 >= 0 )
        {
          v5 = strstr(v0, "Stepping");
          if ( v5 )
            *(v5 - 1) = 0;
          v6 = -1LL;
          do
            ++v6;
          while ( v0[v6] );
          v7 = v6 + 1;
          v8 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x53706341u);
            v1 = v9;
            if ( !v9 )
              break;
            memset(v9, 0, v8);
            v14 = v8;
            v8 += 10;
            v10 = OSReadRegValue("VendorIdentifier", Handle, v1, &v14);
            if ( v10 != -2147483643 )
            {
              if ( v10 >= 0 )
              {
                v11 = v14 + 2 + v7;
                v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x53706341u);
                v13 = v12;
                if ( v12 )
                {
                  RtlStringCchPrintfA(v12, v11, "%s - %s", v1, v0);
                  Src = v13;
                  WORD1(AcpiProcessorString) = v11;
                  LOWORD(AcpiProcessorString) = v11;
                }
              }
              goto LABEL_22;
            }
          }
        }
        break;
      }
    }
LABEL_22:
    if ( Handle )
      OSCloseHandle(Handle);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
