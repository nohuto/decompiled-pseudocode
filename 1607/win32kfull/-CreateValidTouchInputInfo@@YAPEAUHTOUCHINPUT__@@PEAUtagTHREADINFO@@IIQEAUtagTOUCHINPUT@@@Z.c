/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01D3C34
 * Callers:
 *     ForwardTouchMessage @ 0x1C01D46BC (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01D38C8 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01D39D0 (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v5; // rdi
  unsigned __int64 v8; // rdx
  NTSTATUS v9; // ecx
  ULONG v10; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagTOUCHINPUT *v16; // rbx
  unsigned int v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagTOUCHINPUT *v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  _DWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v21; // [rsp+50h] [rbp-10h]
  unsigned int v22; // [rsp+88h] [rbp+28h] BYREF

  v5 = 0LL;
  *(_QWORD *)v17 = 0LL;
  v22 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v8 = 48LL * a3;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = -1073741675;
LABEL_3:
    v10 = RtlNtStatusToDosError(v9);
    UserSetLastError(v10);
    return 0LL;
  }
  v17[1] = 0;
  v17[0] = a3;
  v18 = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v8, 1952871253LL);
  if ( !v18 )
  {
    v9 = -1073741801;
    goto LABEL_3;
  }
  v20[0] = a3;
  v20[1] = a3;
  v21 = a4;
  v13 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v20, (struct tagTOUCHINPUTLIST *)v17, v12, &v22);
  v16 = v18;
  if ( v13 )
    v5 = AllocTouchInputInfo(a1, v17[1], v18, v22);
  if ( v16 )
    Win32FreePool(v16, v14, v15);
  return v5;
}
