/*
 * XREFs of ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C029B00C
 * Callers:
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C0283F90 (FONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029ACD0 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     ?GetTrueTypeFile@PDEVOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02BBBF4 (-GetTrueTypeFile@PDEVOBJ@@QEAAPEAX_KPEAK@Z.c)
 */

char *__fastcall RFONTOBJ::pvFile(RFONTOBJ *this, unsigned int *a2)
{
  char *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char *TrueTypeFile; // rax
  unsigned int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v11 = 0;
  v5 = *(_QWORD *)this;
  v12 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v12
    && (v6 = *(_QWORD *)(v5 + 120)) != 0
    && (v7 = *(_QWORD *)(v6 + 80)) != 0
    && (TrueTypeFile = (char *)PDEVOBJ::GetTrueTypeFile((PDEVOBJ *)&v12, v7, &v11), (v2 = TrueTypeFile) != 0LL)
    && (v2 = RFONTOBJ::pchTranslate(this, TrueTypeFile)) != 0LL )
  {
    v9 = v11;
  }
  else
  {
    v9 = 0;
  }
  if ( a2 )
    *a2 = v9;
  return v2;
}
