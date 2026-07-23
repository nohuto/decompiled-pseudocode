/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14046A554
 * Callers:
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x14007B53C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x14007B5DC (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  IoGetFileObjectFilterContext(a1, &P, 0LL, a4);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1, (__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
