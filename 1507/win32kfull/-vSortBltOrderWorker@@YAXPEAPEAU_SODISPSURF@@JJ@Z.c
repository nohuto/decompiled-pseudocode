/*
 * XREFs of ?vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z @ 0x1C029A100
 * Callers:
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C0294448 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 * Callees:
 *     ?isSorted@@YA_NPEAU_SODISPSURF@@0JJ@Z @ 0x1C0299D14 (-isSorted@@YA_NPEAU_SODISPSURF@@0JJ@Z.c)
 */

void __fastcall vSortBltOrderWorker(struct _SODISPSURF **a1, int a2, int a3)
{
  struct _SODISPSURF *v3; // rbx
  _QWORD *v4; // r14
  int v5; // r9d
  int v7; // r8d
  struct _SODISPSURF *v8; // rdi
  int v9; // esi
  struct _SODISPSURF *v10; // r15
  struct _SODISPSURF *v11; // rcx

  v3 = *a1;
  v4 = 0LL;
  v5 = a3;
  v7 = a2;
  while ( *(_QWORD *)v3 )
  {
    v8 = *(struct _SODISPSURF **)v3;
    v9 = 0;
    v10 = v3;
    if ( *(_QWORD *)v3 )
    {
      while ( !v9 )
      {
        if ( isSorted(v3, v8, v7, v5) )
        {
          v10 = v8;
          v8 = *(struct _SODISPSURF **)v8;
        }
        else
        {
          v11 = *(struct _SODISPSURF **)v8;
          if ( v3 == v10 )
          {
            *(_QWORD *)v8 = v3;
          }
          else
          {
            *(_QWORD *)v8 = *(_QWORD *)v3;
            *(_QWORD *)v10 = v3;
          }
          *(_QWORD *)v3 = v11;
          if ( v4 )
            *v4 = v8;
          else
            *a1 = v8;
          v3 = v8;
          v9 = 1;
        }
        if ( !v8 )
        {
          if ( v9 )
            break;
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      v4 = v3;
      v3 = *(struct _SODISPSURF **)v3;
    }
  }
}
