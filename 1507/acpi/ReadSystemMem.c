/*
 * XREFs of ReadSystemMem @ 0x1C0016E34
 * Callers:
 *     WriteFieldObj @ 0x1C0011C60 (WriteFieldObj.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     ReadBuffField @ 0x1C0016DA0 (ReadBuffField.c)
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ReadSystemMem(unsigned __int64 Src, size_t Size, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( (unsigned int)Size > 8 )
    return -1LL;
  if ( Src % (unsigned int)Size )
  {
    memmove(&v6, (const void *)Src, (unsigned int)Size);
    v4 = v6;
  }
  else
  {
    switch ( (_DWORD)Size )
    {
      case 1:
        v4 = *(unsigned __int8 *)Src;
        break;
      case 2:
        v4 = *(unsigned __int16 *)Src;
        break;
      case 4:
        v4 = *(unsigned int *)Src;
        break;
      case 8:
        v4 = *(_QWORD *)Src;
        break;
      default:
        v4 = -1LL;
        break;
    }
  }
  return a3 & v4;
}
