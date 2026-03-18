/*
 * XREFs of NtUserSetProcessWin32Capabilities @ 0x1402BD640
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A67A0 (W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 */

__int64 __fastcall NtUserSetProcessWin32Capabilities(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  unsigned int *v5; // rdi
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rsi
  unsigned __int64 v9; // xmm1_8
  int v10; // r12d
  PVOID v11; // rcx
  bool v12; // bl
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  ULONG v17; // eax
  unsigned int ProcessSessionId; // eax
  bool v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  ULONG v24; // eax
  bool v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // bl
  bool v31; // si
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  unsigned int v35; // r14d
  PVOID *v36; // rsi
  __int64 v37; // rcx
  unsigned int *v38; // [rsp+58h] [rbp-80h] BYREF
  int v39; // [rsp+60h] [rbp-78h]
  HANDLE Handle[2]; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  __m128i v42; // [rsp+80h] [rbp-58h] BYREF
  __int64 v43; // [rsp+90h] [rbp-48h]
  _BYTE v44[64]; // [rsp+98h] [rbp-40h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+20h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)HasTcbPrivilege() )
  {
    UserSetLastError(5);
    return 0LL;
  }
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v44);
  v5 = 0LL;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = (unsigned int *)Win32AllocPoolZInit(32 * v2, 1935897429LL);
    v38 = v5;
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v6 >= (unsigned int)v2 )
        {
          v38 = v5;
          v39 = v2;
          LODWORD(v6) = W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(v5[2], (__int64)&v38) != 0;
          goto LABEL_55;
        }
        v8 = 8LL * (unsigned int)v6;
        v42 = 0LL;
        v43 = 0LL;
        RtlCopyFromUser(&v42, (void *)(a1 + 24 * v6), 0x18uLL);
        *(__m128i *)Handle = v42;
        v41 = v43;
        v9 = _mm_srli_si128(v42, 8).m128i_u64[0];
        if ( (v9 & 0xFFFFFFF8) != 0
          || (v9 & 0xFFFFFFF800000000uLL) != 0
          || (v43 & 0xFFFFFFFE) != 0
          || (v43 & 0xFFFFFFFE00000000uLL) != 0 )
        {
          v30 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LOBYTE(v33) = v31;
            LOBYTE(v34) = v30;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v33,
              *(_QWORD *)(UserSessionState + 69152),
              2,
              3,
              110,
              (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
          }
          goto LABEL_41;
        }
        Object = 0LL;
        v10 = ObReferenceObjectByHandle(Handle[0], 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v11 = Object;
        *(_QWORD *)&v5[v8] = Object;
        if ( v10 < 0 )
        {
          v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v14 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LOBYTE(v15) = v13;
            LOBYTE(v16) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v16,
              v15,
              *(_QWORD *)(v14 + 69152),
              2,
              3,
              111,
              (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
          }
          *(_QWORD *)&v5[v8] = 0LL;
          LODWORD(v6) = 0;
          v17 = RtlNtStatusToDosError(v10);
          UserSetLastError(v17);
          goto LABEL_55;
        }
        ProcessSessionId = PsGetProcessSessionIdEx(v11);
        v5[v8 + 2] = ProcessSessionId;
        if ( ProcessSessionId == -1 )
          break;
        if ( (_DWORD)v6 && ProcessSessionId != v5[8 * (unsigned int)(v6 - 1) + 2] )
        {
          v25 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v27 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LOBYTE(v28) = v26;
            LOBYTE(v29) = v25;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v29,
              v28,
              *(_QWORD *)(v27 + 69152),
              2,
              3,
              113,
              (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
          }
LABEL_41:
          LODWORD(v6) = 0;
          UserSetLastError(87);
          goto LABEL_55;
        }
        *(_QWORD *)&v5[v8 + 4] = SLODWORD(Handle[1]) | (unsigned __int64)((__int64)(int)v41 << 32);
        *(_QWORD *)&v5[v8 + 6] = SHIDWORD(Handle[1]) | (unsigned __int64)((__int64)SHIDWORD(v41) << 32);
        v6 = (unsigned int)(v6 + 1);
      }
      v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69152),
          2,
          3,
          112,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
      }
      LODWORD(v6) = 0;
      v24 = RtlNtStatusToDosError(-1073740715);
      UserSetLastError(v24);
      goto LABEL_55;
    }
    v7 = 14;
  }
  else
  {
    LODWORD(v6) = 0;
    v7 = 5023;
  }
  UserSetLastError(v7);
LABEL_55:
  if ( v5 )
  {
    v35 = 0;
    if ( (_DWORD)v2 )
    {
      v36 = (PVOID *)v5;
      do
      {
        if ( !*v36 )
          break;
        ObfDereferenceObject(*v36);
        ++v35;
        v36 += 4;
      }
      while ( v35 < (unsigned int)v2 );
    }
    Win32FreePool(v5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v44);
  UserSessionSwitchLeaveCrit(v37);
  return (int)v6;
}
