/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x14013D92C
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x1401C6F10 (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IoGetEnvironmentVariableEx @ 0x1406281EC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140628318 (IoSetEnvironmentVariableEx.c)
 *     IopCachePreviousBootData @ 0x1407CE44C (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+58h] [rbp-28h]
  _DWORD v11[4]; // [rsp+60h] [rbp-20h] BYREF

  v1 = 0;
  v11[0] = 2012912317;
  Handle = 0LL;
  dword_140328E80 = 0;
  v11[1] = 1295123289;
  v11[2] = -198680387;
  v11[3] = 1266192359;
  v9 = 8388734;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5 = 0;
  v7 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2424) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2424);
      xmmword_140304D10 = *(_OWORD *)(a1 + 2440);
      v2 = IopOpenRegistryKey(&Handle, 0LL, &v9, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 )
          {
            v3 = v4;
            if ( (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)IoGetEnvironmentVariableEx(
                    (unsigned int)L"OfflineMemoryDumpUseCapability",
                    (unsigned int)v11,
                    (unsigned int)&v5,
                    (unsigned int)&v7,
                    0LL) < 0
          || v5 != v4 )
        {
          IoSetEnvironmentVariableEx(
            (unsigned int)L"OfflineMemoryDumpUseCapability",
            (unsigned int)v11,
            (unsigned int)&v4,
            1,
            7);
        }
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_140328E80 = v2;
      }
    }
    else
    {
      dword_140328E80 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140328E80 = -1073741275;
  }
}
