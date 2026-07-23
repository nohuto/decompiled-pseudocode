/*
 * XREFs of IopDumpCallRemovePagesCallbacks @ 0x1401C7128
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 * Callees:
 *     IopRemovePageDumpRange @ 0x1401C76A0 (IopRemovePageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401D4CF8 (KeValidateBugCheckCallbackRecord.c)
 */

char __fastcall IopDumpCallRemovePagesCallbacks(int a1)
{
  char result; // al
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  char v9; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  result = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v11 = v3;
    if ( (__int64 *)v3 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    result = KeValidateBugCheckCallbackRecord(v3, 6LL, &v10);
    if ( result )
    {
      v5 = 0LL;
      HIDWORD(v6) = a1;
      v4 = 0;
      do
      {
        v7 = 0LL;
        LODWORD(v6) = 0;
        v8 = 0LL;
        v9 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(v3 + 16))(6LL, v3, &v5);
        if ( v4 >= 0 )
        {
          if ( v8 )
            v4 = IopRemovePageDumpRange(&v5, &v9);
        }
      }
      while ( v9 );
      result = (v4 < 0) + 3;
      *(_BYTE *)(v3 + 44) = result;
    }
    else if ( !v10 )
    {
      return result;
    }
    v3 = *(_QWORD *)v3;
  }
  return result;
}
