/*
 * XREFs of PoSetSystemWake @ 0x1401FF2AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoSetSystemWake(PIRP Irp)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  if ( !*(_BYTE *)(v1 + 184) )
    *(_BYTE *)(v1 + 240) = 1;
}
