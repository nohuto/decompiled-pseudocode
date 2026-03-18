/*
 * XREFs of UmfdLoadFontFile @ 0x1C02D92B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x1C02D9A9C (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int v12; // r15d
  __int64 v13; // rbx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  void **v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+C4h] [rbp-3Ch]
  int v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v34; // [rsp+160h] [rbp+60h]
  int v35; // [rsp+168h] [rbp+68h]
  int v36; // [rsp+16Ch] [rbp+6Ch]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  PsGetProcessImageFileName(CurrentProcess);
  v21 = 4;
  v12 = -1;
  v30 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = &LoadFontFileRequest::`vftable';
  v29 = a5;
  v23 = v10;
  v13 = 0LL;
  v27 = a6;
  v28 = a7;
  v31 = -1;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, (__int64)&v20) >= 0 )
  {
    v13 = v32;
    if ( v32 )
      goto LABEL_6;
  }
  if ( v30 )
  {
    v18 = v30;
    v19 = v31;
    UmfdUnloadFontFileInternal(&v18);
  }
  if ( v13 )
LABEL_6:
    v12 = *(_DWORD *)(v13 + 8);
  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
  {
    v36 = 0;
    v34 = &v17;
    v17 = v12;
    v35 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EFA2C, v14, v15, 3u, &pData);
  }
  return v13;
}
