/*
 * XREFs of ?Create@MobileCursor@@SAJPEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180026DC0
 * Callers:
 *     ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025DC0 (-CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0MobileCursor@@IEAA@PEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@@Z @ 0x180026A74 (--0MobileCursor@@IEAA@PEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileCursor::Create(__int64 a1, __int64 a2, __int128 *a3, int a4, __int64 *a5)
{
  unsigned int v9; // ebx
  char v10; // al
  int v11; // r9d
  void *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0;
  if ( a5 )
  {
    *a5 = 0LL;
    v12 = malloc(0x50uLL);
    v13 = (__int64)v12;
    if ( v12 )
      memset(v12, 0, 0x50uLL);
    if ( v13 )
    {
      v16 = *a3;
      v14 = MobileCursor::MobileCursor(v13, a1, a2, &v16, a4);
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      *a5 = v14;
      return v9;
    }
    v10 = 14;
    v9 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 51;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = 87;
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 45;
LABEL_12:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
    }
  }
  return v9;
}
