/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050630
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIoctlEvalPostProcessing @ 0x1C0007C20 (ACPIIoctlEvalPostProcessing.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  int v6; // edi
  int v7; // eax

  v6 = a2;
  if ( a2 >= 0 )
  {
    v7 = ACPIIoctlEvalPostProcessing(a4, (__int64)a3, (__int64)a3, (__int64)a4);
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    v6 = v7;
    FreeDataBuffs((__int64)a3, 1u);
  }
  ExFreePoolWithTag(a3, 0);
  a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v6;
  IofCompleteRequest(a4, 0);
}
