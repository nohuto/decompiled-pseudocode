/*
 * XREFs of BiDoesHiveKeyExist @ 0x14070DDC4
 * Callers:
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 * Callees:
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     BiOpenKeyNonBcd @ 0x14056E31C (BiOpenKeyNonBcd.c)
 */

bool __fastcall BiDoesHiveKeyExist(const WCHAR *a1)
{
  HANDLE v1; // rbx
  bool v3; // di
  int v4; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  HANDLE v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( !wcschr(a1, 0x5Cu) )
  {
    if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0x20019u, &Handle) >= 0 )
    {
      v4 = BiOpenKeyNonBcd(Handle, a1, 0x20019u, &v7);
      v1 = v7;
      v3 = v4 >= 0;
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      ZwClose(v1);
  }
  return v3;
}
