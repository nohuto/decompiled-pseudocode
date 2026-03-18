/*
 * XREFs of KiScanBugCheckCallbackList @ 0x1401C6728
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

void KiScanBugCheckCallbackList()
{
  __int64 v0; // rbx
  __int64 *v1; // r10
  __int64 v2; // r9
  unsigned int i; // r8d
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64, char *, __int64); // r8

  v0 = KeBugCheckCallbackListHead;
  if ( KeBugCheckCallbackListHead && qword_1402E8C08 )
  {
    v1 = &KeBugCheckCallbackListHead;
    while ( (__int64 *)v0 != &KeBugCheckCallbackListHead && (v0 & 7) == 0 )
    {
      v2 = v0;
      for ( i = 0; i < 0x40; i = v4 + 1 )
      {
        if ( !MiIsAddressValid(v2) )
          return;
        v2 = v5 + 1;
      }
      if ( *(__int64 **)(v0 + 8) != v1 )
        break;
      v6 = *(unsigned int *)(v0 + 32);
      v7 = *(_QWORD *)(v0 + 24);
      v8 = *(void (__fastcall **)(__int64, __int64, char *, __int64))(v0 + 16);
      if ( *(_BYTE *)(v0 + 56) == 1
        && *(void (__fastcall **)(__int64, __int64, char *, __int64))(v0 + 48) == (void (__fastcall *)(__int64, __int64, char *, __int64))((char *)v8 + v6 + *(_QWORD *)(v0 + 40) + v7) )
      {
        *(_BYTE *)(v0 + 56) = 2;
        v8(v7, v6, (char *)v8, v2);
        *(_BYTE *)(v0 + 56) = 3;
      }
      v1 = (__int64 *)v0;
      v0 = *(_QWORD *)v0;
    }
  }
}
