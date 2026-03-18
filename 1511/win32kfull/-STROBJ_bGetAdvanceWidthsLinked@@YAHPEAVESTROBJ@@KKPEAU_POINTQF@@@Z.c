/*
 * XREFs of ?STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z @ 0x1C02B4FFC
 * Callers:
 *     STROBJ_bGetAdvanceWidths @ 0x1C02B67B0 (STROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bGetAdvanceWidthsLinked(struct ESTROBJ *a1, unsigned int a2, int a3, struct _POINTQF *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  struct _POINTQF *v6; // rax

  v4 = a2 + a3;
  v5 = 0;
  *((_QWORD *)a1 + 28) = *((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 29) = *((_QWORD *)a1 + 9);
  while ( v5 < v4 )
  {
    if ( **((_DWORD **)a1 + 28) == *((_DWORD *)a1 + 60) )
    {
      if ( v5 >= a2 )
      {
        v6 = *(struct _POINTQF **)(*((_QWORD *)a1 + 29) + 8LL);
        if ( *(_DWORD *)(**((_QWORD **)a1 + 7) + 652LL) )
        {
          a4->x.HighPart = v6->y.HighPart;
          a4->x.LowPart = 0;
          a4->y.HighPart = 0;
          a4->y.LowPart = 0;
        }
        else
        {
          *a4 = v6[3];
        }
        ++a4;
      }
      ++v5;
    }
    *((_QWORD *)a1 + 29) += 24LL;
    *((_QWORD *)a1 + 28) += 4LL;
  }
  return 1LL;
}
