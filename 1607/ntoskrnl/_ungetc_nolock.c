/*
 * XREFs of _ungetc_nolock @ 0x1401569C4
 * Callers:
 *     ReadString @ 0x140154EB0 (ReadString.c)
 *     _input_s @ 0x1401551E4 (_input_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
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
    xHalFreeMessageTarget();
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
