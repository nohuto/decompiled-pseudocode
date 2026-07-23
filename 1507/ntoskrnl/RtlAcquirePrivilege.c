/*
 * XREFs of RtlAcquirePrivilege @ 0x1405484C0
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ZwSetInformationThread @ 0x14017F190 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14017F5F0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x14017F810 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlImpersonateSelfEx @ 0x1405486E8 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x140548804 (RtlpOpenThreadToken.c)
 */

NTSTATUS __stdcall RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v6; // di
  char *PoolWithQuotaTag; // rax
  _QWORD *v9; // rbx
  HANDLE *v10; // r15
  NTSTATUS v11; // esi
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  ULONG v15; // eax
  __int64 v16; // rcx
  char *v18; // rcx
  PVOID v19; // rax
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  v6 = Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (Flags & 2) != 0 )
    v6 = Flags | 1;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 12 * (NumPriv - 1 + 90LL), 0x62507452u);
  v9 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *(_QWORD *)PoolWithQuotaTag = 0LL;
  v10 = (HANDLE *)(PoolWithQuotaTag + 8);
  *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
  *((_DWORD *)PoolWithQuotaTag + 8) = 0;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 8) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        ThreadInformation = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
        goto LABEL_9;
      }
LABEL_33:
      ExFreePoolWithTag(v9, 0);
      return v11;
    }
    v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)PoolWithQuotaTag);
    if ( v11 < 0 )
      goto LABEL_33;
  }
LABEL_9:
  if ( *v9 )
    goto LABEL_13;
  if ( (v6 & 2) != 0 )
  {
    v12 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
    if ( v12 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 2u;
LABEL_13:
      v9[3] = v9 + 133;
      v9[2] = (char *)v9 + 36;
      *((_DWORD *)v9 + 266) = v4;
      if ( (_DWORD)v4 )
      {
        HIDWORD(ThreadInformation) = 0;
        v13 = v4;
        v14 = 0LL;
        do
        {
          v15 = *Privilege;
          v14 += 12LL;
          v16 = v9[3];
          ++Privilege;
          LODWORD(ThreadInformation) = v15;
          *(_QWORD *)(v16 + v14 - 8) = ThreadInformation;
          *(_DWORD *)(v9[3] + v14) = 2;
          --v13;
        }
        while ( v13 );
      }
      BufferLength = 1024;
      v12 = ZwAdjustPrivilegesToken(
              (HANDLE)*v9,
              0,
              (PTOKEN_PRIVILEGES)v9[3],
              0x400u,
              (PTOKEN_PRIVILEGES)v9[2],
              &BufferLength);
      if ( v12 == -1073741789 )
      {
        while ( 1 )
        {
          v19 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, BufferLength, 0x62507452u);
          v9[2] = v19;
          if ( !v19 )
            break;
          v12 = ZwAdjustPrivilegesToken(
                  (HANDLE)*v9,
                  0,
                  (PTOKEN_PRIVILEGES)v9[3],
                  BufferLength,
                  (PTOKEN_PRIVILEGES)v9[2],
                  &BufferLength);
          if ( v12 != -1073741789 )
            goto LABEL_17;
          ExFreePoolWithTag((PVOID)v9[2], 0);
        }
        v12 = -1073741801;
      }
LABEL_17:
      if ( v12 == 262 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          v12 = -1073741727;
LABEL_22:
          v18 = (char *)v9[2];
          if ( v18 && v18 != (char *)v9 + 36 )
            ExFreePoolWithTag(v18, 0);
          ZwClose((HANDLE)*v9);
          goto LABEL_26;
        }
        v12 = 0;
      }
      if ( v12 >= 0 )
      {
        *ReturnedState = v9;
        return 0;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v12 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
    if ( v12 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
      goto LABEL_13;
    }
  }
LABEL_26:
  if ( (v9[4] & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
    if ( *v10 )
      ZwClose(*v10);
  }
  ExFreePoolWithTag(v9, 0);
  return v12;
}
