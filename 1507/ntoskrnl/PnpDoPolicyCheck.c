/*
 * XREFs of PnpDoPolicyCheck @ 0x1407B9690
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x1407B8164 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x1407B8F6C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PnpDoPolicyCheck(int a1, char a2)
{
  bool v2; // bl
  int v4; // ecx
  REGHANDLE v5; // rdi
  int v7; // ecx
  bool v8; // zf
  int v9; // [rsp+30h] [rbp-50h] BYREF
  BOOL v10; // [rsp+38h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  BOOL *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  v2 = 0;
  if ( !PnpBootDriverCallbackObject )
    return 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
      goto LABEL_4;
    v7 = v4 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_5;
      v8 = (PnpDriverImageLoadPolicy & 2) == 0;
    }
    else
    {
      v8 = (PnpDriverImageLoadPolicy & 4) == 0;
    }
    if ( !v8 && a2 )
LABEL_4:
      v2 = 1;
  }
  else
  {
    v2 = (PnpDriverImageLoadPolicy & 1) != 0;
  }
LABEL_5:
  v5 = PnpEtwHandle;
  v10 = v2;
  v9 = PnpDriverImageLoadPolicy;
  v11 = a1;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_PolicyCheck) )
  {
    UserData.Reserved = 0;
    v15 = 0;
    v18 = 0;
    UserData.Ptr = (ULONGLONG)&v11;
    UserData.Size = 4;
    v13 = &v9;
    v14 = 4;
    v16 = &v10;
    v17 = 4;
    EtwWrite(v5, &KMPnPEvt_EarlyLaunch_PolicyCheck, 0LL, 3u, &UserData);
  }
  return v2;
}
