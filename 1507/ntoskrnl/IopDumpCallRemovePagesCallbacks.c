/*
 * XREFs of IopDumpCallRemovePagesCallbacks @ 0x1401F4784
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 * Callees:
 *     IopRemovePageDumpRange @ 0x1401F4C48 (IopRemovePageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402028D0 (KeValidateBugCheckCallbackRecord.c)
 */

char __fastcall IopDumpCallRemovePagesCallbacks(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int64 v6; // [rsp+28h] [rbp-50h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  int v8; // [rsp+34h] [rbp-44h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h]

  v1 = &retaddr;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v13 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v14 = v3;
    if ( (__int64 *)v3 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    LOBYTE(v1) = KeValidateBugCheckCallbackRecord(v3, 6LL, &v13);
    if ( (_BYTE)v1 )
    {
      v6 = 0LL;
      v8 = a1;
      v4 = 0;
      do
      {
        v9 = 0LL;
        v7 = 0;
        v10 = 0LL;
        v12 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(v3 + 16))(6LL, v3, &v6);
        if ( v4 >= 0 )
        {
          if ( v10 )
            v4 = IopRemovePageDumpRange(&v6, &v12);
        }
      }
      while ( v12 );
      LOBYTE(v1) = (v4 < 0) + 3;
      *(_BYTE *)(v3 + 44) = (_BYTE)v1;
    }
    else if ( !v13 )
    {
      return (char)v1;
    }
    v3 = *(_QWORD *)v3;
  }
  return (char)v1;
}
