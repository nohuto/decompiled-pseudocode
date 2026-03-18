/*
 * XREFs of Template_pqqqqCR4 @ 0x1C001478C
 * Callers:
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0012EA0 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqqqCR4(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  va_list v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  va_list v7; // [rsp+50h] [rbp-21h]
  __int64 v8; // [rsp+58h] [rbp-19h]
  va_list v9; // [rsp+60h] [rbp-11h]
  __int64 v10; // [rsp+68h] [rbp-9h]
  va_list v11; // [rsp+70h] [rbp-1h]
  __int64 v12; // [rsp+78h] [rbp+7h]
  __int64 v13; // [rsp+80h] [rbp+Fh]
  int v14; // [rsp+88h] [rbp+17h]
  int v15; // [rsp+8Ch] [rbp+1Bh]
  __int64 v16; // [rsp+C8h] [rbp+57h] BYREF
  va_list va; // [rsp+C8h] [rbp+57h]
  __int64 v18; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+5Fh]
  __int64 v20; // [rsp+D8h] [rbp+67h] BYREF
  va_list va2; // [rsp+D8h] [rbp+67h]
  __int64 v22; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E0h] [rbp+6Fh]
  __int64 v24; // [rsp+E8h] [rbp+77h] BYREF
  va_list va4; // [rsp+E8h] [rbp+77h]
  __int64 v26; // [rsp+F0h] [rbp+7Fh]
  va_list va5; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v24 = va_arg(va5, _QWORD);
  v26 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  va_copy(v5, va1);
  va_copy(v7, va2);
  va_copy(v9, va3);
  v8 = 4LL;
  va_copy(v11, va4);
  v13 = v26;
  v14 = v24;
  v10 = 4LL;
  v12 = 4LL;
  v15 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventHistoryBuffer, 0LL, 6u, &UserData);
}
