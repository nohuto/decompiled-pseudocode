/*
 * XREFs of DrvDbGetDriverFileMappedPropertyKeys @ 0x1406E15CC
 * Callers:
 *     DrvDbDispatchDriverFile @ 0x1406E3BD0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1406E2028 (DrvDbGetRegValueMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverFileMappedPropertyKeys(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  int v8; // r10d
  int RegValueMappedPropertyKeys; // ebx
  int v11; // [rsp+20h] [rbp-28h]
  char v12; // [rsp+28h] [rbp-20h]
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF

  v6 = (__int64)a6;
  Handle = 0LL;
  v8 = a3;
  *a6 = 0;
  if ( !a3 )
  {
    v12 = 0;
    v11 = 1;
    RegValueMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 4, a2, v11, v12, &Handle, 0LL);
    if ( RegValueMappedPropertyKeys < 0 )
      goto LABEL_5;
    v8 = (int)Handle;
  }
  RegValueMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                 (_DWORD)a1,
                                 v8,
                                 (unsigned int)&off_14025D7C0,
                                 2,
                                 a4,
                                 a5,
                                 v6);
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedPropertyKeys;
}
