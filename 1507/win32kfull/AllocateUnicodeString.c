/*
 * XREFs of AllocateUnicodeString @ 0x1C00F47D4
 * Callers:
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     xxxSetClassData @ 0x1C0127AFC (xxxSetClassData.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // ax
  USHORT v5; // di
  WCHAR *v6; // rax
  unsigned int v7; // eax

  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0LL);
    return 1LL;
  }
  v4 = *a2;
  v5 = *a2 + 2;
  if ( (unsigned __int16)(v4 + 2) >= v4 )
  {
    v6 = (WCHAR *)Win32AllocPoolWithQuota((unsigned __int16)(v4 + 2), 2020897621LL);
    a1->Buffer = v6;
    if ( v6 )
    {
      memmove(v6, *((const void **)a2 + 1), *a2);
      a1->MaximumLength = v5;
      v7 = *a2;
      a1->Length = v7;
      a1->Buffer[(unsigned __int64)v7 >> 1] = 0;
      return 1LL;
    }
  }
  return 0LL;
}
