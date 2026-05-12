/*
 * XREFs of Template_zqqqqx @ 0x1C0034E84
 * Callers:
 *     RaInitializeRaidResources @ 0x1C00100A0 (RaInitializeRaidResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  unsigned int v9; // ecx
  const wchar_t *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-41h] BYREF
  char *v14; // [rsp+50h] [rbp-31h]
  __int64 v15; // [rsp+58h] [rbp-29h]
  char *v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  char *v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  char *v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  __int64 *v22; // [rsp+90h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+17h]

  v12 = PhysicalMemorySize;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  UserData.Size = v9;
  UserData.Reserved = 0;
  v10 = L"NULL";
  if ( a4 )
    v10 = a4;
  v15 = 4LL;
  UserData.Ptr = (unsigned __int64)v10;
  v17 = 4LL;
  v14 = &a5;
  v19 = 4LL;
  v16 = &a6;
  v21 = 4LL;
  v18 = &a7;
  v23 = 8LL;
  v20 = &a8;
  v22 = &v12;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventSetAdapterResourceList, 0LL, 6u, &UserData);
}
