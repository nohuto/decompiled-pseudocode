/*
 * XREFs of TppIsWorkerThread @ 0x1800529DC
 * Callers:
 *     TpCheckTerminateWorker @ 0x180052990 (TpCheckTerminateWorker.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

bool __fastcall TppIsWorkerThread(__int64 a1)
{
  struct _TEB *v1; // rbx
  bool v2; // bl
  bool v4; // zf
  __int64 *v5; // [rsp+40h] [rbp-40h] BYREF
  int v6; // [rsp+48h] [rbp-38h]
  int v7; // [rsp+4Ch] [rbp-34h]
  _BYTE v8[16]; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+60h] [rbp-20h]
  void *v10; // [rsp+68h] [rbp-18h]
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF
  __int64 v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = 0LL;
  Handle = 0LL;
  v1 = NtCurrentTeb();
  if ( !a1 )
    return v1->ThreadPoolData != 0LL;
  if ( (int)ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2072, 0, 0) < 0 )
    return 0;
  if ( (int)ZwQueryInformationThread(Handle, 0LL, v8, 48LL, 0LL) >= 0 && v1->ClientId.UniqueProcess == v9 )
  {
    if ( v1->ClientId.UniqueThread == v10 )
    {
      v4 = v1->ThreadPoolData == 0LL;
      goto LABEL_10;
    }
    v5 = &v12;
    v7 = 8;
    v6 = 6008;
    if ( (int)ZwQueryInformationThread(Handle, 26LL, &v5, 16LL, 0LL) >= 0 )
    {
      v4 = v12 == 0;
LABEL_10:
      v2 = !v4;
      goto LABEL_11;
    }
  }
  v2 = 0;
LABEL_11:
  if ( Handle )
    NtClose(Handle);
  return v2;
}
