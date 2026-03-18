/*
 * XREFs of ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C009A094
 * Callers:
 *     ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1C0099F80 (-Delete@CInputQueueProp@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDynamicArray<IInputQueue *,2003858261>::Reset(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    result = Win32FreePool(v4, a2, a3);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
