/*
 * XREFs of SecureDump_PrepareForInit @ 0x1401CBB40
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SecureDump_LogErrorEvent @ 0x1401CBAC0 (SecureDump_LogErrorEvent.c)
 *     SecureDump_ReadRegistry @ 0x1401CBD34 (SecureDump_ReadRegistry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SecureDump_PrepareForInit(__int64 a1, _BYTE *a2)
{
  int v3; // ebx
  int Registry; // eax
  int v5; // eax
  int v6; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-28h]
  int v8; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  const wchar_t *v11; // [rsp+58h] [rbp-8h]
  char v12; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+20h] BYREF

  P = 0LL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v6 = 13238472;
  v3 = 2;
  v10 = 8388734;
  v8 = 10879140;
  ForceDumpDisabled = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  memset(&dword_1403234A8, 0, 0x28uLL);
  Registry = SecureDump_ReadRegistry(
               (unsigned int)&v8,
               (unsigned int)L"GuardedHost",
               4,
               (unsigned int)&P,
               (__int64)&v12);
  if ( Registry < 0 )
  {
    if ( Registry != -1073741772 )
      goto LABEL_16;
  }
  else
  {
    dword_1403234A8 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( dword_1403234A8 )
    {
      v3 = 0;
      goto LABEL_16;
    }
  }
  v5 = SecureDump_ReadRegistry(
         (unsigned int)&v10,
         (unsigned int)L"DumpEncryptionEnabled",
         4,
         (unsigned int)&P,
         (__int64)&v12);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      v3 = 0;
      ForceDumpDisabled = 0;
    }
  }
  else
  {
    dword_1403234AC = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    if ( !dword_1403234AC
      || (*a2 = 1,
          (int)SecureDump_ReadRegistry(
                 (unsigned int)&v6,
                 (unsigned int)L"PublicKey",
                 3,
                 (unsigned int)&pbInput,
                 (__int64)&dwFlags) >= 0)
      && (int)SecureDump_ReadRegistry(
                (unsigned int)&v6,
                (unsigned int)L"Thumbprint",
                1,
                (unsigned int)&qword_1403234C0,
                (__int64)&dword_1403234C8) >= 0 )
    {
      ForceDumpDisabled = 0;
LABEL_9:
      SecureDmpEncryptionContext = 1;
      return;
    }
  }
LABEL_16:
  if ( ForceDumpDisabled != 1 )
    goto LABEL_9;
  if ( pbInput )
  {
    ExFreePoolWithTag(pbInput, 0);
    pbInput = 0LL;
  }
  if ( v3 )
  {
    SecureDmpEncryptionContext = 3;
    SecureDump_LogErrorEvent(v3);
  }
}
