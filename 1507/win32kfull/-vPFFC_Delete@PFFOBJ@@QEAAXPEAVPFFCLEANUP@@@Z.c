/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C012A04C
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x1C01293B4 (bKillPFFOBJ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B4858 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C01296A0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x1C012A648 (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2)
{
  __int64 v2; // rdi
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)this + 216LL);
        (unsigned int)v2 < *(_DWORD *)(*(_QWORD *)this + 144LL);
        v2 = (unsigned int)(v2 + 1) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)this + 8 * v2 + 216);
    if ( v14 )
      PFEOBJ::vDelete((PFEOBJ *)&v14);
  }
  *((_QWORD *)a2 + 1) = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *((_QWORD *)a2 + 2) = *(_QWORD *)(*(_QWORD *)this + 168LL);
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(*(_QWORD *)this + 168LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 152);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v6 + 24);
      if ( v9 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v8 + 80LL) == v9 )
        {
          v10 = 0LL;
          if ( *(_DWORD *)(v7 + 36) )
          {
            do
            {
              v11 = *(_QWORD *)(*(_QWORD *)this + 168LL);
              v12 = *(_QWORD *)(*(_QWORD *)(v11 + 152) + 8 * v10);
              v13 = v11
                  + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 152LL) + 8 * v10) + 80LL)
                  - *(_QWORD *)this;
              v10 = (unsigned int)(v10 + 1);
              *(_QWORD *)(v12 + 80) = v13;
            }
            while ( (unsigned int)v10 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 36LL) );
          }
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 168LL) = 0LL;
  }
  else if ( *(_QWORD *)(v6 + 152) && *(_DWORD *)(v6 + 36) )
  {
    FreeFileView();
  }
  if ( i )
    Win32FreePool(i);
  Win32FreePool(*(_QWORD *)this);
  *(_QWORD *)this = 0LL;
}
