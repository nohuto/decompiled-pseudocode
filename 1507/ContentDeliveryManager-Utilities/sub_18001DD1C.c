/*
 * XREFs of sub_18001DD1C @ 0x18001DD1C
 * Callers:
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 *     sub_18001D8C8 @ 0x18001D8C8 (sub_18001D8C8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

LPSTREAM *__fastcall sub_18001DD1C(LPSTREAM *ppstm, __int64 a2, IUnknown *a3, __int64 a4)
{
  __int64 v6; // rsi
  HRESULT StreamOnHGlobal; // eax

  *ppstm = 0LL;
  *((_DWORD *)ppstm + 2) = 0;
  if ( a2 && a4 )
  {
    v6 = (__int64)*ppstm;
    if ( *ppstm )
    {
      *ppstm = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    StreamOnHGlobal = CreateStreamOnHGlobal(0LL, 1, ppstm);
    *((_DWORD *)ppstm + 2) = StreamOnHGlobal;
    if ( StreamOnHGlobal >= 0 )
      *((_DWORD *)ppstm + 2) = CoMarshalInterface(*ppstm, &riid, a3, 0, 0LL, 1u);
  }
  else
  {
    *((_DWORD *)ppstm + 2) = -2147467262;
  }
  return ppstm;
}
