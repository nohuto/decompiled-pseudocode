/*
 * XREFs of RIMCmDeactivateContact @ 0x1C00E1204
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 *     rimReleaseCursor @ 0x1C00E1400 (rimReleaseCursor.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _DWORD *v4; // rdi
  bool v5; // cf
  __int64 v7; // rdx
  int v8; // esi
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 16);
  v3 = *(_QWORD **)(a2 + 24);
  v4 = a1 + 384;
  v5 = __CFSHR__(*(_DWORD *)(a2 + 32), 3);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = -v5;
  if ( *(_QWORD **)(v7 + 8) != v2 || (_QWORD *)*v3 != v2 )
    __fastfail(3u);
  *v3 = v7;
  *(_QWORD *)(v7 + 8) = v3;
  --a1[392];
  if ( !*(_DWORD *)(a2 + 8) )
    --a1[393];
  if ( !v5 && (a1[172] > 1u || (a1[63] & 0x80u) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xAC8uLL);
  if ( !v8 )
  {
    result = *(_QWORD **)v4;
    if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 )
      __fastfail(3u);
    *v2 = result;
    v2[1] = v4;
    result[1] = v2;
    *(_QWORD *)v4 = v2;
  }
  return result;
}
