/*
 * XREFs of EtwExitProcess @ 0x140504694
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

void __fastcall EtwExitProcess(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = *(PVOID **)(a1 + 1080);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 1080) = 0LL;
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      ObfDereferenceObject((PVOID)((unsigned __int64)v1 ^ 1));
    }
    else
    {
      if ( *v1 )
        ObfDereferenceObject(*v1);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
