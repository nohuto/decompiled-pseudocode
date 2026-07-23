/*
 * XREFs of KsepDsEventPoolAllocate @ 0x1401DDCB0
 * Callers:
 *     KseDsHookExAllocatePool @ 0x1401DD174 (KseDsHookExAllocatePool.c)
 *     KseDsHookExAllocatePoolWithTag @ 0x1401DD1C0 (KseDsHookExAllocatePoolWithTag.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char KsepDsEventPoolAllocate(__int64 a1, __int64 a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v7; // [rsp+48h] [rbp-11h]
  int v8; // [rsp+50h] [rbp-9h]
  int v9; // [rsp+54h] [rbp-5h]
  int *v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  va_list v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+74h] [rbp+1Bh]
  va_list v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+84h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v21; // [rsp+C0h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D0h] [rbp+77h]
  va_list va1; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v3 = &retaddr;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v4 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseDsEventPoolAllocate);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v7 = &v21;
      UserData.Size = 8;
      v10 = &v22;
      v8 = 8;
      va_copy(v13, va);
      va_copy(v16, va1);
      v11 = 4;
      v14 = 8;
      v17 = 4;
      LOBYTE(v3) = EtwWrite(v4, &KseDsEventPoolAllocate, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
