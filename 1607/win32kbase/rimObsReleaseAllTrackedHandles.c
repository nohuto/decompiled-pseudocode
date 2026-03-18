/*
 * XREFs of rimObsReleaseAllTrackedHandles @ 0x1C00E063C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000A230 (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall rimObsReleaseAllTrackedHandles(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v3 = *(_QWORD **)(a1 + 120);
  while ( v3 != v1 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    ObCloseHandle((HANDLE)v4[2], *(_BYTE *)(a1 + 64));
    v5 = *v4;
    v6 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool();
  }
}
