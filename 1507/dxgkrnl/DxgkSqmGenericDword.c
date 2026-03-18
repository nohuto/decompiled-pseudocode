/*
 * XREFs of DxgkSqmGenericDword @ 0x1C000EFF0
 * Callers:
 *     DxgkSqmSetDword @ 0x1C001FBB0 (DxgkSqmSetDword.c)
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00BE7A0 (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 *     ?Sqm@DXGKSQM_ADAPTER@@QEAAXXZ @ 0x1C014B37C (-Sqm@DXGKSQM_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

NTSTATUS __fastcall DxgkSqmGenericDword(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
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
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF
  int v16; // [rsp+C0h] [rbp+77h] BYREF

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
    v6 = &unk_1C002E7F0;
    v9 = &v15;
    v12 = &v16;
    v7 = 16;
    v10 = 4;
    v13 = 4;
    return EtwWrite(Microsoft_Windows_DxgKrnlHandle, EventDescriptor, 0LL, 4u, &UserData);
  }
  return result;
}
