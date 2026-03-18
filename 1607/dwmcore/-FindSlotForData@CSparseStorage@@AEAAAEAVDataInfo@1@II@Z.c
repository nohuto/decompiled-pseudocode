/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800AC9C8
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 * Callees:
 *     ?AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z @ 0x1800ACB94 (-AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(char **this, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  bool v6; // r14
  char *v7; // r8
  char *i; // rbx
  int v9; // edx
  int v10; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  __int64 v12; // r14
  signed __int64 v13; // rbx
  signed __int64 v14; // rbp

  v4 = a3;
  v6 = (__ROR4__(1, a2) & *((_DWORD *)*this + 1)) != 0;
  if ( *this == (char *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
    *this = (char *)CSparseStorage::AllocatedStorage::AllocateStorage(a3);
  v7 = *this;
  for ( i = *this + 12; i + 4 <= &v7[*(unsigned int *)v7]; i += (*(_QWORD *)&v9 & 0xFFFFFFLL) + 4 )
  {
    v9 = *(_DWORD *)i;
    v10 = HIBYTE(*(_DWORD *)i) & 0x7F;
    if ( v10 == a2 )
      return (struct CSparseStorage::DataInfo *)i;
    if ( !v10 )
    {
      if ( &i[v4 + 4] <= &v7[*(unsigned int *)v7] )
      {
        *(_DWORD *)i &= 0xFF000000;
        *(_DWORD *)i |= v4 & 0xFFFFFF;
        return (struct CSparseStorage::DataInfo *)i;
      }
      break;
    }
    if ( !v6 && (v9 & 0xFFFFFF) == (_DWORD)v4 && (__ROR4__(1, v10) & *((_DWORD *)v7 + 1)) == 0 )
      return (struct CSparseStorage::DataInfo *)i;
  }
  v12 = *(unsigned int *)v7;
  v13 = i - v7;
  v14 = v13 + v4 + 28;
  if ( (*(int (__fastcall **)(WPF::ProcessHeapImpl *, char **, signed __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
         WPF::g_pProcessHeap,
         this,
         v14) < 0 )
    RaiseFailFastException(0LL, 0LL, 0);
  memset_0(&(*this)[v12], 0, v14 - v12);
  *(_DWORD *)*this = v14;
  result = (struct CSparseStorage::DataInfo *)&(*this)[v13];
  *(_DWORD *)result &= 0xFF000000;
  *(_DWORD *)result |= v4 & 0xFFFFFF;
  return result;
}
