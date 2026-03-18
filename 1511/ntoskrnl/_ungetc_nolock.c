/*
 * XREFs of _ungetc_nolock @ 0x14014D0CC
 * Callers:
 *     sub_14014B5B8 @ 0x14014B5B8 (sub_14014B5B8.c)
 *     _input_s @ 0x14014B8EC (_input_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

int __cdecl ungetc_nolock(int Ch, FILE *File)
{
  int flag; // r8d
  char *base; // rax
  char *v5; // rax
  int v6; // eax

  if ( !File )
    goto LABEL_2;
  if ( Ch == -1 )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = File->_base;
  if ( !base )
  {
LABEL_2:
    PopPoCoalescinCallback();
    return -1;
  }
  if ( File->_ptr != base )
    goto LABEL_11;
  if ( File->_cnt )
    return -1;
  ++File->_ptr;
LABEL_11:
  v5 = --File->_ptr;
  if ( (flag & 0x40) != 0 )
  {
    if ( *v5 != (_BYTE)Ch )
    {
      File->_ptr = v5 + 1;
      return -1;
    }
  }
  else
  {
    *v5 = Ch;
  }
  v6 = File->_flag;
  ++File->_cnt;
  File->_flag = v6 & 0xFFFFFFEE | 1;
  return (unsigned __int8)Ch;
}
