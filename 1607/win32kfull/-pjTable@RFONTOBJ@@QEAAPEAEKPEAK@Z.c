/*
 * XREFs of ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C029AF60
 * Callers:
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C0283F50 (FONTOBJ_pjOpenTypeTablePointer.c)
 * Callees:
 *     ?QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0029238 (-QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029ACD0 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 */

char *__fastcall RFONTOBJ::pjTable(RFONTOBJ *this, unsigned int a2, unsigned int *a3)
{
  char *v3; // r9
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  char *v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0;
  v6 = *(_QWORD *)this;
  v13 = 0LL;
  v14 = *(_QWORD *)(v6 + 80);
  if ( !v14 )
    goto LABEL_6;
  v8 = *(_QWORD *)(v6 + 120);
  if ( !v8 )
    goto LABEL_6;
  v9 = *(_QWORD *)(v8 + 80);
  if ( !v9 )
    goto LABEL_6;
  if ( (unsigned int)PDEVOBJ::QueryTrueTypeTable((PDEVOBJ *)&v14, v9, 1u, a2, 0, 0, 0LL, (unsigned __int8 **)&v13, &v12) == -1 )
  {
    v3 = 0LL;
LABEL_6:
    v10 = 0;
    goto LABEL_7;
  }
  v3 = RFONTOBJ::pchTranslate(this, v13);
  if ( !v3 )
    goto LABEL_6;
  v10 = v12;
LABEL_7:
  if ( a3 )
    *a3 = v10;
  return v3;
}
