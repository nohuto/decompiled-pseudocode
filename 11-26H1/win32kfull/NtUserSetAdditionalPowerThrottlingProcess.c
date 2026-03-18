/*
 * XREFs of NtUserSetAdditionalPowerThrottlingProcess @ 0x140279E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ProcessInfoFromHandle @ 0x140265578 (ProcessInfoFromHandle.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserSetAdditionalPowerThrottlingProcess(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // r14
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  QualityOfService *v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int i; // edi
  __int64 v13; // rax
  QualityOfService *v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _BYTE v20[24]; // [rsp+48h] [rbp-150h] BYREF
  __int64 v21; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v22[248]; // [rsp+68h] [rbp-130h] BYREF

  v3 = a2;
  v5 = 0;
  v6 = EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  v7 = ValidateHwndStrict(a1);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL) == *(_QWORD *)(v6 + 456)
      && IsTopLevelWindow(v7)
      && (unsigned int)v3 <= 0x20
      && ((_DWORD)v3 == 0) == (a3 == 0LL) )
    {
      v21 = 0LL;
      memset_0(v22, 0, sizeof(v22));
      if ( (_DWORD)v3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9);
        ProbeForRead(a3, 8LL * (unsigned int)v3, CurrentProcessWow64Process != 0 ? 1 : 4);
        for ( i = 0; i < (unsigned int)v3; ++i )
        {
          v13 = ProcessInfoFromHandle(*((void **)a3 + i));
          *(_QWORD *)&v22[8 * i - 8] = v13;
          if ( !v13 )
            goto LABEL_19;
          v10 = *(QualityOfService **)(v8 + 16);
          if ( v13 == *((_QWORD *)v10 + 57) )
            goto LABEL_19;
        }
      }
      QualityOfService::BeginDeferReport(v10);
      if ( (*(_DWORD *)(v8 + 380) & 0x8000000) != 0 )
        tagWND::DwsUnlinkAllProcesses(v8, 2LL);
      if ( (_DWORD)v3 )
      {
        v15 = &v21;
        v16 = v3;
        do
        {
          tagWND::DwsLinkProcess(v8, *v15++, 2LL);
          --v16;
        }
        while ( v16 );
      }
      QualityOfService::EndDeferReport(v14);
      v5 = 1;
    }
    else
    {
LABEL_19:
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  UserSessionSwitchLeaveCrit(v17);
  return v5;
}
