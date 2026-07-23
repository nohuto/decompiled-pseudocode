/*
 * XREFs of ViCiPreprocessOptions @ 0x1407043D0
 * Callers:
 *     VfCheckImageCompliance @ 0x140703D48 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1407041A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 */

ULONG ViCiPreprocessOptions(ULONG *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  unsigned __int64 v8; // r8
  ULONG result; // eax

  if ( *a1 == -1 )
  {
    v8 = a3 & 0xF;
    if ( v8 >= 7 )
      *a1 = 4;
    else
      *a1 = *((_DWORD *)&ViCiDefaultActions + v8);
  }
  result = *a1;
  if ( *a1 )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("*********** Verifier Detected a Code Integrity Issue ************\n");
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** ");
    if ( a2 )
      DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
