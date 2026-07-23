/*
 * XREFs of MiApplyCompressedFixups @ 0x140509CB0
 * Callers:
 *     MiPerformFixups @ 0x140509BC0 (MiPerformFixups.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiApplyCompressedFixups(
        ULONG_PTR BugCheckParameter2,
        _QWORD *BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax
  unsigned __int16 v6; // r10
  char v7; // r11
  unsigned __int8 *BugCheckParameter4; // rbx
  unsigned __int8 v9; // dl
  unsigned int v10; // edx

  result = BugCheckParameter3;
  v6 = 4;
  v7 = *(_BYTE *)(**(_QWORD **)(BugCheckParameter2 + 96) + 68LL) & 0xF;
  BugCheckParameter4 = (unsigned __int8 *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  while ( 1 )
  {
    v9 = *BugCheckParameter4++;
    if ( (v9 & 0xF0) == 0xF0 )
      break;
    if ( v9 != 0xEF )
    {
      if ( v9 >= 0xEBu )
      {
        v10 = 239 - v9;
        goto LABEL_7;
      }
      v6 = v9;
      goto LABEL_6;
    }
    v10 = *BugCheckParameter4;
    if ( v10 <= 4 )
      KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    ++BugCheckParameter4;
    do
    {
LABEL_7:
      result = (_QWORD *)((char *)result + v6);
      if ( result >= BugCheckParameter3 + 512 )
        KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      if ( v7 == 10 )
      {
        if ( ((unsigned __int16)result & 0xFFFu) <= 0xFF8 )
          *result += a4;
      }
      else if ( v7 && v7 == 3 && ((unsigned __int16)result & 0xFFFu) <= 0xFFC )
      {
        *(_DWORD *)result += a4;
      }
      --v10;
    }
    while ( v10 );
  }
  if ( *BugCheckParameter4 )
  {
    v6 = (16 * *BugCheckParameter4++) | v9 & 0xF;
LABEL_6:
    v10 = 1;
    goto LABEL_7;
  }
  return result;
}
