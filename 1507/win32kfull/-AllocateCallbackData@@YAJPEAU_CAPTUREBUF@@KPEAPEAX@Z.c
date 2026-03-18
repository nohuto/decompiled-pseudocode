/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C005A7F0
 * Callers:
 *     SfnOUTSTRING @ 0x1C005A340 (SfnOUTSTRING.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00E2BA0 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINCNTOUTSTRING @ 0x1C00F0960 (SfnINCNTOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C0118DA0 (ClientGetListboxString.c)
 *     xxxClientLoadStringW @ 0x1C0137008 (xxxClientLoadStringW.c)
 *     SfnIMECONTROL @ 0x1C020E620 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020EF40 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1C0212680 (SfnPOUTLPINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  _BYTE *v4; // rcx
  bool v5; // zf

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (_BYTE *)*((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 4) == 0LL;
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  if ( v5 )
  {
    *a3 = (void *)(v4 - (_BYTE *)a1);
    *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a3 - (_DWORD)a1;
  }
  else
  {
    *a3 = v4;
  }
  return 0LL;
}
