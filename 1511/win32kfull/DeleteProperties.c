/*
 * XREFs of DeleteProperties @ 0x1C00F2C8C
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall DeleteProperties(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  PVOID *i; // rbx
  __int16 v5; // cx
  BOOLEAN result; // al

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(_DWORD *)(v1 + 4);
  for ( i = (PVOID *)(v1 + 8); v3; --v3 )
  {
    v5 = *((_WORD *)i + 5);
    if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 0x8001) == 0x8001 )
      {
        (**(void (__fastcall ***)(PVOID))*i)(*i);
      }
      else if ( (v5 & 8) != 0 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, *i);
      }
      else if ( (v5 & 4) == 0 )
      {
        Win32FreePool(*i);
      }
    }
    i += 2;
  }
  result = RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, *(PVOID *)(a1 + 168));
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
