/*
 * XREFs of MiSystemWsMetaPage @ 0x1400C0118
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 * Callees:
 *     MiPageInRange @ 0x1400C0208 (MiPageInRange.c)
 */

__int64 __fastcall MiSystemWsMetaPage(__int64 a1, _QWORD *a2)
{
  ULONG_PTR *v3; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v3 = &BugCheckParameter2;
  v5 = 0;
  while ( 1 )
  {
    if ( *(v3 - 11) )
    {
      v6 = *v3;
      if ( ((*v3 >> 18) & 0x3FFFFFF8) == 0x3DE00000 )
        v6 = 0xFFFFF78000200000uLL;
      result = MiPageInRange(
                 a1,
                 ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                 (((unsigned __int64)(*(_QWORD *)(*v3 + 104) - 1LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                 1LL);
      if ( (_DWORD)result )
        break;
    }
    ++v5;
    v3 += 32;
    if ( v5 >= 3 )
      return 0LL;
  }
  *a2 = v3 - 23;
  return result;
}
