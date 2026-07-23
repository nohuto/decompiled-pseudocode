/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x1403DA4D0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403DAE30 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoFreeDumpRange @ 0x1401C5DF0 (IoFreeDumpRange.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401CB268 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401D4CF8 (KeValidateBugCheckCallbackRecord.c)
 *     MmIsAddressValid @ 0x1401E6774 (MmIsAddressValid.c)
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
  bool v18; // [rsp+31h] [rbp-D7h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  char *v22; // [rsp+60h] [rbp-A8h]
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 *v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 *v26; // [rsp+80h] [rbp-88h]
  __int64 *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  _QWORD v29[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v30[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF

  v28 = a1;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v30, 0, sizeof(v30));
  v1 = 257LL;
  v25 = 257LL;
  v2 = 1;
  v3 = qword_1403D6B20;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  v18 = IsTracingEnabled;
  if ( IsTracingEnabled )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START, 0LL, 0, 0LL);
  v5 = (__int64 *)KeBugCheckAddRemovePagesCallbackListHead;
  v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  v24 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v26 = v5;
    if ( v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v27 = v5;
    LOBYTE(v6) = KeValidateBugCheckCallbackRecord((__int64)v5, 6, &v24);
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
          v3 = qword_1403D6B20;
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
        ((void (__fastcall *)(__int64, __int64 *, __int64 *))v27[2])(6LL, v27, &v20);
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
              v29[0] = *(_QWORD *)(a1 + 400);
              v29[1] = *(_QWORD *)(a1 + 408);
              v30[2] = v29;
              v16 = IoFreeDumpRange((__int64)v30, v14, v23, v15);
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
      v1 = v25;
    }
    else if ( !v24 )
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
