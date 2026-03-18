/*
 * XREFs of ?WriteAllocTableDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1C02D48F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::WriteAllocTableDumpBufferCallback(
        NSInstrumentation *this,
        void *a2,
        _DWORD *a3,
        void *a4)
{
  _QWORD *v4; // rax
  unsigned int v5; // eax
  int v6; // ecx

  v4 = *(_QWORD **)a3;
  if ( *(_QWORD *)a3 )
  {
    if ( a3[2] >= 0x10u )
    {
      *v4 = this;
      v4[1] = a2;
      a3[2] -= 16;
      *(_QWORD *)a3 = v4 + 2;
    }
  }
  else
  {
    v5 = a3[2];
    v6 = -1;
    if ( v5 + 16 >= v5 )
      v6 = v5 + 16;
    a3[2] = v6;
  }
}
