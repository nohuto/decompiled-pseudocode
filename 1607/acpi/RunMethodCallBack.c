/*
 * XREFs of RunMethodCallBack @ 0x1C005B570
 * Callers:
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 * Callees:
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 */

void __fastcall RunMethodCallBack(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 *v6; // rdx
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rbx

  v3 = *a1;
  if ( a2 )
  {
    if ( dword_1C0074698 )
    {
      ObjectPath = GetObjectPath(v3);
      v10 = (const char *)qword_1C002C340;
      v11 = (void *)ObjectPath;
      if ( ObjectPath )
        v10 = (const char *)ObjectPath;
      ConPrintf("\n%s failed with the following error:\n%s\n", v10, byte_1C007469C);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v5 = GetObjectPath(v3);
    v6 = qword_1C002C340;
    v7 = (void *)v5;
    if ( v5 )
      v6 = (__int64 *)v5;
    ConPrintf("\n%s completed successfully with object data:\n", v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    DumpObject(a3, v8, 0LL);
  }
  fRunningMethod = 0;
}
