/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x1403FE84C
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoFreeDumpRange @ 0x1401F3568 (IoFreeDumpRange.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401F8C30 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402028D0 (KeValidateBugCheckCallbackRecord.c)
 *     MmIsAddressValid @ 0x1402175B0 (MmIsAddressValid.c)
 */

char __fastcall IopLiveDumpCallRemovePagesCallbacks(__int64 a1)
{
  unsigned __int64 v1; // r13
  ULONG v2; // edi
  __int64 *v3; // rsi
  bool IsTracingEnabled; // r12
  __int64 *v5; // r15
  __int64 *v6; // rax
  void *v7; // rcx
  int v8; // ecx
  unsigned __int64 v9; // rdx
  _BYTE *i; // rax
  int v11; // eax
  char v12; // r12
  int v13; // ecx
  char *v14; // rdx
  int v15; // r9d
  int v16; // eax
  bool v18; // [rsp+31h] [rbp-E7h]
  __int64 v20; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-C0h]
  char *v22; // [rsp+60h] [rbp-B8h]
  __int64 v23; // [rsp+68h] [rbp-B0h]
  __int64 v24; // [rsp+70h] [rbp-A8h]
  _QWORD v25[3]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 *v26; // [rsp+90h] [rbp-88h]
  _QWORD v27[2]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD v28[5]; // [rsp+A8h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-48h] BYREF

  v25[2] = a1;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v28, 0, sizeof(v28));
  v1 = 257LL;
  v24 = 257LL;
  v2 = 1;
  v3 = qword_1403FB1F0;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  v18 = IsTracingEnabled;
  if ( IsTracingEnabled )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START, 0LL, 0, 0LL);
  v5 = (__int64 *)KeBugCheckAddRemovePagesCallbackListHead;
  v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  v25[0] = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v25[1] = v5;
    if ( v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v26 = v5;
    LOBYTE(v6) = KeValidateBugCheckCallbackRecord((__int64)v5, 6, v25);
    if ( (_BYTE)v6 )
    {
      if ( IsTracingEnabled )
      {
        v7 = (void *)v5[3];
        if ( !v7 || !MmIsAddressValid(v7) )
          goto LABEL_21;
        v3 = (__int64 *)v5[3];
        v8 = 0;
        if ( v3 && v1 <= 0x7FFFFFFF )
        {
          v9 = v1;
          for ( i = (_BYTE *)v5[3]; v9; --v9 )
          {
            if ( !*i )
              break;
            ++i;
          }
          v11 = 0;
          if ( !v9 )
            v11 = -1073741811;
          if ( v11 >= 0 )
            v8 = v1 - v9;
        }
        else
        {
          v11 = -1073741811;
        }
        if ( v11 >= 0 )
        {
          v2 = v8 + 1;
        }
        else
        {
LABEL_21:
          v2 = 1;
          v3 = qword_1403FB1F0;
        }
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(
          IopLiveDumpEtwRegHandle,
          &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START,
          0LL,
          1u,
          &UserData);
      }
      v20 = 0LL;
      HIDWORD(v21) = *(_DWORD *)a1;
      do
      {
        v22 = 0LL;
        LODWORD(v21) = 0;
        v23 = 0LL;
        v12 = 0;
        ((void (__fastcall *)(__int64, __int64 *, __int64 *))v26[2])(6LL, v26, &v20);
        if ( v23 )
        {
          v13 = v21;
          if ( (v21 & 0x80000003) != 0 )
          {
            if ( (int)v21 >= 0 )
            {
              v12 = 0;
            }
            else
            {
              v12 = 1;
              v13 = v21 & 0x7FFFFFFF;
              LODWORD(v21) = v21 & 0x7FFFFFFF;
            }
            if ( ((v13 - 1) & v13) != 0 )
            {
              v16 = -1073741811;
            }
            else
            {
              v14 = v22;
              if ( (v13 & 1) != 0 )
              {
                v15 = 0;
              }
              else
              {
                v15 = 2;
                v14 = (char *)((unsigned __int64)v22 >> 12);
              }
              v27[0] = *(_QWORD *)(a1 + 400);
              v27[1] = *(_QWORD *)(a1 + 408);
              v28[2] = v27;
              v16 = IoFreeDumpRange((__int64)v28, v14, v23, v15);
            }
            if ( v16 < 0 )
            {
              v12 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure((__int64)v3, v2, v16);
            }
          }
        }
      }
      while ( v12 );
      IsTracingEnabled = v18;
      if ( v18 )
      {
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 0LL, 1u, &UserData);
      }
      v1 = v24;
    }
    else if ( !v25[0] )
    {
      break;
    }
    v5 = (__int64 *)*v5;
    v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    LOBYTE(v6) = EtwWrite(
                   IopLiveDumpEtwRegHandle,
                   &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END,
                   0LL,
                   0,
                   0LL);
  return (char)v6;
}
