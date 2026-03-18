/*
 * XREFs of ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C0027F4C
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0026C80 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C02BC5E0 (-vDeletePFE@@YAXPEAVPFE@@@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C002A324 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 */

void __fastcall PFEOBJ::vDelete(PFEOBJ *this)
{
  _QWORD *v1; // r8
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)this;
  v3 = *(_QWORD *)(**(_QWORD **)this + 88LL);
  v9 = v3;
  if ( *(_BYTE *)(v1[4] + 44LL) == 2 )
  {
    v7 = v1[2];
    if ( v7 )
    {
      v8 = *(unsigned int *)(v7 + 4);
      if ( (v8 & 0x10) != 0 )
      {
        Win32FreePool(v7, v8, v1);
LABEL_16:
        v3 = v9;
        goto LABEL_3;
      }
    }
  }
  v4 = (void *)v1[2];
  if ( v4 )
  {
    if ( !*(_QWORD *)(v3 + 3048) )
      goto LABEL_6;
    PDEVOBJ::Free((PDEVOBJ *)&v9, v4, v1[3]);
    goto LABEL_16;
  }
LABEL_3:
  if ( *(_QWORD *)(v3 + 3048) )
  {
    PDEVOBJ::Free((PDEVOBJ *)&v9, *(void **)(*(_QWORD *)this + 32LL), *(_QWORD *)(*(_QWORD *)this + 40LL));
    v1 = *(_QWORD **)this;
    v4 = *(void **)(*(_QWORD *)this + 48LL);
    if ( v4 != &gkpNothing )
      PDEVOBJ::Free((PDEVOBJ *)&v9, v4, v1[7]);
  }
LABEL_6:
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v5 )
  {
    Win32FreePool(v5, v4, v1);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v6 )
  {
    Win32FreePool(v6, v4, v1);
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  }
  *(_QWORD *)this = 0LL;
}
