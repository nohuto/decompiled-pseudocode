/*
 * XREFs of KeInitializePriQueue @ 0x14016CF90
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 *     ExpAllocatePoolForNode @ 0x1406F778C (ExpAllocatePoolForNode.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeInitializePriQueue(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  __int64 v3; // r9
  unsigned __int64 result; // rax

  *(_WORD *)a1 = 21;
  *(_BYTE *)(a1 + 2) = -84;
  v2 = (_DWORD *)(a1 + 536);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 680) = a1 + 672;
  v3 = 32LL;
  *(_QWORD *)(a1 + 672) = a1 + 672;
  result = a1 + 24;
  do
  {
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
    result += 16LL;
    *v2++ = 0;
    --v3;
  }
  while ( v3 );
  if ( a2 )
  {
    *(_DWORD *)(a1 + 664) = a2;
  }
  else
  {
    result = (unsigned int)KeNumberProcessors_0;
    *(_DWORD *)(a1 + 664) = KeNumberProcessors_0;
  }
  return result;
}
