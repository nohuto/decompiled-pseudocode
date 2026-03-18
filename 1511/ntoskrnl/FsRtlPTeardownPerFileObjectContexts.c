/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14049D18C
 * Callers:
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x14007BE18 (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1400D7C40 (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExFreePoolWithTag(P, 0);
  }
}
