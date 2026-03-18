/*
 * XREFs of MmWriteUnloadedDriverInformation @ 0x140218E9C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall MmWriteUnloadedDriverInformation(_DWORD *a1)
{
  _QWORD *v1; // rdx
  _OWORD *v3; // rsi
  __int64 v4; // r14
  _QWORD *v5; // rbx
  int v6; // ebp
  __int64 result; // rax
  size_t v8; // r8

  v1 = qword_140350048;
  if ( qword_140350048 )
  {
    v3 = a1 + 2;
    v4 = (unsigned int)(dword_140350044 - 1);
    v5 = a1 + 6;
    v6 = 0;
    while ( 1 )
    {
      result = 49LL;
      if ( (unsigned int)v4 >= 0x32 )
        v4 = 49LL;
      *v3 = *(_OWORD *)&v1[5 * v4];
      if ( !v1[5 * v4 + 1] )
        break;
      v5[3] = v1[5 * v4 + 2];
      v5[4] = v1[5 * v4 + 3];
      if ( *(_WORD *)v3 > 0x18u )
        *(_WORD *)v3 = 24;
      if ( *((_WORD *)v5 - 7) > 0x18u )
        *((_WORD *)v5 - 7) = 24;
      v8 = *((unsigned __int16 *)v5 - 7);
      *(v5 - 1) = v5;
      result = (__int64)memmove(v5, (const void *)v1[5 * v4 + 1], v8);
      v3 = (_OWORD *)((char *)v3 + 56);
      v5 += 7;
      v4 = (unsigned int)(v4 - 1);
      if ( (unsigned int)++v6 >= 0x32 )
        break;
      v1 = qword_140350048;
    }
    *a1 = v6;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
