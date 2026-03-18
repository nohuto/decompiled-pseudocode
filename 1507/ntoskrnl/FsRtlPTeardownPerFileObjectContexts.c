/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1404A586C
 * Callers:
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x140071654 (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1400716FC (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
