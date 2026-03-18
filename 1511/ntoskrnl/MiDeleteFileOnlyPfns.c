/*
 * XREFs of MiDeleteFileOnlyPfns @ 0x14062C984
 * Callers:
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 */

void __fastcall MiDeleteFileOnlyPfns(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // r14d
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi

  if ( a2 )
  {
    v2 = -1LL;
    v3 = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a1);
      if ( (v7 & 0x800) == 0 )
      {
LABEL_10:
        if ( v3 )
          MiRemovePhysicalMemory(v2, v3, 18);
        return;
      }
      v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
      if ( !v3 )
        goto LABEL_8;
      if ( v3 + v2 != v8 )
        break;
      ++v3;
LABEL_9:
      ++a1;
      if ( ++v4 >= a2 )
        goto LABEL_10;
    }
    MiRemovePhysicalMemory(v2, v3, 18);
LABEL_8:
    v2 = v8;
    v3 = 1LL;
    goto LABEL_9;
  }
}
