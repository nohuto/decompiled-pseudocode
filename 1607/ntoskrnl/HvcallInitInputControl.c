/*
 * XREFs of HvcallInitInputControl @ 0x140171A60
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140620478 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
