/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C011F134
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00E5330 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINCNTOUTSTRING @ 0x1C0122410 (SfnINCNTOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C0122FD8 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C0143E80 (ClientGetListboxString.c)
 *     SfnIMECONTROL @ 0x1C020EA00 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020F330 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1C0212760 (SfnPOUTLPINT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C011F21C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  unsigned __int8 *v4; // r8

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  FixupCaptureDataOffsets(a1, a3, v4);
  return 0LL;
}
