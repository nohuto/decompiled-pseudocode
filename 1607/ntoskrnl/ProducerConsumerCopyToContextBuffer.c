/*
 * XREFs of ProducerConsumerCopyToContextBuffer @ 0x1403CD470
 * Callers:
 *     PopCountDataAsProduced @ 0x1403CD378 (PopCountDataAsProduced.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyToContextBuffer(char *Src, size_t Size, __int64 a3, char *a4)
{
  __int64 v4; // r11
  unsigned int v7; // ebx
  int v8; // r10d
  __int64 v9; // rsi
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  if ( (unsigned __int64)a4 >= v4 + *(_QWORD *)a3 )
    a4 -= v4;
  v7 = 0;
  v8 = (_DWORD)a4 - *(_DWORD *)a3;
  if ( v8 + (int)Size > (unsigned int)v4 )
  {
    v7 = Size + v8 - v4;
    LODWORD(Size) = v4 - v8;
  }
  v9 = (unsigned int)Size;
  result = memmove(a4, Src, (unsigned int)Size);
  if ( v7 )
    return memmove(*(void **)a3, &Src[v9], v7);
  return result;
}
