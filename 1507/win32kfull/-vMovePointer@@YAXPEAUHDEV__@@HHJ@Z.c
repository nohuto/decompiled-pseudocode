/*
 * XREFs of ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C0040A6C
 * Callers:
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     ?GreHidePointer@@YAXPEAUHDEV__@@@Z @ 0x1C015B6E8 (-GreHidePointer@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     EngpMovePointer @ 0x1C02621C4 (EngpMovePointer.c)
 */

void __fastcall vMovePointer(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  int v6; // eax
  __int64 v7; // rbp
  struct _SURFOBJ *v8; // rbp
  void (__fastcall *v9)(struct _SURFOBJ *); // rax
  LONG cy; // ecx
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v12)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax

  v3 = a3;
  v4 = a2;
  if ( a1[20] != (_DWORD)a2 || a1[21] != (_DWORD)a3 || (a1[14] & 0x100000) != 0 )
  {
    v6 = a1[14];
    a1[20] = a2;
    a1[21] = a3;
    if ( (v6 & 0x400) == 0 )
    {
      v7 = *((_QWORD *)a1 + 322);
      if ( v7 )
      {
        v8 = (struct _SURFOBJ *)(v7 + 24);
        if ( (v6 & 2) != 0 )
        {
          v9 = (void (__fastcall *)(struct _SURFOBJ *))*((_QWORD *)a1 + 432);
          if ( v9 )
          {
            v9(v8);
          }
          else
          {
            v12 = (void (__fastcall *)(struct _SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 370);
            if ( v12 )
              v12(v8, a2, a3, 0LL);
          }
        }
        if ( (a1[14] & 4) != 0 )
          EngpMovePointer(v8, v4, v3);
        if ( (a1[462] & 0x10000) != 0 && v3 != -1 && v4 < v8->sizlBitmap.cx )
        {
          cy = v8->sizlBitmap.cy;
          if ( v3 < cy )
          {
            v11 = (void (__fastcall *)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 370);
            if ( v11 )
              v11(v8, (unsigned int)v4, (unsigned int)(v3 - cy), 0LL);
          }
        }
      }
    }
  }
}
