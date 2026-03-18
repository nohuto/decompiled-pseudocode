/*
 * XREFs of WheapLogInitEvent @ 0x140543950
 * Callers:
 *     WheaInitialize @ 0x140757730 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *PoolWithTag; // rbx
  __int64 *v1; // r8
  int i; // r9d
  __int64 v3; // rcx
  __int64 *v4; // rax
  char *v5; // rdx
  __int128 v6; // xmm1
  struct _DEVICE_OBJECT *NextDevice; // rdi
  int v8; // [rsp+30h] [rbp-9h] BYREF
  int v9; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+50h] [rbp+17h]
  __int64 v12; // [rsp+58h] [rbp+1Fh]
  int *v13; // [rsp+60h] [rbp+27h]
  __int64 v14; // [rsp+68h] [rbp+2Fh]
  char *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v8 = 1064 * dword_1403069B4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(1064 * dword_1403069B4), 0x61656857u);
  if ( PoolWithTag )
  {
    v1 = (__int64 *)qword_1403069B8;
    for ( i = 0; v1 != &qword_1403069B8; v1 = (__int64 *)*v1 )
    {
      v3 = 8LL;
      v4 = v1;
      v5 = &PoolWithTag[1064 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v4;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v4 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v4 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v4 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v4 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v4 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v4 + 7);
        v4 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v3;
      }
      while ( v3 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v4;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
      *((_QWORD *)v5 + 4) = v4[4];
    }
    NextDevice = WheapDispatchPtr.NextDevice;
    UserData.Ptr = (ULONGLONG)&dword_1403069B4;
    *(_QWORD *)&UserData.Size = 4LL;
    v11 = &v9;
    v9 = 10;
    v13 = &v8;
    v16 = v8;
    v12 = 4LL;
    v14 = 4LL;
    v15 = PoolWithTag;
    v17 = 0;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.NextDevice, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)NextDevice, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    ExFreePoolWithTag(PoolWithTag, 0x61656857u);
  }
}
