/*
 * XREFs of CmpInitializeKeyNameString @ 0x140608D88
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeKeyNameString(ULONG_PTR BugCheckParameter3, __int64 a2, _WORD *a3)
{
  __int16 v3; // ax
  unsigned __int16 v4; // ax
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11

  v3 = *(_WORD *)(BugCheckParameter3 + 72);
  if ( (*(_BYTE *)(BugCheckParameter3 + 2) & 0x20) != 0 )
  {
    v4 = 2 * v3;
    *(_WORD *)a2 = v4;
    if ( v4 > 0x200u )
      KeBugCheckEx(0x51u, 0x31uLL, 0LL, BugCheckParameter3, v4);
    result = CmpCopyCompressedName(
               a3,
               0x200u,
               (unsigned __int8 *)(BugCheckParameter3 + 76),
               *(unsigned __int16 *)(BugCheckParameter3 + 72));
    *(_QWORD *)(v6 + 8) = v7;
    *(_WORD *)(v6 + 2) = 512;
  }
  else
  {
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 76;
    result = *(unsigned __int16 *)(BugCheckParameter3 + 52);
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
