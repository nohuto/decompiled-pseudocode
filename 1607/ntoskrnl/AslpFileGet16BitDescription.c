/*
 * XREFs of AslpFileGet16BitDescription @ 0x1406C6E5C
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7980 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileQuery16BitDescription @ 0x1406C8A70 (AslpFileQuery16BitDescription.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(wchar_t **a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-128h]
  int v9; // [rsp+20h] [rbp-128h]
  char v10[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 576) == 5 )
  {
    memset(v10, 0, sizeof(v10));
    v4 = AslpFileQuery16BitDescription(v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = AslStringAnsiToUnicode(a1, v10);
      v7 = v6;
      if ( v6 < 0 )
      {
        v9 = v6;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGet16BitDescription",
          3332,
          (unsigned int)"AslStringAnsiToUnicode failed [%x]",
          v9);
      }
      return v7;
    }
    else
    {
      v8 = v4;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGet16BitDescription",
        3326,
        (unsigned int)"AslpFileQuery16BitDescription failed [%x]",
        v8);
      return v5;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
