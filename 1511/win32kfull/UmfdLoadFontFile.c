/*
 * XREFs of UmfdLoadFontFile @ 0x1C02D6210
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x1C02D69EC (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int v12; // r15d
  __int64 v13; // rbx
  const struct _TlgProvider_t *v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  const struct _TlgProvider_t *v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  void **v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+C4h] [rbp-3Ch]
  int v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  const struct _TlgProvider_t *v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v36; // [rsp+160h] [rbp+60h]
  int v37; // [rsp+168h] [rbp+68h]
  int v38; // [rsp+16Ch] [rbp+6Ch]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  PsGetProcessImageFileName(CurrentProcess);
  v23 = 4;
  v12 = -1;
  v32 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v22 = &LoadFontFileRequest::`vftable';
  v31 = a5;
  v25 = v10;
  v13 = 0LL;
  v29 = a6;
  v30 = a7;
  v33 = -1;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, (__int64)&v22) >= 0 )
  {
    v13 = v34;
    if ( v34 )
      goto LABEL_6;
  }
  v14 = v32;
  if ( v32 )
  {
    v20 = v32;
    v21 = v33;
    UmfdUnloadFontFileInternal(&v20);
  }
  if ( v13 )
LABEL_6:
    v12 = *(_DWORD *)(v13 + 8);
  if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(v14, 0x200000000000uLL) )
  {
    v38 = 0;
    v36 = &v19;
    v19 = v12;
    v37 = 4;
    TlgWrite(v15, &unk_1C02E9E7C, v16, v17, 3u, &pData);
  }
  return v13;
}
