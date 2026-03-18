/*
 * XREFs of NtUserGetRawInputData @ 0x1400935E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x1400936DC (-GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z.c)
 *     ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140093820 (-GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z.c)
 */

__int64 __fastcall NtUserGetRawInputData(void *a1, unsigned int a2, void *volatile a3, unsigned int *a4, int a5)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rdi
  void **v11; // rax
  __int64 i; // rbx
  unsigned int v13; // ebx
  int v15; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx

  if ( a5 != 24 )
  {
    v15 = 87;
LABEL_25:
    v13 = -1;
    UserSetLastError(v15);
    return v13;
  }
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v10 = *CurrentThreadWin32Thread;
  else
    v10 = 0LL;
  v11 = *(void ***)(v10 + 1136);
  i = 0LL;
  if ( v11 && *v11 == a1 )
  {
    i = *(_QWORD *)(v10 + 1136);
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline();
    v17 = *(_QWORD *)(v10 + 1168);
    if ( IsEnabledDeviceUsageNoInline )
    {
      for ( i = *(_QWORD *)(v10 + 1168); i && *(void **)i != a1; i = *(_QWORD *)(i + 32) )
        ;
    }
    else
    {
      while ( v17 )
      {
        if ( *(void **)v17 == a1 )
        {
          i = v17;
          break;
        }
        v17 = *(_QWORD *)(v17 + 32);
      }
    }
  }
  if ( a3 )
    InputTraceLogging::RawInput::GetRawInputData(a1, a2, (struct tagHIDDATA *)i);
  if ( !i )
  {
    v15 = 6;
    goto LABEL_25;
  }
  return GRID_CopyHidData((struct tagHIDDATA *const)i, a2, a3, a4);
}
