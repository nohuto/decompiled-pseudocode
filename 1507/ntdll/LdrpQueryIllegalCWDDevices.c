/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800C0B90
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 */

int __fastcall LdrpQueryIllegalCWDDevices(void *a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  if ( !a1
    || (LODWORD(v1) = RtlQueryImageFileKeyOption(a1, L"CWDIllegalInDLLSearch", 4, (ULONG *)&v5, 4u, 0LL), (int)v1 < 0)
    || (v2 = v5, LODWORD(v1) = v5 + 1, (unsigned int)(v5 + 1) > 3) )
  {
    v2 = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( v2 == 3 )
      v2 = -1;
  }
  if ( v2 == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v2 == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    LODWORD(v1) = 16;
    if ( v2 != 2 )
      LODWORD(v1) = 0;
    LdrpIllegalCWDDevices = (int)v1;
  }
  return (int)v1;
}
