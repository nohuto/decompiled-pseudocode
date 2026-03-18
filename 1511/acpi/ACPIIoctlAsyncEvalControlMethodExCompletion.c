/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C003D280
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C000A71C (ACPIIoctlEvalPostProcessingEx.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodExCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  int v6; // edi
  int v7; // eax

  v6 = a2;
  if ( a2 >= 0 )
  {
    v7 = ACPIIoctlEvalPostProcessingEx(a4, (__int64)a3, (__int64)a3, (__int64)a4);
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    v6 = v7;
    FreeDataBuffs((__int64)a3, 1u);
  }
  ExFreePoolWithTag(a3, 0);
  a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v6;
  IofCompleteRequest(a4, 0);
}
