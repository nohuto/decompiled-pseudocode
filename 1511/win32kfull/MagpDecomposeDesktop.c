/*
 * XREFs of MagpDecomposeDesktop @ 0x1C00D3D34
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C00D3DA0 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C025E7C0 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C025E864 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C025E93C (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rdi
  void *v10; // rax
  void *v11; // rax
  __int64 *j; // rbx
  void *v13; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 224) )
  {
    v10 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
    result = DwmAsyncMagnSetDesktopColorTransform(v10);
  }
  if ( *(_QWORD *)(a2 + 216) )
  {
    v11 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
    result = DwmAsyncMagnSetDesktopTransform(v11, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      result = j[3];
      if ( result != -1 )
      {
        v13 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
        result = DwmAsyncMagnDestroy(v13);
      }
    }
  }
  return result;
}
