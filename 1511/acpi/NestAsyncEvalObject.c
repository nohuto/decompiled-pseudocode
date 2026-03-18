/*
 * XREFs of NestAsyncEvalObject @ 0x1C0046868
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     GetThreadCurrentContext @ 0x1C00065C4 (GetThreadCurrentContext.c)
 *     PushPost @ 0x1C0009F80 (PushPost.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     PushCall @ 0x1C001308C (PushCall.c)
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     LogSchedEvent @ 0x1C001FB3C (LogSchedEvent.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall NestAsyncEvalObject(_WORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *ThreadCurrentContext; // rdi
  KIRQL v11; // dl
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 ObjectPath; // rax
  __int64 *v19; // rdx
  void *v20; // rsi
  __int64 v21; // rbx

  byte_1C005A0D8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  LogSchedEvent(
    1312904025,
    (__int64)ThreadCurrentContext,
    (__int64)a1,
    (__int64)EvalMethodComplete,
    (__int64)ThreadCurrentContext);
  if ( ThreadCurrentContext )
  {
    v12 = PushFrame((__int64)ThreadCurrentContext, 1481917262, 0x80u, (__int64)ParseNestedContext, &a5);
    if ( !v12 )
    {
      *(_QWORD *)(a5 + 32) = a1;
      ReferenceObjectEx((__int64)a1);
      *(_QWORD *)(v13 + 40) = a1;
      ReferenceObjectEx(v14);
      *(_QWORD *)(v15 + 88) = EvalMethodComplete;
      v16 = a6;
      *(_QWORD *)(v15 + 96) = a2;
      *(_QWORD *)(v15 + 104) = v16;
      *(_QWORD *)(v15 + 120) = ThreadCurrentContext[13];
      *(_DWORD *)(v15 + 112) = *((_DWORD *)ThreadCurrentContext + 16);
      LODWORD(v16) = *((_DWORD *)ThreadCurrentContext + 16);
      ThreadCurrentContext[13] = v15;
      *((_DWORD *)ThreadCurrentContext + 16) = v16 & 0xFFFFFE7F | 0x80;
      if ( a1[29] == 8 )
      {
        if ( !(unsigned int)PushCall(ThreadCurrentContext, (__int64)a1, v15 + 48) )
        {
          v17 = ThreadCurrentContext[52];
          if ( a3 == *(_DWORD *)(v17 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = GetObjectPath((__int64)a1);
              v19 = qword_1C00254F0;
              v20 = (void *)ObjectPath;
              if ( ObjectPath )
                v19 = (__int64 *)ObjectPath;
              ConPrintf("\nAMLI: %s(", v19);
              if ( v20 )
                ExFreePoolWithTag(v20, 0);
            }
            *(_DWORD *)(v17 + 56) = 0;
            if ( a3 )
            {
              while ( !(unsigned int)DupObjData(
                                       ThreadCurrentContext[40],
                                       *(_QWORD *)(v17 + 64) + 40LL * *(unsigned int *)(v17 + 56),
                                       a4 + 40LL * *(unsigned int *)(v17 + 56)) )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  PrintObject(a4 + 40LL * *(unsigned int *)(v17 + 56));
                  if ( *(_DWORD *)(v17 + 56) + 1 < a3 )
                    ConPrintf(",");
                }
                if ( ++*(_DWORD *)(v17 + 56) >= a3 )
                  goto LABEL_18;
              }
            }
            else
            {
LABEL_18:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v17 + 16) = *(_DWORD *)(v17 + 16) & 0xFFFF0000 | 2;
            }
          }
          else
          {
            LogError(-1072431093);
            PrintDebugMessage(108, (const void *)a3, (const void *)*(unsigned int *)(v17 + 60), 0LL, 0LL);
          }
        }
      }
      else
      {
        v21 = v15 + 48;
        if ( !(unsigned int)PushPost((int)ThreadCurrentContext, (int)ProcessEvalObj, (__int64)a1, 0LL, v15 + 48) )
          ReadObject((__int64)ThreadCurrentContext, (__int64)(a1 + 28), v21);
      }
      return 32772;
    }
  }
  else
  {
    v12 = -1072431098;
    LogError(-1072431098);
    PrintDebugMessage(109, a1, 0LL, 0LL, 0LL);
  }
  return v12;
}
