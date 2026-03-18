/*
 * XREFs of WdipSemSqmAddToStream @ 0x14065CDDC
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404B6B3C (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x14065D00C (WdipSemSqmLogTimeoutDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140504CCC (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemSqmAddToStream(char *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-B0h] BYREF
  int *v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  int *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  char v21; // [rsp+9Ch] [rbp-64h] BYREF
  int v22; // [rsp+260h] [rbp+160h] BYREF

  v22 = (int)a1;
  v10 = a2;
  v7 = 1;
  v9 = 48;
  v8 = 11;
  if ( !a3 || a2 - 1 > 8 )
    return -1073741811;
  v11.Reserved = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v11.Ptr = (ULONGLONG)&WinSqmGlobalSession;
  v12 = &v22;
  v15 = &v8;
  v18 = (int *)&v10;
  v11.Size = 16;
  v13 = 4;
  v16 = 4;
  v19 = 4;
  if ( a2 )
  {
    v3 = 6;
    v4 = a2;
    a1 = &v21;
    do
    {
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 - 12) = &v7;
      *((_DWORD *)a1 - 1) = 4;
      *((_DWORD *)a1 + 4) = 0;
      *(_QWORD *)(a1 + 4) = a3;
      a3 += 4LL;
      *((_DWORD *)a1 + 3) = 4;
      a1 += 48;
      v5 = v3;
      v3 += 3;
      v5 *= 2LL;
      *(&v11.Reserved + 2 * v5) = 0;
      *(&v11.Ptr + v5) = (ULONGLONG)&v9;
      *(&v11.Size + 2 * v5) = 4;
      --v4;
    }
    while ( v4 );
  }
  return WdipSemWriteEvent((__int64)a1, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM, 0LL, a2 + 2 * (a2 + 2), &v11);
}
