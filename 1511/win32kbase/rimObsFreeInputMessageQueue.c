/*
 * XREFs of rimObsFreeInputMessageQueue @ 0x1C00D3500
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall rimObsFreeInputMessageQueue(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 136);
  v3 = *(_QWORD **)(a1 + 136);
  while ( v3 != v1 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    v5 = *v4;
    v6 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool();
  }
  *(_DWORD *)(a1 + 152) = -1;
}
