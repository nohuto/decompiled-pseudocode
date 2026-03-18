/*
 * XREFs of CreateProp @ 0x1C0065E08
 * Callers:
 *     NtUserSetProp @ 0x1C0065070 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall CreateProp(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _DWORD *v7; // rax

  v1 = *(_DWORD **)(a1 + 168);
  if ( v1 )
  {
    if ( v1[1] != *v1 )
    {
LABEL_3:
      v3 = *(_QWORD *)(a1 + 168);
      return v3 + 16LL * (unsigned int)(*(_DWORD *)(v3 + 4))++ + 8;
    }
    v5 = DesktopAlloc(*(_QWORD *)(a1 + 24), 16 * *v1 + 24);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, *(const void **)(a1 + 168), 16LL * (unsigned int)(**(_DWORD **)(a1 + 168) - 1) + 24);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, *(PVOID *)(a1 + 168));
      *(_QWORD *)(a1 + 168) = v6;
      ++*v6;
      goto LABEL_3;
    }
  }
  else
  {
    v7 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x18u);
    *(_QWORD *)(a1 + 168) = v7;
    if ( v7 )
    {
      *v7 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
