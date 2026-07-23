/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x14057DC24
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v3; // rbx
  NTSTATUS v4; // ebx
  NTSTATUS v6; // [rsp+30h] [rbp-48h] BYREF
  PLOAD_IMAGE_NOTIFY_ROUTINE v7; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  NTSTATUS *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  v2 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack((__int64)NotifyRoutine, 0LL);
  if ( v2 )
  {
    v3 = 0LL;
    while ( !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v2, 0LL) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0x40 )
      {
        ExFreePoolWithTag(v2, 0);
        goto LABEL_12;
      }
    }
    _InterlockedIncrement(&PspLoadImageNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 1) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 0);
    v4 = 0;
  }
  else
  {
LABEL_12:
    v4 = -1073741670;
  }
  v6 = v4;
  v7 = NotifyRoutine;
  if ( EtwApiCallsProvRegHandle )
  {
    UserData.Reserved = 0;
    v11 = 0;
    UserData.Ptr = (ULONGLONG)&v7;
    UserData.Size = 8;
    v9 = &v6;
    v10 = 4;
    EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_PSSETLOADIMAGENOTIFYROUTINE, 0LL, 2u, &UserData);
  }
  return v4;
}
