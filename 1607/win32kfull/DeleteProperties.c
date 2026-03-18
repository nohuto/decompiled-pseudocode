/*
 * XREFs of DeleteProperties @ 0x1C0098D10
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

__int64 __fastcall DeleteProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // esi
  _QWORD *i; // rbx
  __int16 v7; // cx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_DWORD *)(v3 + 4);
  for ( i = (_QWORD *)(v3 + 8); v5; --v5 )
  {
    v7 = *((_WORD *)i + 5);
    if ( (v7 & 1) != 0 )
    {
      if ( (v7 & 0x8001) == 0x8001 )
      {
        (**(void (__fastcall ***)(_QWORD))*i)(*i);
      }
      else if ( (v7 & 8) != 0 )
      {
        DesktopFree(*(_QWORD *)(a1 + 24));
      }
      else if ( (v7 & 4) == 0 )
      {
        Win32FreePool(*i, a2, a3);
      }
    }
    i += 2;
  }
  result = DesktopFree(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
