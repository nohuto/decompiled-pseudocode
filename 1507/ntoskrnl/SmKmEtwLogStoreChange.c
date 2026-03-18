/*
 * XREFs of SmKmEtwLogStoreChange @ 0x1406DC70C
 * Callers:
 *     SmKmStoreAdd @ 0x1404F97FC (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x1404FA05C (SmKmStoreDelete.c)
 *     SmKmEtwLogStoreRundown @ 0x1405B5E50 (SmKmEtwLogStoreRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140259250 (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreChange(REGHANDLE *a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8
  int v7; // edx
  __int64 *v8; // rcx
  __int64 v9; // rax
  ULONG UserDataCount; // edx
  _QWORD v12[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v15[288]; // [rsp+120h] [rbp+20h] BYREF

  v14.Ptr = 0LL;
  *(_QWORD *)&v14.Size = 0LL;
  memset(v15, 0, sizeof(v15));
  memset(v13, 0, 152);
  memset(v12, 0, 0x20uLL);
  HIDWORD(v12[2]) = 19;
  v12[1] = v13;
  UserData = &v14;
  v12[0] = &v14;
  HIDWORD(v12[3]) = 152;
  if ( a3 == (const EVENT_DESCRIPTOR *)&SmEventStoreDelete )
  {
    v7 = v12[2];
    v8 = (_QWORD *)((char *)v13 + LODWORD(v12[3]));
    v12[4] = a2;
    v9 = 2LL * LODWORD(v12[2]);
    *v8 = a2;
    *(&v14.Reserved + 2 * v9) = 0;
    UserDataCount = v7 + 1;
    *(&v14.Ptr + v9) = (ULONGLONG)v8;
    *(&v14.Size + 2 * v9) = 8;
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(a2, (__int64)v12);
    UserDataCount = v12[2];
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)v12[0];
  }
  return EtwWriteEx(*a1, a3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
