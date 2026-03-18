/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0026C80
 * Callers:
 *     bKillPFFOBJ @ 0x1C0021758 (bKillPFFOBJ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B6960 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     FreeFileView @ 0x1C00213DC (FreeFileView.c)
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C0027F4C (-vDelete@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2, __int64 a3)
{
  __int64 v3; // rdi
  struct PFFCLEANUP *v4; // rsi
  __int64 i; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  for ( i = *(_QWORD *)(*(_QWORD *)this + 224LL);
        (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)this + 144LL);
        v3 = (unsigned int)(v3 + 1) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)this + 8 * v3 + 224);
    if ( v15 )
      PFEOBJ::vDelete((PFEOBJ *)&v15);
  }
  *((_QWORD *)v4 + 1) = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *(_QWORD *)v4 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *((_QWORD *)v4 + 2) = *(_QWORD *)(*(_QWORD *)this + 168LL);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(*(_QWORD *)this + 168LL);
  if ( v8 )
  {
    v11 = *(_QWORD *)(v8 + 152);
    if ( v11 )
    {
      a3 = *(_QWORD *)(v7 + 24);
      if ( a3 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v11 + 80LL) == a3 )
        {
          v12 = 0LL;
          if ( *(_DWORD *)(v8 + 36) )
          {
            do
            {
              v13 = *(_QWORD *)(*(_QWORD *)this + 168LL);
              v14 = *(_QWORD *)(*(_QWORD *)(v13 + 152) + 8 * v12);
              a3 = v13
                 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 152LL) + 8 * v12) + 80LL)
                 - *(_QWORD *)this;
              v12 = (unsigned int)(v12 + 1);
              *(_QWORD *)(v14 + 80) = a3;
            }
            while ( (unsigned int)v12 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 36LL) );
          }
        }
      }
    }
    a2 = *(struct PFFCLEANUP **)(*(_QWORD *)this + 168LL);
    *((_QWORD *)a2 + 21) = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 152);
    if ( v9 )
    {
      a2 = (struct PFFCLEANUP *)*(unsigned int *)(v7 + 36);
      if ( (_DWORD)a2 )
        FreeFileView(v9, (unsigned int)a2);
    }
    v10 = *(_QWORD *)(*(_QWORD *)this + 208LL);
    if ( v10 )
      Win32FreePool(v10, a2, a3);
  }
  if ( i )
    Win32FreePool(i, a2, a3);
  Win32FreePool(*(_QWORD *)this, a2, a3);
  *(_QWORD *)this = 0LL;
}
