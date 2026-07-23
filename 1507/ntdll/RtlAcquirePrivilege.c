/*
 * XREFs of RtlAcquirePrivilege @ 0x18006E600
 * Callers:
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpOpenThreadToken @ 0x18006E804 (RtlpOpenThreadToken.c)
 *     RtlImpersonateSelfEx @ 0x18006E860 (RtlImpersonateSelfEx.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180093C00 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x180093D10 (NtAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v6; // di
  char *Heap; // rax
  _QWORD *v9; // rbx
  HANDLE *v10; // r14
  NTSTATUS v11; // esi
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  ULONG v15; // eax
  __int64 v16; // rcx
  _TOKEN_PRIVILEGES *PreviousState; // rax
  char *v19; // r8
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  v6 = Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (Flags & 2) != 0 )
    v6 = Flags | 1;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (NumPriv - 1 + 90LL));
  v9 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_QWORD *)Heap = 0LL;
  v10 = (HANDLE *)(Heap + 8);
  *((_QWORD *)Heap + 1) = 0LL;
  *((_DWORD *)Heap + 8) = 0;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_10;
  if ( (v6 & 1) != 0 )
  {
    v11 = RtlpOpenThreadToken(4u, v10);
    if ( v11 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
      ThreadInformation = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      goto LABEL_9;
    }
LABEL_26:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v11;
  }
  v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)Heap);
  if ( v11 < 0 )
    goto LABEL_26;
LABEL_9:
  if ( *v9 )
    goto LABEL_13;
LABEL_10:
  if ( (v6 & 2) != 0 )
  {
    v12 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
    if ( v12 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 2u;
      goto LABEL_13;
    }
  }
  else
  {
    v12 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
    if ( v12 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
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
          *(_QWORD *)(v14 + v16 - 8) = ThreadInformation;
          *(_DWORD *)(v14 + v9[3]) = 2;
          --v13;
        }
        while ( v13 );
      }
      BufferLength = 1024;
      v12 = NtAdjustPrivilegesToken(
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
          PreviousState = (_TOKEN_PRIVILEGES *)RtlAllocateHeap(
                                                 NtCurrentPeb()->ProcessHeap,
                                                 NtdllBaseTag + 1310720,
                                                 BufferLength);
          v9[2] = PreviousState;
          if ( !PreviousState )
            break;
          v12 = NtAdjustPrivilegesToken(
                  (HANDLE)*v9,
                  0,
                  (PTOKEN_PRIVILEGES)v9[3],
                  BufferLength,
                  PreviousState,
                  &BufferLength);
          if ( v12 != -1073741789 )
            goto LABEL_17;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v9[2]);
        }
        v12 = -1073741801;
      }
LABEL_17:
      if ( v12 == 262 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          v12 = -1073741727;
LABEL_34:
          v19 = (char *)v9[2];
          if ( v19 && v19 != (char *)v9 + 36 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
          NtClose((HANDLE)*v9);
          goto LABEL_38;
        }
        v12 = 0;
      }
      if ( v12 >= 0 )
      {
        *ReturnedState = v9;
        return 0;
      }
      goto LABEL_34;
    }
  }
LABEL_38:
  if ( (v9[4] & 1) != 0 )
  {
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
    if ( *v10 )
      NtClose(*v10);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v12;
}
