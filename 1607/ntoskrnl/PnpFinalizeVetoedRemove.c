/*
 * XREFs of PnpFinalizeVetoedRemove @ 0x140642A98
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventBuildPdoList @ 0x1404857D0 (PiEventBuildPdoList.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 */

__int16 __fastcall PnpFinalizeVetoedRemove(__int64 a1, int a2, UNICODE_STRING *a3)
{
  _DWORD *v3; // rax
  int v4; // ebx
  UNICODE_STRING *v8; // rcx
  wchar_t *Buffer; // rax
  wchar_t *v10; // rcx

  v3 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  if ( v3 )
    *v3 = a2;
  v8 = *(UNICODE_STRING **)(a1 + 56);
  if ( v8 && a3 )
    RtlCopyUnicodeString(v8, a3);
  LODWORD(Buffer) = *(_DWORD *)(a1 + 136);
  if ( ((unsigned __int8)Buffer & 8) != 0 && a2 == 6 )
  {
    Buffer = a3->Buffer;
    v10 = (wchar_t *)((char *)Buffer + a3->Length);
    if ( Buffer < v10 )
    {
      while ( *Buffer != 92 || ++v4 != 3 )
      {
        if ( ++Buffer >= v10 )
          return (__int16)Buffer;
      }
      LOWORD(Buffer) = (_WORD)Buffer - LOWORD(a3->Buffer);
      a3->Length = (unsigned __int16)Buffer;
    }
  }
  return (__int16)Buffer;
}
