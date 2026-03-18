/*
 * XREFs of sub_140019BB0 @ 0x140019BB0
 * Callers:
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     RtlStringCchCatExW @ 0x14015DC20 (RtlStringCchCatExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140019BB0(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 result; // rax

  v4 = 0;
  v5 = 0LL;
  if ( a2 )
  {
    v6 = 2147483646LL;
    v7 = a4 - (_QWORD)a1;
    while ( v6 )
    {
      v8 = *(_WORD *)((char *)a1 + v7);
      if ( !v8 )
        break;
      *a1 = v8;
      --v6;
      ++a1;
      ++v5;
      if ( !--a2 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    --a1;
    v4 = -2147483643;
    --v5;
  }
  *a1 = 0;
  result = v4;
  if ( a3 )
    *a3 = v5;
  return result;
}
