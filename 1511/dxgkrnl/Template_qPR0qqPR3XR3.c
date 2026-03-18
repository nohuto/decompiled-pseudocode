/*
 * XREFs of Template_qPR0qqPR3XR3 @ 0x1C001FD58
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qPR0qqPR3XR3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-31h]
  int v12; // [rsp+48h] [rbp-29h]
  int v13; // [rsp+4Ch] [rbp-25h]
  char *v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  int *v16; // [rsp+60h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  __int64 v18; // [rsp+70h] [rbp-1h]
  int v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+7Ch] [rbp+Bh]
  __int64 v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+8Ch] [rbp+1Bh]
  int v24; // [rsp+C8h] [rbp+57h] BYREF

  v24 = a4;
  UserData.Ptr = (ULONGLONG)&v24;
  v11 = a5;
  v12 = 8 * a4;
  v14 = &a6;
  v16 = &a7;
  v18 = a8;
  v21 = a9;
  v19 = 8 * a7;
  v22 = 8 * a7;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 0;
  v15 = 4LL;
  v17 = 4LL;
  v20 = 0;
  v23 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventSignalSynchronizationObjectFromGpu, 0LL, 6u, &UserData);
}
