/*
 * XREFs of IopSymlinkEnforceEnabledTypes @ 0x1405807BC
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     FsRtlInsertExtraCreateParameter @ 0x14045B810 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x14046A420 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1404E3950 (FsRtlAllocateExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkEnforceEnabledTypes(bool a1, char a2, struct _ECP_LIST *a3)
{
  char v3; // di
  NTSTATUS result; // eax
  _DWORD *v8; // rbx
  bool v9; // zf
  _QWORD *v10; // rdx
  bool v11; // zf
  PVOID EcpContext; // [rsp+78h] [rbp+20h] BYREF

  v3 = IopSymlinkEnabledTypes;
  EcpContext = 0LL;
  if ( IopSymlinkEnabledTypes == 15 )
    return 0;
  result = FsRtlFindExtraCreateParameter(a3, &GUID_ECP_NETWORK_OPEN_CONTEXT, &EcpContext, 0LL);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741275 )
  {
    v8 = EcpContext;
    if ( EcpContext && (*((_DWORD *)EcpContext - 6) & 0x10) != 0 )
      return -1073740011;
    if ( !a1 )
    {
      if ( !EcpContext )
        return -1073740011;
      a1 = *((_DWORD *)EcpContext + 4) == 2;
    }
    if ( a2 || EcpContext )
    {
LABEL_6:
      if ( a1 )
      {
        if ( (v3 & 3) == 0 )
          return -1073740011;
        if ( a2 )
        {
          v9 = (v3 & 1) == 0;
          goto LABEL_10;
        }
        if ( (v3 & 2) == 0 )
          v8[1] = 2;
        v11 = (v3 & 1) == 0;
      }
      else
      {
        if ( (v3 & 0xC) == 0 )
          return -1073740011;
        if ( a2 )
        {
          v9 = (v3 & 4) == 0;
LABEL_10:
          if ( !v9 )
            return 0;
          return -1073740011;
        }
        if ( (v3 & 8) == 0 )
          v8[1] = 2;
        v11 = (v3 & 4) == 0;
      }
      if ( v11 )
        v8[1] = 1;
      return 0;
    }
    result = FsRtlAllocateExtraCreateParameter(&GUID_ECP_NETWORK_OPEN_CONTEXT, 0x1Cu, 0, 0LL, 0x69536F49u, &EcpContext);
    if ( result >= 0 )
    {
      v8 = EcpContext;
      v10 = EcpContext;
      *(_QWORD *)EcpContext = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
      *((_DWORD *)v10 + 6) = 0;
      *(_DWORD *)v10 = 28;
      FsRtlInsertExtraCreateParameter(a3, v10);
      goto LABEL_6;
    }
  }
  return result;
}
