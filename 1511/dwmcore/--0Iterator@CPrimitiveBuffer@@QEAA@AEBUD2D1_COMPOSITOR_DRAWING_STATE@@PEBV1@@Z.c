/*
 * XREFs of ??0Iterator@CPrimitiveBuffer@@QEAA@AEBUD2D1_COMPOSITOR_DRAWING_STATE@@PEBV1@@Z @ 0x1800BD17C
 * Callers:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x18002FFDC (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 * Callees:
 *     <none>
 */

CPrimitiveBuffer::Iterator *__fastcall CPrimitiveBuffer::Iterator::Iterator(
        CPrimitiveBuffer::Iterator *this,
        const struct D2D1_COMPOSITOR_DRAWING_STATE *a2,
        const struct CPrimitiveBuffer *a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r8

  v3 = 100 * *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 5) - 1;
  v5 = *((unsigned int *)a2 + 4);
  *(_QWORD *)this = a3;
  v3 += 48;
  *((_DWORD *)this + 6) = v3;
  v6 = v5 + *(_QWORD *)a3;
  *((_QWORD *)this + 1) = v6;
  *((_QWORD *)this + 2) = v6 + (unsigned int)(v3 * v4);
  return this;
}
