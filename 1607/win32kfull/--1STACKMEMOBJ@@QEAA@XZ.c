/*
 * XREFs of ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C0135618
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall STACKMEMOBJ::~STACKMEMOBJ(STACKMEMOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    Win32FreePool(v4, a2, a3);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
