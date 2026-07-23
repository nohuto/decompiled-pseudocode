/*
 * XREFs of WheapLogInitEvent @ 0x14057B148
 * Callers:
 *     WheaInitialize @ 0x1407A0948 (WheaInitialize.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx
  struct _DRIVER_OBJECT *DriverObject; // rdi
  unsigned int Size; // [rsp+30h] [rbp-9h] BYREF
  int Size_4; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  unsigned int *p_Size; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  void *v10; // [rsp+70h] [rbp+37h]
  unsigned int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  Size = 1064 * dword_140329964;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(1064 * dword_140329964), 0x61656857u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v12 = 0;
    DriverObject = WheapDispatchPtr.DriverObject;
    UserData.Ptr = (ULONGLONG)&dword_140329964;
    *(_QWORD *)&UserData.Size = 4LL;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    v11 = Size;
    Size_4 = 10;
    v7 = 4LL;
    v9 = 4LL;
    v10 = v1;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.DriverObject, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)DriverObject, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    ExFreePoolWithTag(v1, 0x61656857u);
  }
}
