/*
 * XREFs of MagpDecomposeDesktop @ 0x14023BE54
 * Callers:
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnSetDesktopTransform @ 0x1401EBF98 (DwmAsyncMagnSetDesktopTransform.c)
 *     MagpRevokeInputTransfrom @ 0x14023BF80 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x140346C28 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x140346CD8 (DwmAsyncMagnSetDesktopColorTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rdi
  void *v8; // rax
  __int64 **v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 *j; // rbx
  __int64 v13; // rdx
  void *v14; // rax

  result = MagpRevokeInputTransfrom();
  if ( a2[30] )
  {
    v8 = (void *)ReferenceDwmApiPort(v6, v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v8);
  }
  if ( a2[29] )
  {
    v9 = (__int64 **)a2[1];
    v10 = **v9;
    v11 = (void *)ReferenceDwmApiPort(*v9, v5);
    result = DwmAsyncMagnSetDesktopTransform(v11, v10, &qword_140367858, 0, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      v13 = j[3];
      if ( v13 != -1 )
      {
        v14 = (void *)ReferenceDwmApiPort(*(_QWORD *)a2[1], v13);
        result = DwmAsyncMagnDestroy(v14);
      }
    }
  }
  return result;
}
