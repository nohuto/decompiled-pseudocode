/*
 * XREFs of ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C029BBA0
 * Callers:
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0285C54 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 * Callees:
 *     ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEADPEAPEAX@Z @ 0x1C029B930 (-pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEADPEAPEAX@Z.c)
 *     ?GetTrueTypeFile@PDEVOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02B9440 (-GetTrueTypeFile@PDEVOBJ@@QEAAPEAX_KPEAK@Z.c)
 */

char *__fastcall RFONTOBJ::pvFileUMPD(RFONTOBJ *this, unsigned int *a2, void **a3)
{
  char *v3; // r9
  __int64 v6; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char *TrueTypeFile; // rax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v13 = 0;
  v6 = *(_QWORD *)this;
  v14 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v14
    && (v8 = *(_QWORD *)(v6 + 120)) != 0
    && (v9 = *(_QWORD *)(v8 + 80)) != 0
    && (TrueTypeFile = (char *)PDEVOBJ::GetTrueTypeFile((PDEVOBJ *)&v14, v9, &v13), (v3 = TrueTypeFile) != 0LL)
    && (v3 = RFONTOBJ::pchTranslateUMPD(this, TrueTypeFile, a3)) != 0LL )
  {
    v11 = v13;
  }
  else
  {
    v11 = 0;
  }
  if ( a2 )
    *a2 = v11;
  return v3;
}
