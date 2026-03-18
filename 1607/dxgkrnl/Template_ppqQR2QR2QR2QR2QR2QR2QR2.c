/*
 * XREFs of Template_ppqQR2QR2QR2QR2QR2QR2QR2 @ 0x1C0023088
 * Callers:
 *     TraceDxgkPatchLocationList @ 0x1C0023210 (TraceDxgkPatchLocationList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqQR2QR2QR2QR2QR2QR2QR2(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-A1h] BYREF
  va_list v5; // [rsp+40h] [rbp-91h]
  __int64 v6; // [rsp+48h] [rbp-89h]
  va_list v7; // [rsp+50h] [rbp-81h]
  __int64 v8; // [rsp+58h] [rbp-79h]
  __int64 v9; // [rsp+60h] [rbp-71h]
  int v10; // [rsp+68h] [rbp-69h]
  int v11; // [rsp+6Ch] [rbp-65h]
  __int64 v12; // [rsp+70h] [rbp-61h]
  int v13; // [rsp+78h] [rbp-59h]
  int v14; // [rsp+7Ch] [rbp-55h]
  __int64 v15; // [rsp+80h] [rbp-51h]
  int v16; // [rsp+88h] [rbp-49h]
  int v17; // [rsp+8Ch] [rbp-45h]
  __int64 v18; // [rsp+90h] [rbp-41h]
  int v19; // [rsp+98h] [rbp-39h]
  int v20; // [rsp+9Ch] [rbp-35h]
  __int64 v21; // [rsp+A0h] [rbp-31h]
  int v22; // [rsp+A8h] [rbp-29h]
  int v23; // [rsp+ACh] [rbp-25h]
  __int64 v24; // [rsp+B0h] [rbp-21h]
  int v25; // [rsp+B8h] [rbp-19h]
  int v26; // [rsp+BCh] [rbp-15h]
  __int64 v27; // [rsp+C0h] [rbp-11h]
  int v28; // [rsp+C8h] [rbp-9h]
  int v29; // [rsp+CCh] [rbp-5h]
  __int64 v30; // [rsp+108h] [rbp+37h] BYREF
  va_list va; // [rsp+108h] [rbp+37h]
  __int64 v32; // [rsp+110h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+3Fh]
  __int64 v34; // [rsp+118h] [rbp+47h] BYREF
  va_list va2; // [rsp+118h] [rbp+47h]
  __int64 v36; // [rsp+120h] [rbp+4Fh]
  __int64 v37; // [rsp+128h] [rbp+57h]
  __int64 v38; // [rsp+130h] [rbp+5Fh]
  __int64 v39; // [rsp+138h] [rbp+67h]
  __int64 v40; // [rsp+140h] [rbp+6Fh]
  __int64 v41; // [rsp+148h] [rbp+77h]
  __int64 v42; // [rsp+150h] [rbp+7Fh]
  va_list va3; // [rsp+158h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  v36 = va_arg(va3, _QWORD);
  v37 = va_arg(va3, _QWORD);
  v38 = va_arg(va3, _QWORD);
  v39 = va_arg(va3, _QWORD);
  v40 = va_arg(va3, _QWORD);
  v41 = va_arg(va3, _QWORD);
  v42 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  va_copy(v7, va2);
  v9 = v36;
  v12 = v37;
  v15 = v38;
  v18 = v39;
  v21 = v40;
  v24 = v41;
  v27 = v42;
  v10 = 4 * v34;
  v13 = 4 * v34;
  v16 = 4 * v34;
  v19 = 4 * v34;
  v22 = 4 * v34;
  v25 = 4 * v34;
  v28 = 4 * v34;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 8LL;
  v8 = 4LL;
  v11 = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  v26 = 0;
  v29 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventPatchLocationList, 0LL, 0xAu, &UserData);
}
