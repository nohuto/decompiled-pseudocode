/*
 * XREFs of ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0112E00
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 * Callees:
 *     IsEqualInputSource @ 0x1C0112E64 (IsEqualInputSource.c)
 */

struct tagQMSG *__fastcall GetCoalesceableMouseMessage(
        int a1,
        unsigned __int64 *a2,
        struct tagQMSG *a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v6; // r8
  int v7; // r10d
  unsigned __int16 v8; // r11
  __int16 v9; // r11d^2
  unsigned __int16 v10; // cx

  if ( !a3 )
    return 0LL;
  do
  {
    if ( *((_DWORD *)a3 + 6) != 255 )
      break;
    a3 = (struct tagQMSG *)*((_QWORD *)a3 + 1);
  }
  while ( a3 );
  if ( !a3
    || (*((_DWORD *)a3 + 25) & 2) != 0
    || *((_DWORD *)a3 + 6) != a1
    || !(unsigned int)IsEqualInputSource((char *)a3 + 120) )
  {
    return 0LL;
  }
  if ( ((v7 - 522) & 0xFFFFFFFB) == 0 )
  {
    v10 = *(_WORD *)(v6 + 34) + v9;
    if ( abs16(v10) <= 0x7FFFu )
    {
      *a2 = v8 | (unsigned __int64)(v10 << 16);
      return (struct tagQMSG *)v6;
    }
    return 0LL;
  }
  return (struct tagQMSG *)v6;
}
