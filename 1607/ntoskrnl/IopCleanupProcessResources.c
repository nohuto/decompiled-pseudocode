/*
 * XREFs of IopCleanupProcessResources @ 0x1404CC840
 * Callers:
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1400A1CF8 (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 1, 1);
  while ( a3 )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
    a3 = *(_QWORD *)(a3 + 40);
  }
  return result;
}
