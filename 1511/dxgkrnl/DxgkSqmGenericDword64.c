/*
 * XREFs of DxgkSqmGenericDword64 @ 0x1C001F850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

NTSTATUS __fastcall DxgkSqmGenericDword64(PCEVENT_DESCRIPTOR EventDescriptor, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  int Id; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  void *v6; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+5Ch] [rbp+13h]
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  if ( Microsoft_Windows_DxgKrnlHandle )
  {
    Id = EventDescriptor->Id;
    UserData.Reserved = 0;
    v8 = 0;
    v11 = 0;
    v14 = 0;
    UserData.Ptr = (ULONGLONG)&Id;
    UserData.Size = 4;
    v6 = &unk_1C002E680;
    v9 = &v15;
    v12 = &v16;
    v7 = 16;
    v10 = 4;
    v13 = 8;
    return EtwWrite(Microsoft_Windows_DxgKrnlHandle, EventDescriptor, 0LL, 4u, &UserData);
  }
  return result;
}
