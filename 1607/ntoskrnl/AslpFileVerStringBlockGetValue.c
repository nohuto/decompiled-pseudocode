/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x1406C93DC
 * Callers:
 *     AslpFileQueryVersionString @ 0x1406C8FB4 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1402339C8 (AslpFileVerBlockGetValueOffset.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(const wchar_t **a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  size_t v9; // rcx
  const wchar_t *v10; // rdi
  size_t v11; // rbx
  size_t v12; // [rsp+40h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v9 = 0LL;
        v10 = (const wchar_t *)(v12 + a3 - 2);
      }
      else
      {
        v10 = (const wchar_t *)(v12 + a3);
        v11 = a4 - v12;
        if ( RtlStringCbLengthW(v10, v11, &pcbLength) >= 0 )
        {
          v9 = pcbLength;
        }
        else
        {
          v9 = v11 - 2;
          v10[(v11 - 2) >> 1] = 0;
        }
      }
      result = 0;
      *a2 = v9 >> 1;
      *a1 = v10;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
