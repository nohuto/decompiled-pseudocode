/*
 * XREFs of PfTFreeBufferList @ 0x1403E7798
 * Callers:
 *     PfTCreateTraceDump @ 0x1403E7070 (PfTCreateTraceDump.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PfTLbInitialize @ 0x1403E785C (PfTLbInitialize.c)
 */

__int64 __fastcall PfTFreeBufferList(unsigned int *a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebp
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax

  v1 = a1 + 6;
  v2 = *a1 >> 4;
  while ( 1 )
  {
    v4 = v1[1];
    if ( *v1 == v4 )
      break;
    v5 = (_QWORD *)v1[1];
    v6 = *(_QWORD **)(v4 + 8);
    if ( (_QWORD *)*v5 != v1 || (_QWORD *)*v6 != v5 )
      __fastfail(3u);
    v1[1] = v6;
    *v6 = v1;
    if ( (*a1 & 0xF) != 0 )
    {
      memset(v5, 0, v2);
      v5[1] = v5;
      *v5 = v5;
      *((_DWORD *)v5 + 8) = 2048;
    }
    else
    {
      PfTLbInitialize(v5, v2, 1LL);
    }
    *v5 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = v5;
    ++*((_WORD *)a1 + 5);
  }
  result = *a1;
  if ( (result & 0xF) == 0 )
    return PfTLbInitialize(*v1, v2, 1LL);
  return result;
}
