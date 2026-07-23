/*
 * XREFs of CmpSetupConfigurationTree @ 0x1407AC78C
 * Callers:
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _stricmp @ 0x14014D904 (_stricmp.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpInitializeRegistryNode @ 0x14055D330 (CmpInitializeRegistryNode.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpSetupConfigurationTree(__int64 a1, void *a2, BOOL a3, unsigned int a4)
{
  void *v4; // rdi
  unsigned __int16 i; // cx
  unsigned __int64 v9; // rax
  NTSTATUS result; // eax
  __int64 v11; // rcx
  HANDLE v12; // rdi
  int v13; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h] BYREF
  void *v15; // [rsp+50h] [rbp-A8h]
  _WORD v16[48]; // [rsp+60h] [rbp-98h] BYREF

  v4 = a2;
  v15 = a2;
  for ( i = 0; i < 0x2Au; ++i )
  {
    v9 = i;
    if ( v9 >= 42 )
      _report_rangecheckfailure();
    v16[v9] = 0;
  }
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 24) == 3 && !*(_DWORD *)(*(_QWORD *)a1 + 24LL) && *(_DWORD *)(a1 + 28) == 12 )
    {
      a3 = stricmp(*(const char **)(a1 + 56), "ISA") == 0;
      a4 = 0;
    }
    result = CmpInitializeRegistryNode(a1, v4, &Handle, a3, a4, (__int64)v16);
    if ( result < 0 )
      break;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = Handle;
    if ( v11 )
    {
      v13 = CmpSetupConfigurationTree(v11, Handle, a3, a4);
      if ( v13 < 0 )
      {
        NtClose(v12);
        return v13;
      }
    }
    NtClose(v12);
    a1 = *(_QWORD *)(a1 + 16);
    if ( !a1 )
      return 0;
    v4 = v15;
  }
  return result;
}
