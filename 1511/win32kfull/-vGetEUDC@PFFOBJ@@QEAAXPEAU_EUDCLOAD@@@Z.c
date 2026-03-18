/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C00219E0
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C000E1BC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C001E468 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, struct _EUDCLOAD *a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  _WORD *v8; // rdx
  unsigned __int8 v9; // r15
  __int64 v10; // r14
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0LL; i < 16; i += 8LL )
    *(_QWORD *)(i + *(_QWORD *)a2) = 0LL;
  v5 = *(_QWORD *)this;
  if ( !*((_QWORD *)a2 + 1) )
  {
    **(_QWORD **)a2 = *(_QWORD *)(v5 + 216);
    v13 = *(_QWORD *)this;
    v11 = *(__int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)this + 144LL) == 2 )
      v12 = *(_QWORD *)(v13 + 224);
    else
      v12 = *(_QWORD *)(v13 + 216);
    goto LABEL_17;
  }
  v6 = 0LL;
  if ( *(_DWORD *)(v5 + 144) )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 8 * v6 + 216);
      v14 = v7;
      v8 = (_WORD *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL));
      if ( *v8 == 64 )
      {
        v9 = 1;
        v10 = 1LL;
      }
      else
      {
        v9 = 0;
        v10 = 0LL;
      }
      if ( !_wcsicmp(*((const wchar_t **)a2 + 1), &v8[v9]) )
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v10) = v7;
      if ( !*(_QWORD *)(*(_QWORD *)a2 + 8 * v10) )
      {
        if ( (unsigned int)PFEOBJ::bCheckFamilyName((PFEOBJ *)&v14, *((const unsigned __int16 **)a2 + 1), v9, 0LL) )
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v10) = v7;
      }
      v5 = *(_QWORD *)this;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 144LL) );
  }
  v11 = *(__int64 **)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 8LL) )
  {
    v12 = *v11;
LABEL_17:
    v11[1] = v12;
  }
}
