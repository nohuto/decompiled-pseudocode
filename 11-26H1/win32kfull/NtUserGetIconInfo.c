/*
 * XREFs of NtUserGetIconInfo @ 0x1401E2A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        volatile void *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  struct tagCURSOR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // r13
  struct _UNICODE_STRING *v15; // rsi
  struct _UNICODE_STRING *v16; // rdi
  unsigned int ULongFromUser; // eax
  __int64 CurrentProcessWow64Process; // rax
  int IconInfo; // ebx
  __int128 v21; // [rsp+60h] [rbp-68h]
  __int128 v22; // [rsp+70h] [rbp-58h]
  __int128 v23; // [rsp+80h] [rbp-48h] BYREF
  __int128 v24; // [rsp+90h] [rbp-38h] BYREF
  char v25[8]; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-20h]

  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  v10 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, 3u);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( a3 )
    {
      DWORD1(v21) = 0;
      LODWORD(v21) = RtlReadULongFromUser(a3);
      *((_QWORD *)&v21 + 1) = RtlReadULong64FromUser(&a3->Buffer);
      v23 = v21;
      ProbeForWrite(*((volatile void **)&v21 + 1), WORD1(v21), 2u);
      v15 = (struct _UNICODE_STRING *)&v23;
    }
    else
    {
      v15 = 0LL;
    }
    if ( a4 )
    {
      DWORD1(v22) = 0;
      LODWORD(v22) = RtlReadULongFromUser(a4);
      *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(&a4->Buffer);
      v24 = v22;
      ProbeForWrite(*((volatile void **)&v22 + 1), WORD1(v22), 2u);
      v16 = (struct _UNICODE_STRING *)&v24;
    }
    else
    {
      v16 = 0LL;
    }
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12);
    ProbeForWrite(a2, 0x20uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    IconInfo = (unsigned __int8)_InternalGetIconInfo(
                                  VirtualizedDpiCursor,
                                  (struct _ICONINFO *)a2,
                                  v15,
                                  v16,
                                  a5,
                                  a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v15->MaximumLength + 1) = 0;
      *a3 = *v15;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v16->MaximumLength + 1) = 0;
      *a4 = *v16;
    }
  }
  else
  {
    IconInfo = 0;
  }
  if ( v25[0] )
    --*(_DWORD *)(v26 + 28);
  UserSessionSwitchLeaveCrit(v11);
  return IconInfo;
}
