/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DBBE8
 * Callers:
 *     ForwardTouchMessage @ 0x1C01DC718 (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DB8C4 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01DB97C (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
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
  struct tagTOUCHINPUT *v14; // rbx
  unsigned int v15[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagTOUCHINPUT *v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  _DWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v19; // [rsp+50h] [rbp-10h]
  unsigned int v20; // [rsp+88h] [rbp+28h] BYREF

  v5 = 0LL;
  *(_QWORD *)v15 = 0LL;
  v20 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v8 = 48LL * a3;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = -1073741675;
LABEL_3:
    v10 = RtlNtStatusToDosError(v9);
    UserSetLastError(v10);
    return 0LL;
  }
  v15[1] = 0;
  v15[0] = a3;
  v16 = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v8, 1952871253LL);
  if ( !v16 )
  {
    v9 = -1073741801;
    goto LABEL_3;
  }
  v18[0] = a3;
  v18[1] = a3;
  v19 = a4;
  v13 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v18, (struct tagTOUCHINPUTLIST *)v15, v12, &v20);
  v14 = v16;
  if ( v13 )
    v5 = AllocTouchInputInfo(a1, v15[1], v16, v20);
  if ( v14 )
    Win32FreePool(v14);
  return v5;
}
