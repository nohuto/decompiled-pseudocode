/*
 * XREFs of RtlCreateAtomTableEx @ 0x14009CDE4
 * Callers:
 *     RtlCreateAtomTable @ 0x1404ACE18 (RtlCreateAtomTable.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpInitializeLockAtomTable @ 0x1404ACE24 (RtlpInitializeLockAtomTable.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1404ACE2C (RtlpInitializeHandleTableForAtomTable.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 *     RtlpAllocateAtom @ 0x14051CF10 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v6; // ebp
  unsigned __int64 v7; // rax
  size_t v8; // rsi
  _DWORD *Atom; // rax
  _DWORD *v10; // rbx

  v3 = 0;
  v6 = a1;
  if ( *a3 )
    return v3;
  if ( a1 <= 1 )
    v6 = 37;
  v7 = 48LL * (unsigned int)(v6 - 1);
  if ( is_mul_ok(0x30uLL, (unsigned int)(v6 - 1)) )
  {
    v8 = v7 + 40;
    if ( v7 + 40 >= v7 )
    {
      Atom = (_DWORD *)RtlpAllocateAtom(v7 + 40, 1416459329LL);
      v10 = Atom;
      if ( Atom )
      {
        memset(Atom, 0, v8);
        v10[7] = v6;
        if ( (unsigned __int8)RtlpInitializeHandleTableForAtomTable(v10) )
        {
          RtlpInitializeLockAtomTable(v10);
          *v10 = 1836020801;
          v10[1] = 1;
          v10[6] = a2;
          *a3 = v10;
        }
        else
        {
          v3 = -1073741801;
          RtlpFreeAtom(v10);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v3;
    }
  }
  return 3221225621LL;
}
